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

int minDistance(string word1, string word2) {
		int m=word1.size(),n=word2.size();
		vector<vector<int>> dp(m+1,vector<int>(n+1));
		for(int i=0;i<m+1;++i)
			for(int j=0;j<n+1;++j)
			{
				if(i==0)
					dp[i][j]=j;
				else if(j==0)
					dp[i][j]=i;
				else{
                    int a=dp[i-1][j-1]+(word1[i-1]==word2[j-1]?0:1);
                    int b=dp[i-1][j]+1;
                    int c=dp[i][j-1]+1;
                    dp[i][j]=min(dp[i-1][j-1]+(word1[i-1]==word2[j-1]?0:1),
							min(dp[i-1][j]+1,dp[i][j-1]+1));
				}
			}
		return dp[m][n];
	}

int main()
{
    cout<<minDistance("a", "ab");
	return 0;
}
