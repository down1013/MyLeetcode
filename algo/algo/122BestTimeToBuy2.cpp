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



int maxProfit(vector<int>& prices) {
    if(prices.empty()) return 0;
    if(prices.size()==1) return 0;
    int profile=0;
    for(int i=1;i<prices.size();i++)
    {
        if(prices[i]>prices[i-1])
            profile+=prices[i]-prices[i-1];
    }
    return profile;
}

int main()
{
    
	return 0;
}
