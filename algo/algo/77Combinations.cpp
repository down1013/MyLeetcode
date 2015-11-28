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


void combination(vector<vector<int>> &res,vector<int> now,int currentn,int n,int currentk,int k)
{
    if(currentk==k) {res.push_back(now);return;}
    for(int i=currentn;i<=n;i++)
    {
        now.push_back(i);
        combination(res, now, i+1, n, currentk+1, k);
        now.pop_back();
    }
    
}

vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> res;
    vector<int> now;
    combination(res, now, 1, n, 0, k);
    return res;
}


int main()
{
    
	return 0;
}
