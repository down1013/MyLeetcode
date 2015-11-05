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

int romanToInt(string s)
{
	map<char,int> a;
	a['I']=1,a['V']=5,a['X']=10,a['L']=50,a['C']=100,a['D']=500,a['M']=1000;
	int res=0;
	for(int i=0;i<s.size()-1;++i)
	{
		if(a[s[i]]<a[s[i+1]]) res-=a[s[i]];
		else res+=a[s[i]];
	}
	return res+=a[s[s.size()-1]];
}

int main()
{
	cout<<romanToInt("XXI");
    return 0;
}
