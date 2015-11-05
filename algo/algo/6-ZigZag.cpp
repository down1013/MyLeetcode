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

using namespace std;
string convert(string s, int numRows) {
    int size = s.size();
    if (numRows >= size || numRows <= 1) return s;
    string z;
    for (int i = 0; i < numRows; i++)
    {
        int idx = i;
        while (idx < size)
        {
            if (i < numRows-1)
            {
                z.push_back(s.at(idx));
                idx += 2*(numRows-i-1);
            }
            if (i > 0 && idx < size)
            {
                z.push_back(s.at(idx));
                idx += 2*i;
            }
        }
    }
    return z;
}
/*
string convert(string s, int numRows) {
		if(numRows==1) return s;
		int count=0;
		int j=0;
		string res(s);
		vector<vector<char>> tab(numRows,vector<char>((1+s.length()/(2*(numRows-1)))*(numRows-1),'0'));
		for(int i=0;i<1+s.length()/(2*(numRows-1));i++)
		{
			while(count<=s.length()-1&&j<numRows-1) tab[j++][i*(numRows-1)]=s[count++];
			while(count<=s.length()-1&&j>0) tab[j][i*(numRows-1)+numRows-1-(j--)]=s[count++];
		}
		count=0;
		for(int i=0;i<numRows;i++)
			for(int j=0;j<(1+s.length()/(2*(numRows-1)))*(numRows-1);j++)
                if(tab[i][j]!='0')
					res[count++]=tab[i][j];
		return res;
}*/

int main()
{
	string s="ABCDE";
	cout<<convert(s,4);
    return 0;
}
