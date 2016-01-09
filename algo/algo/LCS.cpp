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

enum Direction{Left,Top,LeftTop};

struct Point{
    int val;
    Direction dir;
};

string LCS(string s1,string s2)
{
    int lenth1=s1.length(),lenth2=s2.length();
    vector<vector<Point>> dp(lenth1+1,vector<Point>(lenth2+1));
    for(int i=0;i<lenth1+1;i++)
        for(int j=0;j<lenth2+1;j++)
        {
            if(i==0)
                dp[i][j]={0,Left};
            else if(j==0)
                dp[i][j]={0,Top};
            else
            {
                if(s1[i-1]==s2[j-1])
                    dp[i][j]={dp[i-1][j-1].val+1,LeftTop};
                else if(dp[i][j-1].val>=dp[i-1][j].val)
                    dp[i][j]={dp[i][j-1].val,Left};
                else
                    dp[i][j]={dp[i-1][j].val,Top};
            }
        }
    Point p=dp[lenth1][lenth2];
    int y=lenth1,x=lenth2;
    string res;
    while(p.val)
    {
        if(p.dir==Left) x--;
        else if(p.dir==Top) y--;
        else {x--;y--;}
        if(p.val!=dp[y][x].val)
            res+=s1[y];
        p=dp[y][x];
    }
    return res;
}

int main()
{
    cout<<LCS("bdcbe","abcdbf");
}
