class Solution {
public:
    int uniquePaths(int m, int n) {
        int grid[100][100];
        int down = 0;
        int right = 0;

        for (int i = m - 1; i >= 0; i-- ){
            for(int j = n - 1; j >= 0; j-- ){
                if( i == m - 1 && j == n - 1 ){
                    down = 1;
                    right = 0;
                }
                else if( i == m - 1 ){
                    down = 0;
                    right = grid[i][ j + 1 ];
                }
                else if( j == n - 1 ){
                    down = grid[ i + 1 ][j];
                    right = 0;

                }
                else{
                    down = grid[i][ j + 1 ];
                    right = grid[ i + 1 ][j];
                }

                grid[i][j] = down + right;
            }
        }

        // printGrid( grid, m, n );

        return grid[0][0];
    }

    void printGrid( int grid[100][100], int m, int n )
    {
        for( int i = 0; i < m; i ++ )
        {
            for( int j = 0; j < n; j++ )
            {
                cout << " " << setw(10) << grid[i][j];
            }
            cout << endl;
        }
    }
};
