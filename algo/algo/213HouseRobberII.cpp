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

int robBetween(vector<int>&nums, int min,int max){
	if(min==max) return nums[min];
	vector<int> res(max-min+1,0);
	res[0]=nums[min];
	res[1]=max(nums[min],nums[min+1]);
	for(int i=2;i<res.size();i++){
		res[i]=max(res[i-1],res[i-2]+nums[min+i]);
	}
	return res.back();
}

int rob(vector<int>& nums) {
	if(nums.empty()) return 0;
	if(nums.size()==1) return nums[0];
	return max(robBetween(nums,0,nums.size()-2),robBetween(nums,1,nums.size()-1));
}


int main()
{
	    
	return 0;
}
