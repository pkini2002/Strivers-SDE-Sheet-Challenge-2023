// _---Brute Force Implementation- :(

#include <bits/stdc++.h>

// Mark the cells whose value is non zero to the entire row
void markRow(vector<vector<int>> &matrix, int n, int m,int i) {
		for(int j=0;j<m;j++){
			if(matrix[i][j]!=0){
				matrix[i][j]=-1;
			}
		}
}

// Mark the cells whose value is non zero to the entire col
void markCol(vector<vector<int>> &matrix, int n, int m,int j) {
	for(int i=0;i<n;i++){
		if(matrix[i][j]!=0){
            matrix[i][j]=-1;
		}
	}
}


// Traverse the entire matrix using 2 for loops wherever the cell value is 0 call the markRow and markCol function to make the entire row and col as -1
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				markRow(matrix,n,m,i);
				markCol(matrix,n,m,j);
			}
		}
	}

	// Finally mark all -1 as 0
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==-1){
				matrix[i][j]=0;
			}
		}
	}
	return matrix;
}


// Optimal Implementation :)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size(); // finding no of rows in matrix
        int cols=matrix[0].size(); // finding no of cols in matrix
        vector<int>dummy1(rows,-1),dummy2(cols,-1); // creating a new matrix one with all rows intialized to -1 and one more with all cols initialized to -1
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                   dummy1[i]=0;
                   dummy2[j]=0;
                }
            }
        }
         // Find bitwise or to find the final result
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(dummy1[i]==0 || dummy2[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
