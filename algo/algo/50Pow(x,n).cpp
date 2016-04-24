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

double calcPow(double x,long long n){
    if (n<0) return 1/calcPow(x,-n);
    if(n==0) return 1;
    if(n==1) return x;
    long long now = 1;
    double val =x;
    while(2*now<= n){
        val*=val;
        now*=2;
    }
    return val * calcPow(x, n-now);
    
}

double myPow(double x, int n) {
    if(!n) return 1;
    return calcPow(x, n);
}

int main()
{
	return 0;
}
