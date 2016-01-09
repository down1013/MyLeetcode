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

bool canPlaceQueen(int& i,int& j,vector<bool>& row,vector<bool>& rightUp,vector<bool>& leftUp,int& n)
{
    if(!row[i]) return false;
    else if(!rightUp[i+j]) return false;
    else if(!leftUp[i-j+n-1]) return false;
    return true;
}

void tryQueens(int i,int& j,vector<bool>& row,vector<bool>& rightUp,vector<bool>& leftUp,int& n,
               vector<int>& vs,vector<vector<int>>& ans)
{
    if(!canPlaceQueen(i, j, row, rightUp, leftUp, n)) return;
    row[i]=false;rightUp[i+j]=false;leftUp[i-j+n-1]=false;
    vs[i]=j;
    j++;
    if(j==n) {ans.push_back(vs);}
    else {
        for(int i=0;i<n;++i)
        {
            tryQueens(i, j, row, rightUp, leftUp, n,vs,ans);
        }
    }
    j--;
    row[i]=true;rightUp[i+j]=true;leftUp[i-j+n-1]=true;
    
}


vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> res;
    vector<vector<int>> ans;
    int j=0;
    vector<int> vs(n);
    vector<bool> row(n,true);
    vector<bool> rightUp(2*n-1,true);
    vector<bool> lefttUp(2*n-1,true);
    for(int i=0;i<n;i++)
    {
        tryQueens(i, j, row, rightUp, lefttUp, n,vs,ans);
    }
    string s;
    for(int i=0;i<n;i++) s+=".";
    for(auto i:ans)
    {
        vector<string> ss(n,s);
        for(int y=0;y<i.size();y++)
        {
            ss[y][i[y]]='Q';
        }
        res.push_back(ss);
    }
    return res;
}

int main()
{
    
}
