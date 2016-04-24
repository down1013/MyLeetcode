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

int findSqrt(int x,int min,int max){
    int mid=(min+max)>>1;
    if(mid==x/mid||(mid<x/mid&&(mid+1)>x/(mid+1))) return mid;
    else if(mid>x/mid) return findSqrt(x, min, mid-1);
    else return findSqrt(x, mid+1, max);
}

int mySqrt(int x) {
    if(x<2) return x;
    return findSqrt(x,1,x/2);
}


int main()
{
	return 0;
}
