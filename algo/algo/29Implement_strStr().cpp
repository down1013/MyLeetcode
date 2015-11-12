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

using namespace std;

int strStr(string haystack, string needle) {
    int pos=-1;
    if(haystack==needle) return 0;
    if(needle=="") return -1;
    if(haystack.length()<needle.length()) return -1;
    while(1){
        pos=haystack.find(needle[0],pos+1);
        if(pos==-1||(pos+needle.length()>haystack.size())) return -1;
        if(haystack.substr(pos,needle.length())==needle) return pos;
    }
}

int main()
{
    cout<<strStr("missi", "a");
	return 0;
}
