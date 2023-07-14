#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5]={1,2,3,1};
    sort(arr,arr+4);
    int count=0;
    for(int i=0;i<4;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
    }cout<<count;
    return 0;
}
