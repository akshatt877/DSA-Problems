//LEETCODE--> 74 BINARY SEARCH IN 2D ARRAY LINK->>https://leetcode.com/problems/search-a-2d-matrix/

//Logic-->> first we find the index of last element in the 2D Array and then assuming it as a 2D array we tried to find the index of mid means i,j values of the mid
//so that we can apply binary search logic 


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();

        int start=0, end = (row*column)-1;

        while(start<=end){
            int mid = (start+end)/2;

            int row_index = mid/column;
            int col_index = mid%column;

            if(matrix[row_index][col_index]== target){
                return 1;
            }else if ( matrix[row_index][col_index]<target){
                start = mid+1;
            }else {
                end = mid-1;
            }
        }

        return 0;


    }
};
