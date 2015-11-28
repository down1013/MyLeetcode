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
#include <unordered_map>
#include <string>
#include <array>
#include <stack>
#include <algorithm>

using namespace std;

struct Point {
         int x;
         int y;
         Point() : x(0), y(0) {}
         Point(int a, int b) : x(a), y(b) {}
};

/*
 * samePoint !!!
 * k=infini !!!
 */
int maxPoints(vector<Point>& points) {
    if(points.empty()) return 0;
    int res=0;
    for(int i=0;i<points.size();i++)
    {
        unordered_map<double, int> hash;
        int samePoint=0;
        int kinfini=0;
        for(int j=i+1;j<points.size();j++)
        {
            if(points[j].x==points[i].x&&points[i].y==points[j].y) samePoint++;
            else if(points[j].x==points[i].x)  kinfini++;
            else {double k;k=((double)points[j].y-points[i].y)/(points[j].x-points[i].x);
            if(!hash.count(k)) hash[k]=1;
                else hash[k]++;}
        }
        int maxPoint=0;
        for(auto i=hash.begin();i!=hash.end();i++)
        {
            maxPoint=max(i->second,maxPoint);
        }
        maxPoint=max(maxPoint,kinfini);
        maxPoint+=1+samePoint;
        res=max(maxPoint,res);
    }
    return res;
}

int main()
{
    Point a(84,250),b(0,0),c(1,0),d(0,-70),e(0,-70),f(1,-1),g(21,10),h(42,90),i(-42,-230);
    vector<Point> points{a,b,c,d,e,f,g,h,i};
    cout<<maxPoints(points);
    return 0;
}
