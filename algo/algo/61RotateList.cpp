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

ListNode* rotateRight(ListNode* head, int k) {
    if(!head||!k) return head;
    int count=1;
    ListNode* hc=head;
    while(hc->next){hc=hc->next;count++;}
    k=k%count;
    if(k==0) return head;
    ListNode *h1=head,*h2=head;
    for(int i=0;i<k;i++)
        head=head->next;
    while(head->next)
    {
        head=head->next;
        h1=h1->next;
    }
    ListNode* res=h1->next;
    head->next=h2;
    h1->next=NULL;
    return res;
}

int main()
{
	return 0;
}
