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

bool increasingTriplet(vector<int>& nums) {
    if(nums.size()<3) return false;
    int one=nums[0],two=INT_MAX;
    for(int i=1;i<nums.size();++i)
    {
        if(nums[i]>two)
            return true;
        else if(nums[i]>one)
        {
            two=nums[i];
        }
        else
            one=nums[i];
    }
    return false;
}

int main()
{
    return 0;
}
