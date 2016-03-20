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

vector<int> countBits(int num) {
    vector<int> res(num+1,0);
    int dis=1;
    for(int i=1;i<=num;++i)
    {
        res[i]=res[i-dis]+1;
        if(i==dis*2-1)
            dis*=2;
    }
    return res;
}


int main()
{
	return 0;
}
