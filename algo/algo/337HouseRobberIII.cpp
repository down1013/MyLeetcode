// //  test.cpp //  hello //
//  Created by ysx on 15-9-22.
//  Copyright (c) 2015年 ysx. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <array>
#include <stack>
#include <algorithm>

using namespace std;

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

unordered_map<TreeNode*, int> cnt;

int rob(TreeNode* root) {
    if(!root) return 0;
    int m1=0;
    if(!cnt.count(root->left))
        cnt[root->left]=rob(root->left);
    m1+=cnt[root->left];
    if(!cnt.count(root->right))
        cnt[root->right]=rob(root->right);
    m1+=cnt[root->right];
    int m2=root->val;
    if(root->left)
    {
        if(!cnt.count(root->left->left))
            cnt[root->left->left]=rob(root->left->left);
        m2+=cnt[root->left->left];
        if(!cnt.count(root->left->right))
            cnt[root->left->right]=rob(root->left->right);
        m2+=cnt[root->left->right];
    }
    if(root->right)
    {
        if(!cnt.count(root->right->left))
            cnt[root->right->left]=rob(root->right->left);
        m2+=cnt[root->right->left];
        if(!cnt.count(root->right->right))
            cnt[root->right->right]=rob(root->right->right);
        m2+=cnt[root->right->right];
    }
    
    return max(m1,m2);
}

int main()
{
	return 0;
}
