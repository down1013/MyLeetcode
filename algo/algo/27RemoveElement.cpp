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

int removeElement(vector<int>& nums, int val) {
    vector<int> res;
    for(auto i: nums)
        if(i!=val)
            res.push_back(i);
    nums=res;
    return res.size();
}

int main()
{
    vector<int> nums{1,1,2,2};
    cout<<removeElement(nums, 1);
	return 0;
}
