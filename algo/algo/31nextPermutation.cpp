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

void nextPermutation(vector<int>& nums) {
	if(nums.empty()||nums.size()==1) return;
	int start=0;
	for(int i=nums.size()-1;i>=1;i--)
	{
		if(nums[i]>nums[i-1])
		{
			start=i;
			break;
		}
	}
	for(int i=0;i<=(nums.size()-1-start)/2;i++)
	{
		swap(nums[i+start],nums[nums.size()-i-1]);
	}
	if(start){
		int chg;
		for(int i=start;i<=nums.size()-1;i++)
		{
			if(nums[i]>nums[start-1])
			{chg=i;break;}
		}
		swap(nums[chg],nums[start-1]);
	}
}

int main()
{
	    
	return 0;
}
