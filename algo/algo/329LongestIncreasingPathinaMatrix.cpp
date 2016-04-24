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

int calcLongest(vector<vector<int>>& dp,int x,int y,vector<vector<int>>& matrix,int w,int h)
{
    int longest = 1;
    if(x>0&&matrix[y][x]<matrix[y][x-1])
    {
        if(dp[y][x-1]==0){
            dp[y][x-1]=calcLongest(dp,x-1,y,matrix,w,h);
        }
        longest = max(longest,dp[y][x-1]+1);
    }
    if(y>0&&matrix[y][x]<matrix[y-1][x])
    {
        if(dp[y-1][x]==0){
            dp[y-1][x]=calcLongest(dp,x,y-1,matrix,w,h);
        }
        longest = max(longest,dp[y-1][x]+1);
    }
    if(x<w-1&&matrix[y][x]<matrix[y][x+1])
    {
        if(dp[y][x+1]==0){
            dp[y][x+1]=calcLongest(dp,x+1,y,matrix,w,h);
        }
        longest = max(longest,dp[y][x+1]+1);
    }
    if(y<h-1&&matrix[y][x]<matrix[y+1][x])
    {
        if(dp[y+1][x]==0){
            dp[y+1][x]=calcLongest(dp,x,y+1,matrix,w,h);
        }
        longest = max(longest,dp[y+1][x]+1);
    }
    return longest;
}

int longestIncreasingPath(vector<vector<int>>& matrix) {
    if(!matrix.size()) return 0;
    int h = matrix.size();
    int w = matrix[0].size();
    vector<vector<int>> dp(h,vector<int>(w,0));
    int res=1;
    for(int y=0; y<h; ++y){
        for(int x=0; x<w; ++x){
            res=max(res,calcLongest(dp,x,y,matrix,w,h));
        }
    }
    return res;
}


int main()
{
	return 0;
}
