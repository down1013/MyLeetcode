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

int maxSubArray(vector<int>& nums) {
	if(nums.empty()) return 0;
	int endhere=nums[0];
	int res=endhere;
	int size=nums.size();
	for(int i=1;i<size;++i){
		endhere=max(endhere+nums[i],nums[i]);
		res=max(res,endhere);
	}
	return res;

}

int main()
{
    cout<<isAnagram("s", "b");
	return 0;
}
