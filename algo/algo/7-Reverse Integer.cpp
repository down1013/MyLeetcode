//
//  test.cpp
//  hello
//
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
#include <algorithm>

using namespace std;

int Reverse (int x){
	bool positive=x>0?true:false;
    x=abs(x);
    int res=0;
	while(x)
	{
        if(res>(INT_MAX-x%10)/10) return 0;
		res=res*10+(x%10);
		x/=10;
	}
	return positive?res:-res;
}


int main()
{
	//int i=-2147483648;
	int i=2147483648;
    cout<<Reverse(i);
    return 0;
}
