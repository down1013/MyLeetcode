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


ListNode* reverseList(ListNode* head){
    ListNode *pre=NULL;
    while (head) {
        ListNode *cur = head;
        head=head->next;
        cur->next=pre;
        pre=cur;
    }
    return pre;
}

bool isPalindrome(ListNode* head) {
    if(!head) return true;
    ListNode *l1=head, *l2=head;
    int c=0;
    while(l1!=NULL){
        c++;
        l1=l1->next;
        if(!l1) break;
        c++;
        l1=l1->next;
        l2=l2->next;
    }
    ListNode* rev=reverseList(l2);
    int n=(c+1)>>1;
    for(int i=0;i<n;++i){
        if(head->val!=rev->val)
            return false;
        head=head->next;
        rev=rev->next;
    }
    return true;
}


int main()
{
	return 0;
}
