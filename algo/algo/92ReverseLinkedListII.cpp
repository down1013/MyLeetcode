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
#include <array>
#include <stack>
#include <algorithm>
#include <queue>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


ListNode* reverseBetween(ListNode* head, int m, int n) {
	if(m==n) return head;
	ListNode * pre=NULL;
	ListNode* first=NULL;
	ListNode* second=NULL;
	ListNode* res=head;
	int i=0;
	while(head){
		i++;
		if(i==m-1) first=head;
		if(i==m) second=head;
		ListNode* cur=head;
		if(i==n) {if(m==1) res=cur;else first->next=cur;second->next=cur->next;}
		head=head->next;
		if(i>m&&i<=n) cur->next=pre;
		pre=cur;
	}
	return res;
    }

int main()
{
	    
	return 0;
}
