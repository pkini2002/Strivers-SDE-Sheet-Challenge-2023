class Solution {
public:
    int uniquePaths(int m, int n) {
        // m-> number of rows
        // n-> number of cols
        // Creating a 2d vector with all cells initialized to 0
        vector<vector<int>>arr(m,vector<int>(n,0));
        // Fill all cells of 1st rows with 1
        for(int i=0;i<n;i++){
            arr[0][i]=1;
        }
        // Find all cells of 1st cols with 1
        for(int i=0;i<m;i++){
            arr[i][0]=1;
        }

        // Iterate through remaining rows from 1 to m and 1 to n
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }
        // Finally return the value stored in the last cell
        return arr[m-1][n-1];
    }
};