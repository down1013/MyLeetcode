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

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        ListNode* oddhead=NULL,*oddend=NULL,*evenhead=NULL,*evenend=NULL;
        int i=0;
        while(head){
            i++;
            if(i==1)
            {oddhead=head;oddend=head;}
            else if(i==2)
            {evenhead=head;evenend=head;}
            else if(i&1)
            {oddend->next=head;oddend=head;}
            else
            {evenend->next=head;evenend=head;}
            head=head->next;
        }
        oddend->next=evenhead;
        if(evenend) evenend->next=NULL;
        return oddhead;
    }
};
int main()
{
    return 0;
}
