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


void getCnt(TreeNode* root,TreeNode* p,TreeNode *q,int& res){
    if(!root) return;
    if(root==p||root==q) res+=1;
    getCnt(root->left,p,q,res);
    getCnt(root->right,p,q,res);
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(!root) return NULL;
    bool self=root==p||root==q;
    int res=0;
    getCnt(root->left,p,q,res);
    if(res==2) return lowestCommonAncestor(root->left, p, q);
    else if(res==1) return root;
    else if(self) return root;
    else return lowestCommonAncestor(root->right, p, q);
}


int main()
{
	return 0;
}
