// //  test.cpp //  hello //
//  Created by ysx on 15-9-22.
//  Copyright (c) 2015年 ysx. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string>
#include <array>
#include <stack>
#include <algorithm>

using namespace std;

int candy(vector<int>& ratings)
{
	if(ratings.empty()) return 0;
	if(ratings.size()==1) return 1;
	vector<int> res(ratings.size(),1);
	for(int i=0;i<ratings.size()-1;i++)
	{
		if(ratings[i]<ratings[i+1])
			res[i+1]=res[i]+1;
	}
	for(int i=ratings.size()-1;i>=1;i--)
	{
		if(ratings[i-1]>ratings[i])
			res[i-1]=max(res[i]+1,res[i-1]);
	}
	int sum=0;
	for(auto i:res) sum+=i;
	return sum;
}
int main()
{
	/*vector<int> ratings{
        58,21,72,77,48,9,38,71,68,77,
        82,47,25,94,89,54,26,54,54,99,
        64,71,76,63,81,82,60,64,29,51,
        87,87,72,12,16,20,21,54,43,41,
        83,77,41,61,72,82,15,50,36,69,
        49,53,92,77,16,73,12,28,37,41,
        79,25,80,3,37,48,23,10,55,19,
        51,38,96,92,99,68,75,14,18,63,
        35,19,68,28,49,36,53,61,64,91,
        2,43,68,34,46,57,82,22,67,89};*/
    //vector<int> ratings{2,2,1};
	cout<<candy(ratings);
	return 0;
}
