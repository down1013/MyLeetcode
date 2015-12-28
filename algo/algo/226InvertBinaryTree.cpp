// //  test.cpp //  hello //
//  Created by ysx on 15-9-22.
//  Copyright (c) 2015年 ysx. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string>
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

TreeNode* invertTree(TreeNode* root){
	if(!root) return NULL;
	swap(root->left,root->right);
	if(root->left) invertTree(root->left);
	if(root->right) invertTree(root->right);
	return root;
}
int main()
{
	return 0;
}
