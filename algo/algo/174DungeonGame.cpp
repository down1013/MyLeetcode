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

int calculateMinimumHP(vector<vector<int>>& dungeon) {
    vector<vector<int>> res(dungeon.size(),vector<int>(dungeon[0].size(),0));
        for(int i=dungeon[0].size()-1;i>=(1-(int)(dungeon.size()));i--)
        {
            int row=i;
            int col=dungeon.size()-1;
            while(row<(int)(dungeon[0].size())&&col>=0)
            {
                if(row>=0){
                int a=(col==dungeon.size()-1)?INT_MAX:res[col+1][row];
                int b=(row==dungeon[0].size()-1)?INT_MAX:res[col][row+1];
                res[col][row]=min(a,b);
                if(res[col][row]==INT_MAX) res[col][row]=1;
                res[col][row]-=dungeon[col][row];
                if(res[col][row]<=0) res[col][row]=1;
                }
                col--;
                row++;
            }
            
        }
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++)
            cout<<res[i][j];
        cout<<endl;
    }
    return res[0][0];
}
int main()
{
    vector<int> a;a.push_back(2);
    vector<int> b;b.push_back(1);
    vector<vector<int>> c;c.push_back(a);c.push_back(b);
    cout<<calculateMinimumHP(c);
	return 0;
}
