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

using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> res;
	if(nums.empty()) return res;
	int begin(0),end(0);
	for(int i=0;i<nums.size()-1;i++)
	{
		if(nums[i]+1==nums[i+1]) continue;
		end=i;
		if(begin!=end) res.push_back(to_string(nums[begin])+"->"+to_string(nums[end]));
		else res.push_back(to_string(nums[begin]));
		begin=end+1;
	}
	end=nums.size()-1;
	if(begin!=end) res.push_back(to_string(nums[begin])+"->"+to_string(nums[end]));
	else res.push_back(to_string(nums[begin]));


    }
int main()
{
	    
	return 0;
}
