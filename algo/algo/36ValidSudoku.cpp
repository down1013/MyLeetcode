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

bool isValidSudoku(vector<vector<char>>& board) {
    for(int y=0;y<board.size();y++)
    {
        set<char> test;
        for(int x=0;x<board.size();x++)
        {
            if(board[y][x]=='.') continue;
            if(board[y][x]<='0'||board[y][x]>'9') return false;
            if(test.count(board[y][x])) return false;
            test.insert(board[y][x]);
        }
    }
    for(int x=0;x<board.size();x++)
    {
        set<char> test;
        for(int y=0;y<board.size();y++)
        {
            if(board[y][x]=='.') continue;
            if(board[y][x]<='0'||board[y][x]>'9') return false;
            if(test.count(board[y][x])) return false;
            test.insert(board[y][x]);
        }
    }
    for(int i=0;i<9;i++)
    {
        set<char> test;
        for(int y=0;y<3;y++)
        {
            for(int x=0;x<3;x++)
            {
                if(board[3*(i/3)+y][3*(i%3)+x]=='.') continue;
                if(board[3*(i/3)+y][3*(i%3)+x]<='0'||board[3*(i/3)+y][3*(i%3)+x]>'9') return false;
                if(test.count(board[3*(i/3)+y][3*(i%3)+x])) return false;
                test.insert(board[3*(i/3)+y][3*(i%3)+x]);
            }
        }
    }

    return true;
}



int main()
{
	return 0;
}
