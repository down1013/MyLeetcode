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

vector<int> plusOne(vector<int>& digits) {
    vector<int> res;
    if(digits.empty()) return res;
    bool add=false;
    digits.back()++;
    for(int i=digits.size()-1;i>=0;i--)
    {
        if(digits[i]<=9) break;
        digits[i]=0;
        if(i!=0) digits[i-1]+=1;
        else add=true;
    }
    if(add) res.push_back(1);
    for(auto i:digits) res.push_back(i);
    return res;
}

int main()
{
    cout<<plusOne();
	return 0;
}
