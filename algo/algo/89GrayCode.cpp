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

vector<int> grayCode(int n) {
    vector<int> res;
    res.push_back(0);
    int k = 1;
    for(int i=1;i<=n;++i){
        for(int j=res.size()-1;j>=0;j--){
            res.push_back(res[j]+k);
        }
        k*=2;
    }
    return res;
}

int main()
{
	return 0;
}
