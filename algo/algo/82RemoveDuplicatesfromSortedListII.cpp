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


ListNode* deleteDuplicates(ListNode* head) {
    if(!head||!head->next) return head;
    ListNode* result=NULL,*pre=NULL;
    while(head){
        if(!result||(result->next&&result->val==result->next->val))
        {
            ListNode* temp=head->next;
            if(temp->val!=head->val) {result=head;continue;}
            while(temp&&temp->val==head->val){temp=temp->next;}
            result=pre=head=temp;
            if(!result) return NULL;
        }
        else{
            if(!head||!head->next) break;
            if(head->val==head->next->val)
            {
                int a=head->val;
                while(head&&head->val==a)
                {head=head->next;}
                pre->next=head;
            }
            else{
                pre=head;
                head=head->next;
            }
        }
    }
    return result;
}

int main()
{
    return 0;
}
