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

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> vx={1,0,-1,0};
    vector<int> vy={0,1,0,-1};
    int x(0),y(0);
    vector<int> res;
    if(matrix.empty()) return res;
    int top=0,left=0,right=matrix[0].size()-1,bottom=matrix.size()-1;
    int state=0;
    while(x>=left&&x<=right&&y>=top&&y<=bottom)
    {
        res.push_back(matrix[y][x]);
        x+=vx[state];
        y+=vy[state];
        if(!(x>=left&&x<=right&&y>=top&&y<=bottom))
        {
            x-=vx[state];
            y-=vy[state];
            if(state==0) top+=1;
            else if(state==1) right-=1;
            else if(state==2) bottom-=1;
            else left+=1;
            state+=1;
            if(state==4) state=0;
            x+=vx[state];
            y+=vy[state];
            if(!(x>=left&&x<=right&&y>=top&&y<=bottom))
                break;
        }
    }
    return res;
}




int main()
{
    return 0;
}
