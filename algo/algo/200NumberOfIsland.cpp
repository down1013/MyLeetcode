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

using namespace std;

void clearIsland(int i,int j,vector<vector<char>>& grid){
	if(grid[i][j]=='0') return;
	grid[i][j]='0';
	if(i>0) clearIsland(i-1,j,grid); 
	if(i<grid.size()-1) clearIsland(i+1,j,grid);
	if(j>0) clearIsland(i,j-1,grid);
	if(j<grid[0].size()-1) clearIsland(i,j+1,grid);
}

int numIslands(vector<vector<char>>& grid) {
	if(grid.empty()) return 0;
	int res=0;
	for(int i=0;i<grid.size();i++)        
		for(int j=0;j<grid[0].size();j++)
			if(grid[i][j]=='1')
			{
				++res;
				clearIsland(i,j,grid);
			}
	return res;
}
int main()
{
	    
	return 0;
}
