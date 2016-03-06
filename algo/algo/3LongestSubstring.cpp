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
#include <unordered_set>

using namespace std;
int lengthOfLongestSubstring(string s) {
    int max=0;
    for(int i=0;i<s.length();i++)
    {
        string s1=s.substr(i,1);
        int count=1;
        while(s1.find(s[i+count])==-1&&i+count<s.length())
        {s1+=s.substr(i+count,1);count++;}
        if(max<count) max=count;
    }
    return max;
}

int main()
{
}
