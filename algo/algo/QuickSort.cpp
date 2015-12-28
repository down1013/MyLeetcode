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
#include <sstream>
#include <vector>
#include <cstdlib>
using namespace std;

void QuickSort(double e[], int first, int end)
{
    int i=first,j=end;
    double temp=e[first];
    while(i<j)
    {
        while(i<j&&e[j]>=temp) j--; e[i]=e[j];
        while(i<j&&e[i]<=temp) i++; e[j]=e[i];
    }
    e[i]=temp;
    if(first<i-1) QuickSort(e,first,i-1);
    if(i+1<end) QuickSort(e,i+1,end);
}

int main()
{
    const int N=10;
    srand(time(NULL));
    double a[N];
    for(int i=0;i<N;i++) a[i]=rand()/static_cast<double>(RAND_MAX);
    QuickSort(a, 0, N-1);
    for(int i=0;i<N;i++) cout<<std::fixed<<a[i]<<endl;
    return 0;
}

vector<string> split(string temps)
{
    vector<string> num;
    int pos=0;
    while(1)
    {
        int nextpos=temps.find(' ',pos);
        num.push_back(temps.substr(pos,nextpos-pos+1));
        if(nextpos==-1) break;
        pos=nextpos+1;
    }
    return num;
}

int toInt(string s){stringstream ss;ss<<s;int res;ss>>res;return res; }



















