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

int search(vector<int>& nums, int target) {
    int left=0,right=nums.size()-1;
    while(left<=right)
    {
        int mid=(left+right)>>1;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>nums[left]){
            if(nums[left]<=target&&nums[mid-1]>=target)right=mid-1;
            else left=mid+1;
        }
        else{
            if(nums[mid+1]<=target&&nums[right]>=target)left=mid+1;
            else right=mid-1;
        }
    }
    return -1;
}

int main()
{
	return 0;
}
