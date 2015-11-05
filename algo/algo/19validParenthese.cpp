// //  test.cpp //  hello //
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
#include <stack>
#include <algorithm>

using namespace std;

/*bool isValid(string s) {&
    map<char,int> a{{'(',-1},{')',1},{'{',-2},{'}',2},{'[',-3},{']',3}};
    vector<char> v;
    for(int i=0;i<s.size();i++)
    {
        if(!a.count(s[i])) return false;
        if(a[s[i]]<0) v.push_back(s[i]);
        else
        {
            if(!v.size()||(a[v.back()]+a[s[i]])!=0)   return false;
            v.pop_back();
        }
    }
    return !v.size();
}*/

bool isValid(string s) {
    map<char,int> M = {{'(',-1},{')',1},{'{',-2},{'}',2},{'[',-3},{']',3}};
    stack<int> S;
    S.push(0);
    for(auto ch : s)
    {
        if(M[ch] + S.top() == 0 && S.top() < 0)
            S.pop();
        else if(M[ch]*S.top() < 0)
            return false;
        else S.push(M[ch]);
    }
    return S.top() == 0;
}

int main()
{
    cout<<isValid("]");
	return 0;
}
