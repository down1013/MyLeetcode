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

int myAtoi(string str) {
    if(!str.length()) return 0;
    size_t first=str.find_first_not_of(' ');
    size_t last=str.find_last_not_of(' ');
    str=str.substr(first,last-first+1);
    int res=0;
    bool positive=true;
    if(str[0]=='-') positive=false;
    else if (str[0]>='0' && str[0] <= '9') res=str[0]-'0';
    else if(str[0]!='+') return 0;
    for(int i=1;i<str.length();i++)
    {
        if(str[i]>'9'||str[i]<'0') return res;
        int a=str[i]-'0';
        if(res>(INT_MAX-a)/10) return INT_MAX;
        else if(res<(INT_MIN+a)/10) return INT_MIN;
        else res=res*10+(positive?a:-a);
    }
    return res;
}


int main()
{
    cout<<myAtoi("123");
    return 0;
}
