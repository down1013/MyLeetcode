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

int firstMissingPositive(vector<int>& nums) {
    if(!nums.size()) return 1;
    set<int> res;
    for(auto i:nums)
        if(i>0)
            res.insert(i);
    for(int i=1;i<=res.size();i++)
        if(!res.count(i))
            return i;
    return res.size()+1;
}

int main()
{
    vector<int> nums{3,4,-1,1};
    cout<<firstMissingPositive(nums);
	return 0;
}
