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

ListNode* reverseList(ListNode* head) {
	ListNode *pre=NULL;
	while(head){
		ListNode* cur=head;
		head=head->next;
		cur->next=pre;
		pre=cur;
	}
	return pre;
}


int main()
{
	    
	return 0;
}
