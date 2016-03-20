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

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(!root) return NULL;
    if(root->val==p->val) return p;
    else if(root->val ==q->val) return q;
    else if(root->val>p->val&&root->val>q->val)
        return lowestCommonAncestor(root->left, p, q);
    else if(root->val<p->val&&root->val<q->val)
        return lowestCommonAncestor(root->right, p, q);
    else
        return root;
}


int main()
{
	return 0;
}
