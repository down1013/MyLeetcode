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
#include <unordered_set>

using namespace std;

class NumMatrix {
public:
    vector<vector<int>> sums;
    NumMatrix(vector<vector<int>> &matrix) {
        if(matrix.empty()) return;
        sums.resize(matrix.size(),vector<int>(matrix[0].size()));
        vector<int> line(matrix[0].size());
        for(int i=0;i<matrix.size();++i)
        {
            for(int j=0;j<matrix[0].size();++j)
            {
                if(i==0&&j==0){line[0]=matrix[0][0];sums[0][0]=line[0];}
                else if(i==0){line[j]=line[j-1]+matrix[0][j];sums[0][j]=line[j];}
                else if(j==0){line[0]=matrix[i][j];sums[i][0]=sums[i-1][0]+line[0];}
                else{line[j]=line[j-1]+matrix[i][j];sums[i][j]=line[j]+sums[i-1][j];}
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if(sums.empty()) return 0;
        if(row1==0&&col1==0) return sums[row2][col2];
        else if(row1==0) return sums[row2][col2]-sums[row2][col1-1];
        else if(col1==0) return sums[row2][col2]-sums[row1-1][col2];
        else return sums[row2][col2]-sums[row1-1][col2]-sums[row2][col1-1]+sums[row1-1][col1-1];
    }
};

int main()
{
    
}
