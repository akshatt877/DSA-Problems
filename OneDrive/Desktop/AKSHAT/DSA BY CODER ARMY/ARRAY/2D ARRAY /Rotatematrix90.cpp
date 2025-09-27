//Rotating matrix by 90 degree LEETCODE = 48 LINK-->https://leetcode.com/problems/rotate-image/ 

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Taking Transpose
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        //Reversing each row 

        for (int i = 0; i < n; i++) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(matrix[i][start], matrix[i][end]);
        start++;
        end--;
    }
}


        
    }
};
