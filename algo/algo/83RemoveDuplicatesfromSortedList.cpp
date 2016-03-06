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
    if(!head) return head;
    ListNode* result=head;
    while(head&&head->next){
        if(head->next->val==head->val)
            head->next=head->next->next;
        else {
            head=head->next;
        }
    }
    return result;
}

int main()
{
    return 0;
}
