int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
   
    
    
    //Interview bit problem https://www.interviewbit.com/problems/array-3-pointers/ problem link 
    
    int i=0,j=0,k=0;
    int min_diff= INT_MAX;
    
     while (i < (int)A.size() && j < (int)B.size() && k < (int)C.size()) {
        int a = A[i];
        int b = B[j];
        int c = C[k];

        // Find current max and min among a, b, c
        
        int current_min = min(a, min(b, c));
        
        int current_diff = max(abs(a - b), max(abs(b - c), abs(c - a)));
        
         if (current_diff < min_diff) {
            min_diff = current_diff;
        }

        // Move the pointer of the minimum value forward to try to reduce max difference
        if (current_min == a) {
            i++;
        } else if (current_min == b) {
            j++;
        } else {  // current_min == c
            k++;
        }
    }

    return min_diff;
}
