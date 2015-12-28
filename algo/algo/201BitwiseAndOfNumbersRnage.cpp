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

int rangeBitwiseAnd(int m, int n) {
	int i=0;
	while(m!=n)
	{
		m>>=1;
		n>>=1;
		i++;
	}
	return m<<=i;
}


int main()
{
	    
	return 0;
}
