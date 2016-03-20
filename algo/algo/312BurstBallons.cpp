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

int maxCoins(vector<int>& nums) {
    if(nums.empty()) return 0;
    vector<vector<int>> dp(nums.size(),vector<int>(nums.size(),0));
    for(int i=0;i<nums.size();++i)
        for(int j=0;j<nums.size()-i;++j)
        {
            int y=i+j;
            int x=j;
            int sum=0;
            for(int k=x;k<=y;++k)
            {
                int mid=nums[k]*((x>=1)?nums[x-1]:1)*((y<nums.size()-1)?nums[y+1]:1);
                int left=((k>=1&&x<=k-1)?dp[k-1][x]:0);
                int right=((k<nums.size()-1&&k+1<=y)?dp[y][k+1]:0);
                sum=max(sum,left+mid+right);
            }
            dp[y][x]=sum;
        }
    
    return dp[nums.size()-1][0];
}


int main()
{
	return 0;
}
