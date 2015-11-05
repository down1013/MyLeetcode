//
//  test.cpp
//  hello
//
//  Created by ysx on 15-9-22.
//  Copyright (c) 2015年 ysx. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <map>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
  vector<vector<int>> res;
  if(nums.size()<3) return res;
    sort(nums.begin(),nums.end());
  for(int i=0;i<nums.size()-2;++i)
  {
    if(i>0&&nums[i]==nums[i-1]) continue;
	int j=i+1;
	int k=nums.size()-1;
	while(j<k)
	{
		if(nums[j]+nums[k]+nums[i]==0)
		{
            int num2=nums[j],num3=nums[k];
            res.push_back(vector<int>{nums[i],nums[j],nums[k]});
            while(j<k&&nums[j]==num2)j++;
            while(j<k&&nums[k]==num3)k--;
        }
		else if(nums[j]+nums[k]+nums[i]>0) k--;
		else j++;
	}
  }
  return res; 
}

int main()
{
    vector<int> num={0,0,0};
    vector<vector<int>> a=threeSum(num);
    for(int i=0;i<a.size();i++)
        for(int j=0;j<a[i].size();j++)
        cout<<a[i][j]<<endl;
    return 0;
}
