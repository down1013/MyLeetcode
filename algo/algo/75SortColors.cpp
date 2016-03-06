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

void sortColors(vector<int>& nums) {
    int cur=0,front=0,back=nums.size()-1;
    while(cur<=back)
    {
        if(nums[cur]==0)
        {swap(nums[cur],nums[front]);front++;cur++;}
        else if(nums[cur]==1)
        {cur++;}
        else{
            swap(nums[cur],nums[back]);back--;
        }
    }
    
}

int main()
{
	return 0;
}
