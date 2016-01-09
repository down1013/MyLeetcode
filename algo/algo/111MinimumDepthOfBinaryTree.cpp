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

using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

void calDepth(TreeNode* root,int dep,vector<int>& res)
{
	if((!root->left)&&(!root->right)) res.push_back(dep);
	if(root->left) calDepth(root->left,dep+1,res);
	if(root->right) calDepth(root->right,dep+1,res);
}
int minDepth(TreeNode* root) {
	if(!root) return 0;
	vector<int> res;
	calDepth(root,1,res);
	return *min_element(res.begin(),res.end());
}

int main()
{
	    
	return 0;
}
