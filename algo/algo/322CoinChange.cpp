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
#include <unordered_map>

using namespace std;

int coinChange(vector<int>& coins, int amount) {
	if(coins.empty()) return 0;
	vector<int> res(amount+1,0);
	for(int i=1;i<=amount;i++)
	{
		int mini=amount+1;
		for_each(coins.begin(),coins.end(),[&](int x){
				if(i>=x&&res[i-x]!=-1) mini=min(mini,res[i-x]); 
				});
		if(mini==amount+1)	res[i]=-1;
		else res[i]=mini+1;
	}
	return res.back();
}

int main()
{
    cout<<isAnagram("s", "b");
	return 0;
}
