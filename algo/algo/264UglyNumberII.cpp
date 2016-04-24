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
#include <cmath>
using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };


int nthUglyNumber(int n) {
    if(n<=0) return 0;
    vector<int> ugly{1};
    int idx1=0,idx2=0,idx3=0;
    for(int i=1;i<n;i++)
    {
        int tmp;
        tmp=min(ugly[idx1]*2,ugly[idx2]*3);
        tmp=min(tmp,ugly[idx3]*5);
        if(tmp==ugly[idx1]*2) idx1++;
        if(tmp==ugly[idx2]*3) idx2++;
        if(tmp==ugly[idx3]*5)idx3++;
        ugly.push_back(tmp);
    }
    
    return ugly.back();
}


int main()
{
	return 0;
}
