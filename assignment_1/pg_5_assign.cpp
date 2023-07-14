// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
   int nums1[6] = {1,2,3,0,0,0};
   int nums2[3] = {2,5,6};
   int n=6;
   int j=0;
   for(int i=3;i<=6;i++)
       {
           nums1[i]=nums2[j];
           j++;
       }
    sort(nums1,nums1+6);
   for(int i=0;i<6;i++)
   {
       cout<<nums1[i]<<" ";
   }
    return 0;
}
