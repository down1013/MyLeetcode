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

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m=obstacleGrid.size(),n=obstacleGrid[0].size();
    vector<vector<int>> rct(m,vector<int>(n,0));
    for(int i=0;i<m;++i)
        for(int j=0;j<n;++j)
        {
            if(i==0&&j==0) rct[i][j]=1;
            else if(i==0) rct[i][j]=(obstacleGrid[i][j-1]==0)?rct[i][j-1]:0;
            else if(j==0) rct[i][j]=(obstacleGrid[i-1][j]==0)?rct[i-1][j]:0;
            else{
                if(obstacleGrid[i][j-1]==0) rct[i][j]+=rct[i][j-1];
                if(obstacleGrid[i-1][j]==0) rct[i][j]+=rct[i-1][j];
            }
            if(obstacleGrid[i][j]==1) rct[i][j]=0;
        }
    return rct[m-1][n-1];
}

int main()
{
    cout<<isAnagram("s", "b");
	return 0;
}
