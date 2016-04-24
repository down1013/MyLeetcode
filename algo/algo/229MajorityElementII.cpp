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
#include <cmath>
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

vector<int> majorityElement(vector<int>& nums) {
    vector<int> res;
    if(nums.empty()) return nums;
    int n1=-1,n2=-1;
    int c1=0,c2=0;
    for(int i=0;i<nums.size();++i){
        if(nums[i]==n1&&c1!=0){
            c1++;
        }else if(nums[i]==n2&&c2!=0){
            c2++;
        }else if(c1==0){
            n1=nums[i];
            c1++;
        }else if(c2==0){
            n2=nums[i];
            c2++;
        }else {
            c1--;
            c2--;
        }
    }
    c1=0;c2=0;
    for(auto i:nums){
        if(i==n1)
            c1++;
        else if(i==n2)
            c2++;
    }
    if(c1>nums.size()/3) res.push_back(n1);
    if(c2>nums.size()/3) res.push_back(n2);
    
    return res;
}

int main()
{
	return 0;
}
