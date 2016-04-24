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
#include <unordered_map>
#include <array>
#include <stack>
#include <algorithm>

using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

struct TreeNode {
         int val;
         TreeNode *left;
         TreeNode *right;
         TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };

TreeNode* genBST(ListNode* head){
    if(!head) return NULL;
    if(head->next==NULL) return new TreeNode(head->val);
    ListNode *h1=head, *h2=head;
    ListNode *pre=NULL;
    while(h1!=NULL){
        h1=h1->next;
        if(!h1) break;
        pre=h2;
        h2=h2->next;
        h1=h1->next;
    }
    pre->next=NULL;
    TreeNode* mid=new TreeNode(h2->val);
    mid->left=genBST(head);
    mid->right=genBST(h2->next);
    return mid;
}


TreeNode* sortedListToBST(ListNode* head) {
    return genBST(head);
}


int main()
{
	return 0;
}
