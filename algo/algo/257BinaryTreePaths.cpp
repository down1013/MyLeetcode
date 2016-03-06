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

void findTree(vector<string>& res,string path,TreeNode* root){
    if((!root->left)&&(!root->right)){res.push_back(path+"->"+to_string(root->val)); return;}
    if(root->left)
        findTree(res,path+"->"+to_string(root->val),root->left);
    if(root->right)
        findTree(res,path+"->"+to_string(root->val),root->right);
    
}

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> res;
    if(!root) return res;
    if((!root->left)&&(!root->right)){
        res.push_back(to_string(root->val));
        return res;
    }
    if(root->left)
        findTree(res,to_string(root->val),root->left);
    if(root->right)
        findTree(res,to_string(root->val),root->right);
    return res;
}

int main()
{
	return 0;
}
