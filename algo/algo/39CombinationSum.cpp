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

using namespace std;

void combin(vector<vector<int>>& res,vector<int>now,vector<int> candidates,int target)
{
    while(candidates.size())
    {
        vector<int> now1(now);
        if(candidates[0]>target) return;
        else if(candidates[0]==target) {now.push_back(target);res.push_back(now);return;}
        else {now1.push_back(candidates[0]);combin(res,now1,candidates,target-candidates[0]);}
        candidates.erase(candidates.begin());
    }
    
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    vector<vector<int>> res;
    vector<int> now;
    combin(res,now,candidates,target);
    return res;
}

int main()
{
    vector<int>candidates{1,2};
    int target=2;
    vector<vector<int>> res=combinationSum(candidates, target);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
            cout<<res[i][j]<<" ";
        cout<<endl;
    }
	return 0;
}
