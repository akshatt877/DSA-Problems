class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans= nums[0];
        int start=0;
        int end= nums.size()-1;

        while(start<=end){
            int mid = start+ (end-start)/2;

            if(nums[mid]>=nums[0]){
                start = mid+1;
            }else {
                ans=nums[mid]; // because agar mid se bade elements left side hai to iske chances hai ki mid hi minimum hai , since we dont have target so we can compare like nums[mid]==target in the if else statement 
                end= mid-1;
            }
        }
        return ans;
    }
};