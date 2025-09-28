//Rotating matrix 180 degree Platform-->> GFG link-->> https://www.geeksforgeeks.org/problems/c-matrix-rotation-by-180-degree0745/1

class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // Code here
        
        int n = mat.size();
        //First swap the row then reverse it or reverse the column first then reverse 
        /*
        //Column reversing 
        
        for(int j=0 ;j<n;j++){
             int start =0 , end = n-1;
             
             while(start<end){
                 swap(mat[start][j], mat[end][j]);
                 start++;
                 end--;
             }
        }
        
        //Reversing the row now 
        
        for(int i=0;i<n;i++){
            
            int start=0, end = n-1;
            
            while(start<end){
                swap(mat[i][start], mat[i][end]); 
                start++;
                end--;
            }
        }
        */
        
        //2nd logic 
        
        //Reverse rows
        
        for(int i=0;i<n;i++){
            int  start=0,end=n-1;
            
            while(start<end){
                swap(mat[i][start],mat[i][end]);
                start++;
                end--;
            }
            
        }
        
        //Reverse column
        
        for(int j=0;j<n;j++){
            int start=0, end= n-1;
            
            while(start<end){
                swap(mat[start][j], mat[end][j]);
                start++;
                end--;
            }
        }
        
        
        
    }
};
