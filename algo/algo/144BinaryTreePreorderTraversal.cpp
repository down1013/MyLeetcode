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
#include <array>
#include <stack>
#include <algorithm>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct TreeNode {
    int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

void preorderRecur(TreeNode* root,vector<int>& res){
    if(!root) return;
    res.push_back(root->val);
    if(root->left) preorderRecur(root->left, res);
    if(root->right) preorderRecur(root->right, res);
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> res;
    preorderRecur(root, res);
    return res;
}

int main()
{
    
}
