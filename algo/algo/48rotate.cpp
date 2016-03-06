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

void rotate(vector<vector<int>>& matrix) {
    int row=matrix.size(),line=matrix[0].size();
    for(int i=0;i<row/2;i++)
    {
        for(int j=0;j<line;j++)
        {
            swap(matrix[i][j],matrix[row-i-1][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<line;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
}

int main()
{
    
	return 0;
}
