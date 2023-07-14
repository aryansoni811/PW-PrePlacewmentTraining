#include<iostream>
using namespace std;
int main()
{
int  nums[5]= {3,2,2,3};
int val;
cin>>val;
int count = 0;

        for (int i = 0; i < 4; i++) {

            if (nums[i] != val) {
                nums[count++] = nums[i];
            }
        }
        cout<<count;
}
