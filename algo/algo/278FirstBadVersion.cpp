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

bool isBadVersion(int version);

int findBadVersion(int left,int right)
{
    if(left>=right) return right;
    int mid=left+(right-left)/2;
    if(isBadVersion(mid))
        return findBadVersion(left, mid);
    else
        return findBadVersion(mid+1, right);
}

int firstBadVersion(int n) {
    return findBadVersion(1,n);
}

int main()
{
	return 0;
}
