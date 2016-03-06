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

vector<string> findRepeatedDnaSequences(string s) {
    vector<string> res;
    if(s.size()<10) return res;
    int num=0;
    unordered_map<char,int> count;
    count['A']=0;
    count['C']=1;
    count['G']=2;
    count['T']=3;
    unordered_map<int,int> seqCount;
    for(int i=0;i<s.size();++i)
    {
        num=((num<<2)&0xfffff)|count[s[i]];
        if(i>=9)
        {
            if(!seqCount.count(num)) seqCount[num]=1;
            else
            {
                seqCount[num]++;
                if(seqCount[num]==2)
                    res.push_back(s.substr(i-9,10));
            }
        }
    }
    return res;
}

int main()
{
    return 0;
}
