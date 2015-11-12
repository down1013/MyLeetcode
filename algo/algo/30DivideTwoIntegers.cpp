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

int divide(int dividend, int divisor) {
    if(!divisor||(dividend==INT_MIN&&divisor==-1)) return INT_MAX;
    if(!dividend) return 0;
    int res=0;
    bool isDividende=dividend>0;
    bool isDivisor=divisor>0;
    bool positive=!(isDividende^isDivisor);
    while(1)
    {
        /*if(positive) dividend-=divisor;
        else dividend+=divisor;
        if((isDividende&&dividend>=0)||(!isDividende&&dividend<=0))
        {
            if(positive) res++;
            else res--;
        }
        else return res;*/
    }
}

int main()
{
    cout<<divide(-3,-1);
	return 0;
}
