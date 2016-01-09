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


vector<int> getNextArray(string s){
    vector<int> res(s.length());
    res[0]=-1;res[1]=0;
    for(int i=2;i<res.size();i++)
    {
        int k=res[i-1];
        if(s[i-1]==s[k]) res[i]=k+1;
        else
        {
            while(res[k]!=-1)
            {
                k=res[k];
                int a=s[k];
                int b=s[i-1];
                if(s[k]==s[i-1]) {res[i]=k+1;break;}
            }
        }
    }
    return res;
}

int findPos(string txt,string model,vector<int> next)
{
    int l1=txt.length(),l2=model.length();
    int i=0,j=0;
    while(i!=l1&&j!=l2)
    {
        if(txt[i]==model[j])
            {i++;j++;}
        else{
            if(j==0) i++;
            else j=next[j];
        }
    }
    if(j==l2) return i-j;
    else return -1;
}

int main()
{
    vector<int> res=getNextArray("ABCDABD");
    //for(auto i :res) cout<<i<<" ";
    cout<<findPos("BBC ABCDAB ABCDABCDABDE", "ABCDABD", res);
    
}
