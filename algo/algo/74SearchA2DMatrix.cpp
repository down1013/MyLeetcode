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

bool findTarget(vector<vector<int>>& matrix,int x1,int y1,int x2,int y2,int target){
    if(x1>x2||y1>y2) return false;
    int midx=(x1+x2)>>1;
    int midy=(y1+y2)>>1;
    if(matrix[midy][midx]==target) return true;
    else if(matrix[midy][midx]>target)
        return findTarget(matrix, x1, y1, midx-1, y2, target)||findTarget(matrix, midx, y1, x2, midy-1, target);
    else
        return findTarget(matrix, midx+1, y1, x2, y2, target)||findTarget(matrix, x1, midy+1, midx, y2, target);
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    return findTarget(matrix,0,0,matrix[0].size()-1,matrix.size()-1,target);
}

int main()
{
	return 0;
}
