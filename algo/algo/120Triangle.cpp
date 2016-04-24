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

int minimumTotal(vector<vector<int>>& triangle) {
    if(triangle.empty()) return 0;
    if(triangle.size()==1) return triangle[0][0];
    vector<int> dp = triangle.back();
    for(int y=triangle.size()-2;y>=0;y--){
        for(int x=0;x<=y;++x){
            dp[x]=triangle[y][x] + min(dp[x],dp[x+1]);
        }
    }
    return dp[0];
}

int main()
{
    return 0;
}
