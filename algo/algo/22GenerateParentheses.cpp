// //  test.cpp //  hello //
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
#include <stack>
#include <algorithm>

using namespace std;

void parenthes(vector<string>& res,string s,int leftNumber,int floor,int max)
{
    if(floor==2*max) {res.push_back(s);return;}
    if(leftNumber<max) parenthes(res,s+'(',leftNumber+1,floor+1,max);
    if(2*leftNumber>s.size()) parenthes(res,s+')',leftNumber,floor+1,max);
}

vector<string> generateParenthesis(int n) {
    vector<string> res;
    parenthes(res,"",0,0,n);
    return res;
}

int main()
{
    vector<string> res=generateParenthesis(1);
    for(auto s:res) cout<<s<<endl;
	return 0;
}
