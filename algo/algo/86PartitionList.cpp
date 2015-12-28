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

ListNode* partition(ListNode* head, int x) {
    if(!head) return NULL;
	ListNode* res=NULL;
	ListNode* resHead=NULL;
	ListNode* res2=NULL;
	ListNode* resHead2=NULL;
	while(head)
	{
		if(head->val<x) 
		{
			if(!res)
			{
				res=head;
				resHead=head;
			}else{
				res->next=head;
				res=head;
			}
		} 
		else{
			if(!res2)
			{
				res2=head;
				resHead2=head;
			}else{
				res2->next=head;
				res2=head;
			}
		}
		head=head->next;
	}
	if(resHead2) res2->next=NULL;
	if(resHead) res->next=resHead2;
	else resHead=resHead2;
	return resHead;
}

int main()
{
	    
	return 0;
}
