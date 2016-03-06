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
#include <unordered_set>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int m=nums1.size(),n=nums2.size();
    if(m==0) {if(n&1) return double(nums2[n/2]);else return 0.5*(nums2[n/2-1]+nums2[n/2]);}
    if(n==0) {if(m&1) return double(nums1[m/2]);else return 0.5*(nums1[m/2-1]+nums1[m/2]);}
    int median=(m+n)>>1;
    bool odd=(m+n)&1;
    int i=0,j=0,count=0;
    int low=0,high=0;
    while(i<m&&j<n){
        if(count==median-1) {low=min(nums1[i],nums2[j]);};
        if(count==median){high=min(nums1[i],nums2[j]);if(odd) return high;else return 0.5*(high+low);}
        if(nums1[i]<=nums2[j]) {i++;}
        else j++;
        count++;
    }
    
    while(i<m){
        if(count==median-1){if(odd)return nums1[i+1];else return 0.5*(nums1[i+1]+nums1[i]); }
        if(count==median) {high=nums1[i];if(odd) return high;else return 0.5*(high+low);}
        i++;
        count++;
    }
    while(j<n){
        if(count==median-1){if(odd)return nums2[j+1];else return 0.5*(nums2[j+1]+nums2[j]); }
        if(count==median) {high=nums2[j];if(odd) return high;else return 0.5*(high+low);}
        j++;
        count++;
    }
    return -1;
}

int main()
{
}
