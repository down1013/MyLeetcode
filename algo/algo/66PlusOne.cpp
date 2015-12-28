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

int lengthOfLastWord(string s){
	if(s.empty()) return 0;
    int lastPos=s.find_last_not_of(' ');
    s=s.substr(0,lastPos+1);
	int nPos=s.find_last_of(' '); 
	s=s.substr(nPos+1);
	return s.size();
}

int main()
{
    cout<<lengthOfLastWord("a ");
	return 0;
}
