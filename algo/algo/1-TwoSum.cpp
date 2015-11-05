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

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) 
{ 
	vector<int> index;
	map<int,int> a;
	for(int i=0;i<nums.size();i++)
	{
		if(a.count(target-nums[i]))
		{index.push_back(a[target-nums[i]]+1);index.push_back(i+1);break;}
        a[nums[i]]=i;
	}
    return index;
}

int main()
{
	vector<int> a;a.push_back(3);a.push_back(2);a.push_back(4);
	vector<int> index=twoSum(a, 6);
	for(int i=0;i<index.size();i++) cout<<index[i]<<endl;
	return 0;
}
