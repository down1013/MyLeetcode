// //  test.cpp //  hello //
//  Created by ysx on 15-9-22.
//  Copyright (c) 2015年 ysx. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string>
#include <array>
#include <stack>
#include <algorithm>

using namespace std;

int numTrees(int n)
{
	vector<int> nums(n+1,0);
	nums[0]=1;
	for(int i=1;i<=n;i++)
	{
		int num=0;
		for(int j=1;j<=i;j++)
		{
			int left=nums[j-1];
			int right=nums[i-j];
			num+=left*right;
		}
		nums[i]=num;
	}
	return nums[n];
}

int main()
{
	return 0;
}
