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

int findDuplicate(vector<int>& nums) {
    if(nums.size()<2) return 0;
    int fast=0,slow=0;
    
	do{
		slow=nums[slow];
		fast=nums[nums[fast]];
    }while(fast!=slow);
	fast=0;
	do{
		slow=nums[slow];
		fast=nums[fast];
	}while(fast!=slow);
	return fast;
}

int main()
{
	return 0;
}
