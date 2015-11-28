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

using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

bool hasCycle(ListNode *head) {
    if(!head) return false;
    ListNode* fast=head;
    ListNode* low=head;
    do
    {
        low=low->next;
        fast=fast->next;
        if(!fast) return false;
        fast=fast->next;
        if(!fast) return false;
    }while(fast!=low);
    return true;
}

ListNode *detectCycle(ListNode *head) {
    if(!head) return nullptr;
    ListNode* fast=head;
    ListNode* low=head;
    do
    {
        low=low->next;
        fast=fast->next;
        if(!fast) return nullptr;
        fast=fast->next;
        if(!fast) return nullptr;
    }while(fast!=low);
    fast=head;
    while(fast!=low)
    {
        low=low->next;
        fast=fast->next;
    }
    return fast;
}

int main()
{
    
	return 0;
}
