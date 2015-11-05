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

void letter(string digits,vector<string>& res,int number,string s) {
	static const vector<string> phone{"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    for(int i=0;i<phone[digits[number]-'2'].size();++i)
    {
        char a=phone[digits[number]-'2'][i];
        string s1(s);
        s1.push_back(a);
        if(number==digits.size()-1)
        {
            res.push_back(s1);
            continue;
        }
        number++;
        letter(digits, res, number,s1);
        number--;
    }
}

vector<string> letterCombinations(string digits) {
    vector<string> res;
    if(digits.size()) 
    letter(digits,res,0,"");
    return res;
}

int main()
{
    vector<string> res=letterCombinations("23");
    for(int i=0;i<res.size();++i)
    {
        cout<<res[i]<<endl;
    }
	return 0;
}
