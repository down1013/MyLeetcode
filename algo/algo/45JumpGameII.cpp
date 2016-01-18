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

int canJump(vector<int>& nums) {
     if(nums.size()==1) return 0;
    int i=0;
    int step=0;
    while(1){
        step++;
        int dis=nums[i];
         if(i+dis>=nums.size()-1) return step;
        int maxDis=0;
        int maxIdx=0;
        for(int j=1;j<=dis;j++)
        {
            if((j+nums[i+j])>=maxDis){maxDis=j+nums[i+j];maxIdx=j;}
        }
        i+=maxIdx;
    }
}

int main()
{
    
}
