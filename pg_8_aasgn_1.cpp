#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int arr[5]={1,1,3,4,5};
    int sum1=0;
    for(int i=0;i<5;i++)
    {
     sum1=sum1+arr[i];
    }

     int sum=5*(5+1)/2;
       for(int i=0;i<5;i++)
   {
       if((arr[i+1]-arr[i])==0)
       {  cout<<arr[i]<<",";

          int sum_main=sum1-arr[i];

          cout<<sum-sum_main<<endl;
       }
       else if((arr[i+1]-arr[i])==1)
           int flag =1;

   }



  return -1;


}
