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
#include <algorithm>
#include <array>
#include <cmath>
#include <stack>
#include <algorithm>
#include <queue>
#include <unordered_map>

using namespace std;

int letterAppearNumber(string& s){
    int res=0;
    for(int i=0;i<s.size();++i)
        res|=1<<(s[i]-'a');
    return res;
}

int maxProduct(vector<string>& words) {
    int res=0;
    if(words.empty()) return 0;
    vector<int> bit(words.size(),0);
    for(int i=0;i<words.size();++i){
        bit[i]=letterAppearNumber(words[i]);
    }
    
    for(int i=0;i<words.size();++i)
        for(int j=i+1;j<words.size();++j)
            if(!(bit[i]&bit[j]))
                res=max(res,int(words[i].size()*words[j].size()));
    return res;
    
}

int main()
{
    return 0;
}
