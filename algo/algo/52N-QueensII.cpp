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

bool canPlaceQueen(int i,int j,vector<bool>& row,vector<bool>& rightUp,vector<bool>& leftUp,int n)
{
    if(!row[i]) return false;
    else if(!rightUp[i+j]) return false;
    else if(!leftUp[i-j+n-1]) return false;
    row[i]=false;rightUp[i+j]=false;leftUp[i-j+n-1]=false;
    return true;
}

void tryQueens(int i,int j,vector<bool> row,vector<bool> rightUp,vector<bool> leftUp,int n,
               int& total)
{
    if(!canPlaceQueen(i, j, row, rightUp, leftUp, n)) return;
    j++;
    if(j==n) {total++;return;}
    for(int i=0;i<n;++i)
    {
        tryQueens(i, j, row, rightUp, leftUp, n, total);
    }
}

int totalNQueens(int n) {
    vector<bool> row(n,true);
    vector<bool> rightUp(2*n-1,true);
    vector<bool> lefttUp(2*n-1,true);
    int j=0,total=0;
    for(int i=0;i<n;i++)
    tryQueens(i, j, row, rightUp, lefttUp, n, total);
    return total;
}


int main()
{
    cout<<totalNQueens(4);
}
