//PROBLEM NUMBER 42 TRAPPING WATER (HARD) PLATFORM-> LEETCODE
//PROBLEM LINK -> https://leetcode.com/problems/trapping-rain-water/submissions/1781232164/
class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        vector<int>maxLeft(n);
        vector<int>maxRight(n);
        int ans=0;

        maxLeft[0]=0;
        int water=0;
        for(int i=1;i<n;i++){
            maxLeft[i]= max(maxLeft[i-1],height[i-1]);
        }
        maxRight[n-1]=0;
        for(int i=n-2;i>=0;i--){
            maxRight[i]= max(maxRight[i+1], height[i+1]);
        }
        for(int i=0;i<n;i++){
            ans = min(maxLeft[i], maxRight[i]);
            if(ans-height[i]>0){
                 water += ans-height[i];
            }
        }

        return water ;
    }
};
