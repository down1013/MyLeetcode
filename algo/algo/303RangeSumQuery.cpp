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

class NumArray {
    vector<int> sums;
public:
    NumArray(vector<int> &nums) {
        int sum=0;
        for(int i:nums)
        {
            sum+=i;
            sums.push_back(sum);
        }
    }
    
    int sumRange(int i, int j) {
        if(i>j) return 0;
        if(!i) return sums[j];
        else return sums[j]-sums[i-1];
    }
};


int main()
{
    cout<<totalNQueens(4);
}
