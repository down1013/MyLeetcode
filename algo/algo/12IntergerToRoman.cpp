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

string intToRoman(int num) {
	string arr="IVXLCDM";
	int n=arr.size()-1,a,b,div=1000;	
   string res="";
	while(div)
   {
	   a=num/div;b=((a%5)!=4)?a%5:1;
	   if(a>4&&a<9) res.push_back(arr[n+1]);   
	   for(int i=0;i<b;++i) res.push_back(arr[n]);
	   if(a==4) res.push_back(arr[n+1]);
	   else if(a==9) res.push_back(arr[n+2]);
	   n-=2;num-=a*div;div/=10;
	   
   }
	return res;
}

int main()
{
	cout<<intToRoman(59);
    return 0;
}
