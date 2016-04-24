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

vector<int> genDP(vector<vector<vector<int>>> &dp,int left,int right,vector<int>& nums,vector<char>& oper){
    vector<int> res;
    if(left == right) {
        res.push_back(nums[left]);
        return res;
    }
    for(int i=left;i<right;++i){
        if(dp[left][i].empty()) dp[left][i]=genDP(dp,left, i, nums, oper);
        if(dp[i+1][right].empty()) dp[i+1][right]=genDP(dp, i+1, right, nums, oper);
        for(int j:dp[left][i])
            for(int k : dp[i+1][right]){
                if(oper[i]=='+'){
                    res.push_back(j+k);
                }else if(oper[i]=='-'){
                    res.push_back(j-k);
                }else if(oper[i]=='*'){
                    res.push_back(j*k);
                }
            }
    }
    return res;
    
}

vector<int> diffWaysToCompute(string input) {
    vector<int> nums;
    vector<char> oper;
    int num=0;
    for(char ch : input){
        if(ch=='+'||ch=='-'||ch=='*'){
            oper.push_back(ch);
            nums.push_back(num);
            num = 0;
        }else{
            num = 10*num +ch-'0';
        }
    }
    nums.push_back(num);
    if(oper.empty()) return nums;
    
    int len = nums.size();
    vector<vector<vector<int>>> dp(len,vector<vector<int>>(len,vector<int>{}));
    return genDP(dp,0,len-1,nums,oper);
}

int main()
{
	return 0;
}
