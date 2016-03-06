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

int horizon[]={1,0,-1,0};
int verticle[]={0,1,0,-1};

vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> res(n,vector<int>(n,0));
    if(!n) return res;
    int x=0,y=0;
    int state=0;
    int i=0;
    int left=0,top=0,bottom=n-1,right=n-1;
    while(left<=right&&top<=bottom){
        res[y][x]=++i;
        x+=horizon[state];
        y+=verticle[state];
        if(x>right||y>bottom||x<left||y<top)
        {
            x-=horizon[state];
            y-=verticle[state];
            if(state==0) top++;
            else if(state==1) right--;
            else if(state==2) bottom--;
            else left++;
            state++;
            if(state==4) state=0;
            x+=horizon[state];
            y+=verticle[state];
        }
    }
    return res;
}


int main()
{
	return 0;
}
