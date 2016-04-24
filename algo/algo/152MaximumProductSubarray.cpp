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

int maxProduct(vector<int>& nums) {
    int res=INT_MIN;
    bool countNegative=false;
    int nproduct=1;
    int pproduct=1;
    for(int i=0;i<nums.size();++i){
        if(nums[i]==0){
            countNegative=false;
            nproduct=pproduct=1;
            res=max(0,res);
        }
        else{
            pproduct*=nums[i];
            res=max(res,pproduct);
            if(countNegative){
                nproduct*=nums[i];
                res=max(res,nproduct);
            }else{
                if(nums[i]<0){
                    countNegative=true;
                }
                
            }
            
        }
    }
    return res;
}


int main()
{
	return 0;
}
