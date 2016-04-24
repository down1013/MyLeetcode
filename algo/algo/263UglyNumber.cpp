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

bool isUgly(int num) {
    if(num<1) return false;
    while(num%5==0) num/=5;
    while(num%3==0) num/=3;
    while (num%2==0) num/=2;
    if(num==1) return true;
    else return false;
}


int main()
{
	return 0;
}
