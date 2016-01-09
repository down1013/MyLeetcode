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

int numDecodings(string s) {
		if(s.empty()||s[0]=='0') return 0;
    	vector<int> res(s.size()+1);
    	res[0]=0;
        res[1]=1;
    	for(int i=2;i<=s.size();i++)
    	{
    	    if(s[i-1]=='0'&&(s[i-2]!='1'&&s[i-2]!='2')) return 0;
    		if(s[i-1]!='0') res[i]+=res[i-1];
    		if(s[i-2]=='1') res[i]+=(res[i-2]==0?1:res[i-2]);
    		else if(s[i-2]=='2'&&s[i-1]>='0'&&s[i-1]<='6') 
				res[i]+=(res[i-2]==0?1:res[i-2]);
    	}
    	return res.back();
}

int main()
{
    cout<<isAnagram("s", "b");
	return 0;
}
