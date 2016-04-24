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

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

int majorityElement(vector<int>& nums) {
    int res=nums[0];
    int count=1;
    for(int i=1;i<nums.size();++i){
        if(nums[i]==res){
            count++;
        }else{
            count--;
            if(count==0){
                res=nums[i];
                count=1;
            }
        }
    }
    return res;
}


int main()
{
	return 0;
}
