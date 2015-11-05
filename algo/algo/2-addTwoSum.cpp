//
//  addTwoSum.cpp
//  algo
//
//  Created by ysx on 15-10-7.
//  Copyright (c) 2015年 ysx. All rights reserved.
//

#include <iostream>

using namespace std;

struct ListNode {
    int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int res=0;
		ListNode* l=l1;
		while(1)
		{
			l->val+=l2->val+res;
			if(l->val>9) {res=1;l->val-=10;}
			else res=0;
			if(!l->next&&!res&&!l2->next) break;
            if(!l->next) {l->next=new ListNode(0);}l=l->next;
            if(!l2->next) {l2->next=new ListNode(0);}l2=l2->next;
		}
		return l1;
}

int main()
{
    ListNode *p1=new ListNode(1);p1->next=new ListNode(8);
	ListNode *p2=new ListNode(0);
	ListNode *p=NULL;
	addTwoNumbers(p1,p2);
	while(p1) {cout<<p1->val;p1=p1->next;}
	while(p1) {p=p1;p1=p1->next;delete p;}
	while(p2) {p=p2;p2=p2->next;delete p;}
	return 0;
}
