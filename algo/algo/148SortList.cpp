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


    ListNode* sortList(ListNode* head) {
        if(!head||!head->next) return head;
        ListNode *mid=head,*b=head;
        while(1){
            b=b->next;
            if(!b) break;
            b=b->next;
            if(!b) break;
            mid=mid->next;
        }
        ListNode* h2=sortList(mid->next);
        mid->next=NULL;
        ListNode* h1=sortList(head);
        ListNode* result=NULL,*now=NULL;
        while(h1&&h2){
            if(!result){
                if(h1->val<h2->val) {now=result=h1;h1=h1->next;}
                else {now=result=h2;h2=h2->next;}
            }
            else{
                if(h1->val<h2->val){now=now->next=h1;h1=h1->next;}
                else{now=now->next=h2;h2=h2->next;}
            }
        }
        while(h1){
            now=now->next=h1;
            h1=h1->next;
        }
        while(h2){
            now=now->next=h2;
            h2=h2->next;
        }
        return result;
    }

int main()
{
    return 0;
}
