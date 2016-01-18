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
#include <unordered_map>

using namespace std;

struct ListNode {
          int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
    };

ListNode* removeElements(ListNode* head, int val) {
    if(!head) return NULL;
    while(head->val==val) {head=head->next;if(!head) return NULL;}
    ListNode* res=head;
    while(head)
    {
        while(head->next&&head->next->val==val)head->next=head->next->next;
        head=head->next;
    }
    
    return res;
}

int main()
{
	return 0;
}
