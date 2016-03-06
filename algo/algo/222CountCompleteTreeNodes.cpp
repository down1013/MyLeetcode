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

int depthOfCompleteTree(TreeNode* tree)
{
    int count=0;
    while(tree){
        count++;
        tree=tree->left;
    }
    return count;
}

int countNodes(TreeNode* root) {
    if(!root) return 0;
    int depth=0;
    int num=0;
    while(root)
    {
        depth++;
        if((!root->left)&&(!root->right)) break;
        num*=2;
        if(depthOfCompleteTree(root->left)==depthOfCompleteTree(root->right))
        {
            root=root->right;
            num+=1;
        }
        else
        {
            root=root->left;
        }
    }
    return (1<<(depth-1))+num;
}


int main()
{
	return 0;
}
