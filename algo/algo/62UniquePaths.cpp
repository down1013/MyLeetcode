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

int uniquePaths(int m, int n) {
    vector<vector<int>> rct(m,vector<int>(n,1));
    for(int i=1;i<m;++i)
        for(int j=1;j<n;++j)
        {
            rct[i][j]=rct[i][j-1]+rct[i-1][j];
        }
    return rct[m-1][n-1];
}

int main()
{
    cout<<isAnagram("s", "b");
	return 0;
}
