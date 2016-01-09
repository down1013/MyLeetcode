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

vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> res(nums.size(),1);        
		int right=1;
		for(int i=1;i<nums.size();i++)
		{
			res[i]*=res[i-1]*nums[i-1];
		}
		for(int i=nums.size()-1;i>=0;i--)
		{
			res[i]*=right;
			right*=nums[i];
		}
		return res;
    }

int main()
{
    cout<<isAnagram("s", "b");
	return 0;
}
