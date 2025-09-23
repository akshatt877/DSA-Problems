class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end= arr.size();

        while(start<=end){
            int mid = end + (start-end)/2; // bcoz in general form of mid it will have to check to outside the array to solve that problem we have modified the formula of mid 

            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            } else if(arr[mid]>arr[mid-1]){
                start = mid+1;
            }else {
                end = mid-1;
            }
        }

        return -1;
    }
};