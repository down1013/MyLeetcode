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
#include <unordered_map>
#include <array>
#include <stack>
#include <algorithm>

using namespace std;

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

void findSum3(vector<vector<int>>&res, vector<int>cur,int k,int n,int start){
    if(k==1) {
        if(n>start&&n<10) {cur.push_back(n);res.push_back(cur);}
        return;
    }
    
    for(int i=start+1;i<n/k+1;++i)
    {
        cur.push_back(i);
        findSum3(res,cur,k-1,n-i,i);
        cur.pop_back();
        
    }
}


vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>> res;
    vector<int> cur;
    findSum3(res, cur, k, n,0);
    return res;
}


int main()
{
	return 0;
}
