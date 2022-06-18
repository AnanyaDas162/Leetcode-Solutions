class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n1 = matrix[0].size(); //number of columns
        int n2 = matrix.size();  //number of rows
        
        int x = -1, y = -1;
        
        for (int i = 0; i < n2; i ++){
            if (matrix[i][0] == 0){  // if an element of first column
                y = 0;               //  is 0 then set y = 0
            }
        }
        
        for (int i = 0; i < n1; i ++){
            if (matrix[0][i] == 0){   // if an element of first row
                x = 0;                 //  is 0 then set x = 0
            }
        }
        
        for (int i = 1; i < n2; i ++){   // So we are using the first row and first column
            for (int j = 1; j < n1; j ++){   // As marker. So we are checking the rest of matrix elements.
                if (matrix[i][j] == 0){  // If it is 0
                    matrix[0][j] = 0; //  then the corresponding column of first row = 0
                    matrix[i][0] = 0; // And also the corresponding row of first column = 0
                }
            }
        }
        // After this -->>
        for (int i = 1; i < n1; i ++){
            if (matrix[0][i] == 0){  // Checking the first row, if an element is 0
                for (int j = 1; j < n2; j ++){
                    matrix[j][i] = 0; // Then making the corresponding column is 0
                }
            }
        }
        
        for (int i = 0; i < n2; i ++){
            if (matrix[i][0] == 0){  // Checking the first column, if an element is 0
                for (int j = 1; j < n1; j ++){
                    matrix[i][j] = 0;  // Then making the corresponding row is 0
                }
            }
        }
        
        if (x == 0){  // i.e. there is at least 1 element in 0 th row which was normally 0
            for (int i = 0; i < n1; i ++){
                matrix[0][i] = 0; // Making the corresponding column 0
            }
        }
        
        if (y == 0){  // i.e. there is at least 1 element in 0 th column which was normally 0
            for (int i = 0; i < n2; i ++){
                matrix[i][0] = 0;  // Making the corresponding row 0
            }
        }
    }
};