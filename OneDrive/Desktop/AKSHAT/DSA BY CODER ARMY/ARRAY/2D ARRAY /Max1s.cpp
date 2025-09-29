//GFG link-->>  https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int row = arr.size();
        int col = arr[0].size();
        int j= col-1;
        int maxRow=-1;
        
       for(int i=0;i<row;i++){
           while(j>=0 && arr[i][j]==1){
               j--;
               maxRow = i;
           }
       }
       
       return maxRow;
    }
};
