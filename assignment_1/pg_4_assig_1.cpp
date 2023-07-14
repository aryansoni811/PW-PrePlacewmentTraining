#include<iostream>
using namespace std;

int main()
{
    int a[] ={9,9,9};
    int i=2;
    while(a[i]<=9)
    {
        if(a[i] < 9)
        {

            a[i] = a[i]+1;
            for(int j=0;j<3;j++)
            {
                cout<<a[j];
            }
            exit(0);
        }
        else
        {

            a[i] = 0;
            if(i==0)
            {
                cout<<"1";
                for(int j=0;j<3;j++)
                {
                    cout<<"0";
                }
                exit(0);
            }
            i--;
        }
    }
}
