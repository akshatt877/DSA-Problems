//Rotating matrix 90 degree but anti-clockwise  link-->>  geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1?utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks
class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        
        //Taking transpose
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        
        
        //Column reversing
        for(int j=0;j<n;j++){
            int start=0,end=n-1;
            
            while(start<end){
                swap(mat[start][j], mat[end][j]);
                start++;
                end--;
            }
            
        }
        
    }
};
