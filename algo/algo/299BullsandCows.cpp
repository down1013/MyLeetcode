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

string getHint(string secret, string guess) {
    int nbA=0,nbB=0;
    vector<int> mapA(10,0),mapB(10,0);
    for(int i=0;i<secret.size();++i){
        if(secret[i] == guess[i]){
            nbA++;
        }else{
            if(mapA[guess[i]-'0'] > 0){
                nbB++;
                mapA[guess[i]-'0']--;
            }else{
                mapB[guess[i]-'0']++;
            }
            if(mapB[secret[i]-'0'] > 0){
                nbB++;
                mapB[secret[i]-'0']--;
            }else{
                mapA[secret[i]-'0']++;
            }
        }
    }
    return to_string(nbA)+"A"+to_string(nbB)+"B";
}

int main()
{
	return 0;
}
