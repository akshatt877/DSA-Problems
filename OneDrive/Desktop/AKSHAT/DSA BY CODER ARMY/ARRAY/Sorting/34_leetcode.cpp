#include<bits/stdc++.h>
#include<iostream>
#include<vector>

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end = nums.size()-1;
        int first=-1;
        int last=-1;

        //For first occurence
        while(start<=end){
            int mid = start + (end- start)/2;
            if(nums[mid]==target){
                first=mid;
                end= mid-1;
            }else if(nums[mid]< target){
                start=mid+1;
            }else {
                end= mid-1;
            }
        }


        //For Last occurence
        start = 0;
        end = nums.size() - 1;
 
        while(start<=end){
            int mid = start + (end- start)/2;
            if(nums[mid]==target){
                last=mid;
                start= mid+1;
            }else if(nums[mid]< target){
                start=mid+1;
            }else {
                end= mid-1;
            }
        }

        vector<int>a(2);
        a[0]=first;
        a[1]=last;

        return a;
    }
};