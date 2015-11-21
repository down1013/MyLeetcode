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

string countAndSay(int n) {
    if(n==1) return "1";
    string s=countAndSay(n-1);
    int i=0;
    string res;
    int count=0;
    while(i!=s.size())
    {
        if((i!=s.size()-1)&&(s[i]==s[i+1]))
        {
            i++;count++;
        }else{
            count++;
            res.push_back('0'+count);
            res.push_back(s[i]);
            count=0;
            i++;
        }
    }
    return res;
}


int main()
{
    cout<<countAndSay(4);
	return 0;
}
