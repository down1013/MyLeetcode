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

bool canChange(const string& s1,const string& s2){
    int total=0;
    for(int i=0;i<s1.size();++i)
        if(s1[i]!=s2[i])
        {++total;if(total>1) return false;}
    return total==1;
}


int ladderLength(string beginWord, string endWord, unordered_set<string>& wordList) {
    if(beginWord==endWord) return 0;
    queue<string> path;
    path.push(beginWord);
    int depth=1;
    int sz;
    while(sz=path.size())
    {
        depth++;
        for(int i=0;i<sz;++i)
        {
            string s=path.front();
            path.pop();
            if(canChange(s, endWord)) return depth;
            for(auto i=wordList.begin();i!=wordList.end();)
            {
                if(canChange(s, *i)){path.push(*i);i=wordList.erase(i);}
                else ++i;
            }
        }
    }
    return 0;
}

int main()
{
       return 0;
}
