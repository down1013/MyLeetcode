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
    vector<int> profit(prices.size(),0);
    int today,past=INT_MAX;
    for(int i=1;i<prices.size();i++)
    {
        past=min(past,prices[i-1]);
        today=prices[i]-past;
        profit[i]=max(profit[i-1],today);
    }
    return profit[profit.size()-1];
}

int main()
{
    
	return 0;
}
