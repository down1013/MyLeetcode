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


/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class NestedIterator {
public:
    stack<NestedInteger> stk;
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        for(auto it=nestedList.rbegin();it!=nestedList.rend();++it){
            stk.push(*it);
        }
    }
    
    int next() {
        NestedInteger n=stk.top();
        stk.pop();
        return n.getInteger();
    }
    
    bool hasNext() {
        if(stk.empty()) return false;
        NestedInteger n=stk.top();
        while(!n.isInteger()){
            stk.pop();
            vector<NestedInteger> list=n.getList();
            for(auto it=list.rbegin();it!=list.rend();++it){
                stk.push(*it);
            }
            if(stk.empty()) return false;
            n=stk.top();
        }
        return true;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */

int main()
{
    return 0;
}
