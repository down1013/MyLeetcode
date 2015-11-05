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

bool isPalindrome(int x)
{
	vector<int> v;
	v.reserve(100);
    if(x<0) return false;
	while(x)
	{
		v.push_back(x%10);
		x=x/10;
	}
	for(int i=0;i<v.size()/2;i++)
	{
		if(v[i]!=v[v.size()-1-i]) return false;		
	}
	return true;
}

int main()
{
    cout<<isPalindrome(12322);
    return 0;
}
