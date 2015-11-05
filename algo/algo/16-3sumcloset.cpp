//
//  test.cpp
//  hello
//
//  Created by ysx on 15-9-22.
//  Copyright (c) 2015年 ysx. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <map>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

int threeSumClosest(vector<int>& nums,int target) {
  if(nums.size()<3) return 0;
  sort(nums.begin(),nums.end());
  int res=nums[0]+nums[1]+nums[nums.size()-1];
  for(int i=0;i<nums.size()-2;++i)
  {
    if(i>0&&nums[i]==nums[i-1]) continue;
	int j=i+1;
	int k=nums.size()-1;
	while(j<k)
	{
		if(abs(nums[i]+nums[j]+nums[k]-target)<abs(res-target)) res=nums[i]+nums[j]+nums[k];
        if(nums[i]+nums[j]+nums[k]>target) k--;
		else j++;
	}
  }
  return res; 
}

int main()
{
    vector<int> nums{-1,2,1,-4};
	cout<<threeSumClosest(nums,1);
	return 0;
}
