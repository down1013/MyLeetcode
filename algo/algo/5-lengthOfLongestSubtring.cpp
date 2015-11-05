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

using namespace std;

string lookMaxStrFromCenter(string s,int c1,int c2)
{
    int count=0;
	while(c1>=0&&c2<=s.length()-1) if(s[c1]==s[c2]){c1--;c2++;} else break;
	return s.substr(c1+1,c2-c1-1);
}
string lengthOfLongestSubstring(string s) {
	string maxStr;
	string str;
	for(int i=0;i<s.length();i++)
	{
		str=lookMaxStrFromCenter(s,i,i);
		if(str.length()>maxStr.length()) maxStr=str;

		str=lookMaxStrFromCenter(s,i,i+1);
		if(str.length()>maxStr.length()) maxStr=str;
	}
	return maxStr;
}

int main()
{
	string s="bbb";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}
