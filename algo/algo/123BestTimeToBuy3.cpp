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
    vector<int> profit1(prices.size(),0),profit2(prices.size(),0);
    int today,past=INT_MAX;
	profit1[0]=0;
    for(int i=1;i<prices.size();i++)
    {
        past=min(past,prices[i-1]);
        today=prices[i]-past;
        profit1[i]=max(profit1[i-1],today);
    }
	past=INT_MIN;
	profit2[prices.size()-1]=0;
	for(int i=prices.size()-2;i>=0;i--)
	{
		past=max(past,prices[i+1]);
		today=prices[i]-past;
		profit2[i]=min(today,profit2[i+1]);
	}
	int res=0;
	for(int i=0;i<prices.size()-1;i++)
	{
		res=max(res,profit1[i]-profit2[i]);
	}
    return res;
}

int main()
{
	    
	return 0;
}
