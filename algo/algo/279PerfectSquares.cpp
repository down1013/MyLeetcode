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

int numSquares(int n)
{
	vector<int> nums(n,0);
	for(int i=1;i<=n;i++)
	{
		int num=sqrt(i);
		if(num*num==i) nums[i-1]=1;
		else{
			int small=INT_MAX;
			for(int j=1;j<=num;j++)
			{
				small=min(small,nums[i-j*j-1]+1);	
			}
			nums[i-1]=small;
		}
	}
	return nums[n-1];
}

int main()
{
    cout<<numSquares(1);
	return 0;
}
