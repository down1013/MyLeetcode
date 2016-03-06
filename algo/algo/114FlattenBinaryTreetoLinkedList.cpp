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

void flatten(TreeNode* root) {
    TreeNode* res=root;
    while(root){
        if(root->left){
                if(root->right){
                    TreeNode* temp=root->left;
                    while(temp->right){
                        temp=temp->right;
                    }
                    temp->right=root->right;
                }
                root->right=root->left;
                root->left=NULL;
        }
        root=root->right;
    }
    root=res;
}

int main()
{	return 0;
}
