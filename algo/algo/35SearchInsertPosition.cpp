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

using namespace std;

int searchbin(vector<int>& nums,int low, int high,int target)
{
    int middle=(low+high)/2;
    //int middle =low+(high-low)*(target-nums[low])/(nums[high]-nums[low]);
    if(nums[middle]==target)
        return middle;
    else if(nums[middle]>target&&middle-1>=low)
        return searchbin(nums,low,middle-1,target);
    else if(nums[middle]<target&&middle+1<=high)
        return searchbin(nums,middle+1,high,target);
    else return middle;
        
}
int searchInsert(vector<int>& nums, int target) {
    int num=searchbin(nums, 0, nums.size()-1, target);
    if(nums[num]>=target) return num;
    else return num+1;
}

int main()
{
    vector<int> nums{1,3};
    cout<<searchInsert(nums, 2);
	return 0;
}
