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

string oneNumberToWord(int num){
    switch(num){
        case 1:return "One";
        case 2:return "Two";
        case 3:return "Three";
        case 4:return "Four";
        case 5:return "Five";
        case 6:return "Six";
        case 7:return "Seven";
        case 8:return "Eight";
        case 9:return "Nine";
            //case 1:return "Ten";
        default:return "Zero";
    }
}

string secondNumberToWord(int num){
    switch(num){
        case 1:return "Ten";
        case 2:return "Twenty";
        case 3:return "Thirty";
        case 4:return "Forty";
        case 5:return "Fifty";
        case 6:return "Sixty";
        case 7:return "Seventy";
        case 8:return "Eighty";
        case 9:return "Ninety";
        default:return "Zero";
    }
}

string tenToNineteenToWord(int num){
    switch(num){
        case 0:return "Ten";
        case 1:return "Eleven";
        case 2:return "Twelve";
        case 3:return "Thirteen";
        case 4:return "Fourteen";
        case 5:return "Fifteen";
        case 6:return "Sixteen";
        case 7:return "Seventeen";
        case 8:return "Eighteen";
        case 9:return "Nineteen";
        default:return "Zero";
    }
    
}

string threeNumberToWord(int num){
    string res;
    int h=num/100;
    int t=(num%100)/10;
    int g=num%10;
    if(h){ res+=oneNumberToWord(h);res+=" Hundred";}
    if(t>1){if(h) res+=" ";res+=secondNumberToWord(t);
        if(g){res+=" ";res+=oneNumberToWord(g);}
    }
    else if(t==1){if(h) res+=" ";res+=tenToNineteenToWord(g);}
    else if(g){
        if(h) res+=" ";
        res+=oneNumberToWord(g);
    }
    return res;
    
}


string numberToWords(int num) {
    if(!num) return "Zero";
    string res;
    int billion=num/1000000000;
    num-=1000000000*billion;
    int million=num/1000000;
    num-=1000000*million;
    int thousand=num/1000;
    int mini=num%1000;
    if(billion){
        res+=threeNumberToWord(billion);
        res+=" Billion";
    }
    if(million)
    {
        if(billion) res+=" ";
        res+=threeNumberToWord(million);
        res+=" Million";
    }
    if(thousand){
        if(billion||million) res+=" ";
        res+=threeNumberToWord(thousand);
        res+=" Thousand";
    }
    if(mini){
        if(billion||million||thousand) res+=" ";
        res+=threeNumberToWord(mini);
    }
    return res;
}

int main()
{
    return 0;
}
