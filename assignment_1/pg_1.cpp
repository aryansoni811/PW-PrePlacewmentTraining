/* **Q1.** Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example:**
Input: nums = [2,7,11,15], target = 9
Output0 [0,1]

**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1]*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{   int n,target;
    cout<<"enter the size of array--->";
    cin>>n;
    int arr[n];
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 cout<<"enter the target value-->";
 cin>>target;
 int s=0;
 int e=n-1;
 while(s<e)
  {
      if((arr[s]+arr[e])==target)
      {
           cout<<s<<" ,"<<e<<endl;
      }
      else if((arr[s]+arr[e])>target)
        e--;
       else
        s++;

    }

return 0;


}

