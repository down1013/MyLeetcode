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

int calNumbers(TreeNode*node,int curnum){
    if(!node) return 0;
    curnum=10*curnum+node->val;
    if((!node->left)&&(!node->right)) return curnum;
    int res=0;
    if(node->left) res+=calNumbers(node->left, curnum);
    if(node->right) res+=calNumbers(node->right, curnum);
    return res;
}

int sumNumbers(TreeNode* root) {
    return calNumbers(root, 0);
}

int main(){
    return 0;
}
