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

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int c1=0,c2=0,c=0;
    vector<int> temp(nums1);
    while(c1<m&&c2<n)
    {
        if(temp[c1]<nums2[c2]){nums1[c]=temp[c1];c1++;c++;}
        else{nums1[c]=nums2[c2];c2++;c++;}
    }
    if(c1<m)
    {
        int reste=m-c1;
        for(int i=0;i<reste;++i)
            nums1[c++]=temp[c1++];
    }
    else{
        int reste=n-c2;
        for(int i=0;i<reste;++i)
            nums1[c++]=nums2[c2++];
    }
}



int main()
{
    vector<int> nums1{1,2,3,0,0,0};
    vector<int> nums2{2,5,6};
    merge(nums1,3,nums2,3);
    for(auto i:nums1){cout<<i<<endl;}
	return 0;
}
