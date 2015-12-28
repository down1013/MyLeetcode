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

int rob(vector<int>& nums) {
	if(nums.empty()) return 0;
	if(nums.size()==1) return nums[0];
	vector<int> res(nums.size(),0);
	res[0]=nums[0];
	res[1]=max(nums[0],nums[1]);
	for(int i=2;i<nums.size();i++)
	{
		res[i]=max(res[i-1],res[i-2]+nums[i]);
	}
	return res.back();
}


int main()
{
	    
	return 0;
}
