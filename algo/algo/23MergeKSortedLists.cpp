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

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    ListNode* res=NULL;
    ListNode* cur=NULL;
    while(l1&&l2)
    {
        if(!res){
            if(l1->val<l2->val)
            {
                cur=res=l1;
                l1=l1->next;
            }
            else{
                cur=res=l2;
                l2=l2->next;
            }
        }
        else{
            if(l1->val<l2->val)
            {
                cur->next=l1;
                cur=l1;
                l1=l1->next;
            }
            else{
                cur->next=l2;
                cur=l2;
                l2=l2->next;
            }
        }
    }
    while(l1)
    {
        if(!res){
            res=l1;
        }
        else{
            cur->next=l1;
        }
        cur=l1;
        l1=l1->next;
    }
    while(l2)
    {
        if(!res){
            res=l2;
        }
        else{
            cur->next=l2;
        }
        cur=l2;
        l2=l2->next;
        
    }
    return res;
}


ListNode* mergeKLists(vector<ListNode*>& lists) {
    if(lists.empty()) return NULL;
    if(lists.size()==1) return lists[0];
    vector<ListNode*> tmp;
    for(int i=0;i<lists.size();i+=2){
        if(i+1<lists.size()){
            tmp.push_back(mergeTwoLists( lists[i], lists[i+1]));
        }else{
            tmp.push_back(lists[i]);
        }
    }
    return mergeKLists(tmp);
}

int main()
{
	return 0;
}
