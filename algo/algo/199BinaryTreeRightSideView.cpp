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

vector<int> rightSideView(TreeNode* root) {
	if(!root) return vector<int>(0);
	queue<TreeNode*> level;
	level.push(root);
	vector<int> res;
	while(!level.empty())
	{
		int sz=level.size();
		for(int i=0;i<sz;i++)
		{
			TreeNode* node=level.front();
			level.pop();
			if(node->left) level.push(node->left);
			if(node->right) level.push(node->right);
			if(i==sz-1) res.push_back(node->val);
		}
	}
	return res;
}

int main()
{
	    
	return 0;
}
