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

void getSubSet(vector<vector<int>>&res,vector<int> cur,vector<int>& nums,int i)
{
    if(i>=nums.size()) {res.push_back(cur); return;}
    getSubSet(res, cur, nums, i+1);
    cur.push_back(nums[i]);
    getSubSet(res, cur, nums, i+1);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> res;
    sort(nums.begin(),nums.end());
    vector<int> cur;
    getSubSet(res, cur, nums, 0);
    return res;
}

int main()
{
    return 0;
}
