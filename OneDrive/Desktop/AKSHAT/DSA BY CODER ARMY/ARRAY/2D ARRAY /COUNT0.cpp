//GFG PROBLEM LINK-->> https://www.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1

class Solution {
  public:
    int countZeros(vector<vector<int>> A) {
        // code here
        int n = A.size();
        int row = 0, col = n-1;
        
        int count0 = 0;
        while(row< n && col>=0){
          if (A[row][col] == 0) {
            // All elements from 0 to col in this row are zero
            count0 += (col + 1); //because once you encountered 0 it means all elements left to the element is 0 so instead of going individually we will include it in once 
            row++; // move to next row
        } else {
            col--; // move left
        }

        }
        
        return count0;
    }
};




/**
THIS IS THE STATEMENT IN CASE  IF NEGATIVE ELEMENTS ARE ALOS PRESENT IN THE 2D ARRAY 
if (A[row][col] == 0) {
    count0 += (col + 1); // all elements from 0 to col are zero
    row++;               // move to next row
} else if (A[row][col] < 0) {
    row++;               // skip this row, zeros are already passed
} else {
    col--;               // move left to find smaller values
}
*/
