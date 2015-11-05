// //  test.cpp //  hello //
//  Created by ysx on 15-9-22.
//  Copyright (c) 2015年 ysx. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <map>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* res=head;
    int nb=0;
    while(head)
    {
        nb++;
        head=head->next;
    }
    head=res;
    if(nb==n) return res->next;
    for(int i=0;i<nb-n-1;i++)
    {
        head=head->next;
    }
    head->next=head->next->next;
    return res;
}
int main()
{
    ListNode l(0);
    removeNthFromEnd(&l, 1);
	return 0;
}
