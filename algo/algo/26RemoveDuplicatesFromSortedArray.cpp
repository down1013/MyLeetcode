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

int removeDuplicates(vector<int>& nums) {
    set<int> res;
    for(auto i : nums) res.insert(i);
    int j=0;
    for(set<int>::iterator i=res.begin();i!=res.end();++i)
        nums[j++]=*i;
    return res.size();
}



int main()
{
    vector<int> nums{1,1,2,2};
    cout<<removeDuplicates(nums)<<endl;
	return 0;
}
