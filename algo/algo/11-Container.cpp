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

int maxArea(vector<int>& height) {
	int i=0,j=height.size()-1;
	int res=0;
	while(i<j)
	{
		if((j-i)*min(height[i],height[j])>res) res=(j-i)*min(height[i],height[j]);
		if(height[i]<height[j]) i++;
		else j--;
	}
	return res;
}

int main()
{
    vector<int> a={3,5,8,4};
	cout<<maxArea(a);
	return 0;
}
