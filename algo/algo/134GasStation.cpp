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
#include <queue>

using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
	if(gas.empty()) return -1;
	int total=0,left=0,idx=0;
	for(int i=0;i<gas.size();i++)
	{
		left+=gas[i]-cost[i];
		if(left<0){
			total+=left;
			left=0;
			idx=i+1;
		}
	}
	total+=left;
	if(total<0) return -1;
	else return idx;
}

int main()
{
	    
	return 0;
}
