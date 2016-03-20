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

bool isSelfCrossing(vector<int>& x) {
    int sz=x.size();
    if(sz<4) return false;
    if(x[3]>=x[1]&&x[2]<=x[0]) return true;//4
    if(sz>=5&&((x[4]>=x[2]&&x[3]<x[1])||(x[3]==x[1]&&x[4]+x[0]>=x[2])))//5
        return true;
    for(int i=6;i<=sz;i++)
        if(x[i-2]<=x[i-4]&&(x[i-1]>=x[i-3]||(x[i-3]>=x[i-5]&&x[i-2]>=x[i-4]-x[i-6]&&x[i-1]>=x[i-3]-x[i-5])))
            return true;
    return false;
}


int main()
{
	return 0;
}
