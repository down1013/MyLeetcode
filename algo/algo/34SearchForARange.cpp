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
    else return -1;
        
}
vector<int> searchRange(vector<int>& nums, int target) {
    int num=searchbin(nums, 0, nums.size()-1, target);
    if(num==-1) return vector<int>{-1,-1};
    int left=num,right=num;
    while(left>=1&&nums[left-1]==nums[num]) left--;
    while(right<=nums.size()-2&&nums[right+1]==nums[num]) right++;
    return vector<int>{left,right};
}

int main()
{
    vector<int> nums{1};
    vector<int> res=searchRange(nums,0);
    for(auto i : res) cout<<i;
	return 0;
}
