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

int missingNumber(vector<int>& nums) {
	int total=(nums.size()+1)*nums.size()/2;
	for(int i=0;i<nums.size();i++)
	{
		total-=nums[i];
	}
	return total;
}

int main()
{
	    
	return 0;
}
