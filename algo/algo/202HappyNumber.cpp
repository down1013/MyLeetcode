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
#include <unordered_set>

using namespace std;

bool isHappy(int n) {
    
    unordered_set<int> myset;
    
    while(1)
        
    {
        
        int sum=0;
        
        while(n)
            
        {
            
            sum+=(n%10)*(n%10);
            
            n/=10;
            
        }
        
        if(myset.count(sum)) return false;
        
        if(sum==1) return true;
        
        myset.insert(sum);
        
        n=sum;
        
    }
}

int main(){
    return 0;
}
