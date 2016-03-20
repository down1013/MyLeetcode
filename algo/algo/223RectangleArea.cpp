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

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    long area1=((long)C-A)*(D-B);
    long area2=((long)G-E)*(H-F);
    long duplicateW=(long)min(G,C)-max(E,A);
    long duplicateH=(long)min(D,H)-max(F,B);
    if(duplicateH<=0||duplicateW<0)
        return area1+area2;
    else
        return area1+area2-duplicateW*duplicateH;
}

int main()
{
	return 0;
}
