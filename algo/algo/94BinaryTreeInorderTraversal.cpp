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

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> res;
    if(!root) return res;
    stack<pair<TreeNode*,int>> path;
    path.push(make_pair(root,0));
    while(!path.empty())
    {
        auto x=&path.top();
        if(x->second==0){
            if(x->first->left)
            path.push(make_pair(x->first->left,0));
            x->second++;
        }else if(x->second==1){
                res.push_back(x->first->val);
                path.pop();
                if(x->first->right)
                    path.push(make_pair(x->first->right,0));
        }
    }
    return res;
}


int main()
{
    
}
