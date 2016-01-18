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

bool canplace(int a,int i,int j,vector<vector<char>>& board,vector<vector<bool>>& cell
              ,vector<vector<bool>>& row,vector<vector<bool>>& col)
{
    
    if((!cell[3*(i/3)+j/3][a])||(!row[i][a])||(!col[j][a])) return false;return true;
}

bool solve(int i,int j,vector<vector<char>>& board,vector<vector<bool>>& cell
           ,vector<vector<bool>>& row,vector<vector<bool>>& col)
{
    if(j==9){i++;j=0;}
    if(i==9) return true;
    if(board[i][j]!='.') {if(solve(i, j+1, board, cell, row, col)) return true;else return false;}
        for(int a=0;a<9;a++)
        {
            if(canplace(a, i, j, board, cell, row, col))
            {
                board[i][j]='1'+a;
                cell[3*(i/3)+j/3][a]=false;
                row[i][a]=false;
                col[j][a]=false;
                if(solve(i, j+1, board, cell, row, col)) return true;
                else{
                    board[i][j]='.';
                    cell[3*(i/3)+j/3][a]=true;
                    row[i][a]=true;
                    col[j][a]=true;
                }
            }
        }
    return false;
}


void solveSudoku(vector<vector<char>>& board) {
    vector<vector<bool>> cell(9,vector<bool>(9,true));
    vector<vector<bool>> row(9,vector<bool>(9,true));
    vector<vector<bool>> col(9,vector<bool>(9,true));
    
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
        {
    if(board[i][j]!='.')
    {
        int a=board[i][j]-'1';
        cell[3*(i/3)+j/3][a]=false;
        row[i][a]=false;
        col[j][a]=false;
    }
        }
    solve(0, 0, board, cell, row, col);
}

int main()
{
    
}
