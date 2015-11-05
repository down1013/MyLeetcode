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

string longestCommonPrefix(vector<string>& strs) {
	string res="";
	if(!strs.size()) return res;
	if(strs.size()==1) return strs[0];
	int nb=0;
	while(nb<strs[0].size())
	{
		char a=strs[0][nb];
		for(int i=1;i<strs.size();i++)
		{
			if(nb>=strs[i].size()||strs[i][nb]!=a) return res;
		}
		res.push_back(a);
		nb++;
	}
	return res;
}

int main()
{
	
    return 0;
}
