/*
Question 5
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

Example 1:
Input: nums = [1,2,3]
Output: 6
*/


class Solution {
public:
    int maximumProduct(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int maxi=1;
       int prod1=1,prod2=1;
        for(int i=0;i<nums.size();i++)
        {
           prod1=nums[0]*nums[1]*nums[n-1];
           prod2=nums[n-1]*nums[n-2]*nums[n-3];
        }
        maxi=max(prod1,prod2);
        return maxi;
    }
};
