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

bool isAnagram(string s, string t) {
		unordered_map<char,int> map;
		for_each(s.begin(),s.end(),[&](char c){
				if(map.count(c)) map[c]++;
				else map[c]=1;});
    bool res=true;
		for_each(t.begin(),t.end(),[&](char c){
            if(!map.count(c)) res=false;
			else map[c]--; });
		for_each(map.begin(),map.end(),[&](pair<char,int> p){if(p.second) res=false;});
		return res;
}

int main()
{
    cout<<isAnagram("s", "b");
	return 0;
}
