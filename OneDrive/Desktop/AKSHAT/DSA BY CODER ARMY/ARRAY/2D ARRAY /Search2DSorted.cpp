//Searching in the 2D sorted array which is sorted row wise and column wise  
//GFG Link-->>  https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1

class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
      int rows = mat.size();
int cols = mat[0].size();
int row = 0, col = cols - 1;

while (row < rows && col >= 0) {
    if (mat[row][col] == x) {
        return 1;
    } else if (mat[row][col] < x) {
        row++;
    } else {
        col--;
    }
}
return 0;

    }
};
