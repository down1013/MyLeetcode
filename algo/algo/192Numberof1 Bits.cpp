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

int hammingWeight(uint32_t n) {
    int res=0;
    for(int i=0;i<32;++i){
        if(n&1) res++;
        n>>=1;
    }
    return res;
}

int main()
{
	return 0;
}
