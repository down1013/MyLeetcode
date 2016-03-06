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
#include <unordered_map>
#include <array>
#include <stack>
#include <algorithm>

using namespace std;

string fractionToDecimal(int numerator, int denominator) {
    bool signe=true;
    if((numerator>0&&denominator<0)||(numerator<0&&denominator>0)) signe=false;
    long long numerator1=abs((long long)numerator);
    long long denominator1=abs((long long)denominator);
    long long integer=numerator1/denominator1;
    long long remain=numerator1%denominator1;
    if(!remain) return (signe?"":"-")+to_string(abs(integer));
    unordered_map<long long, int> hash;
    hash[remain]=0;
    string res;
    int i=0;
    while(remain){
        remain*=10;
        long long a=remain/denominator1;
        res.push_back('0'+a);
        remain=remain%denominator1;
        i++;
        if(hash.count(remain))
        {
            int b=hash[remain];
            return (signe?"":"-")+to_string(integer)+"."+res.substr(0,b)+"("+res.substr(b)+")";
        }
        hash[remain]=i;
    }
    return (signe?"":"-")+to_string(integer)+"."+res;
}

int main()
{
	return 0;
}
