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

TreeNode* genBST(vector<int>& nums,int min,int max){
    if(min>max) return NULL;
    int mid=(min+max)>>1;
    TreeNode* root=new TreeNode(nums[mid]);
    root->left=genBST(nums, min, mid-1);
    root->right=genBST(nums, mid+1, max);
    return root;
}


TreeNode* sortedArrayToBST(vector<int>& nums) {
    return genBST(nums, 0, nums.size()-1);
}


int main()
{
	return 0;
}
