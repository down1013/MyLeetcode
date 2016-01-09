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

int minPathSum(vector<vector<int>>& grid) {
    int m=grid.size(),n=grid[0].size();
	vector<int> dp(n);
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
		{
			if(i==0)
			{
				if(j==0)
				dp[j]=grid[i][j];
				else 
				dp[j]=dp[j-1]+grid[i][j];
			}
			else if(j==0)
			{
				dp[0]+=grid[i][j];
			}
			else{
				dp[j]=min(dp[j],dp[j-1])+grid[i][j];
			}
		}
	return dp[n-1];



    }
int main()
{
    cout<<isAnagram("s", "b");
	return 0;
}
