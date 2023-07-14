#include <iostream>

using namespace std;

int main()
{   int arr[5]={1,2,4,5};
    int s=0;
    int e=5;
    int target;
    cin>>target;
    int mid=(s+e)/2;
    while(s<e)
    {
        if(arr[mid]==target)
           { cout<<"target found---->"<<mid<<endl;
             break;}
        else if(target>arr[mid])
            { s=mid+1;}
        else if(target<arr[mid])
            {   e=mid-1;  }

    mid=(s+e)/2;
    }
    if(target < arr[mid] && mid==0)
    {
        cout << "Predicted index : " << mid ;
    }
    else if (target > arr[mid])
    {
        cout << "Predicted index : " << mid + 1;
    }
    else if(target < arr[mid])
    {
        cout << "Predicted index : " << mid - 1;
    }


    return 0;
}
