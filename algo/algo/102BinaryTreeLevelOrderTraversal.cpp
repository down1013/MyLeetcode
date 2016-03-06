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

using namespace std;

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };


vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> res;
    if(!root) return res;
    queue<TreeNode*> tree;
    tree.push(root);
    while(!tree.empty())
    {
        int sz=tree.size();
        vector<int> temp;
        for(int i=0;i<sz;i++)
        {
            TreeNode* treeNode=tree.front();
            tree.pop();
            temp.push_back(treeNode->val);
            if(treeNode->left)tree.push(treeNode->left);
            if(treeNode->right)tree.push(treeNode->right);
        }
        res.push_back(temp);
    }
    return res;
}


int main()
{
    return 0;
}
