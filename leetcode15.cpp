class Solution
{
public
    int[][] rangeAddQueries(int n, int[][] queries)
    {
        int[][] mat = new int[n][n];
        for (int[] q : queries)
        {
            int x1 = q[0], y1 = q[1], x2 = q[2], y2 = q[3];
            mat[x1][y1] += 1;
            if (x2 + 1 < n && y2 + 1 < n)
            {
                mat[x2 + 1][y2 + 1] += 1;
            }
            if (x2 + 1 < n)
            {
                mat[x2 + 1][y1] -= 1;
            }
            if (y2 + 1 < n)
            {
                mat[x1][y2 + 1] -= 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i > 0)
                {
                    mat[i][j] += mat[i - 1][j];
                }
                else
                {
                    mat[i][j] += 0;
                }
                if (j > 0)
                {
                    mat[i][j] += mat[i][j - 1];
                }
                else
                {
                    mat[i][j] += 0;
                }
                if (i > 0 && j > 0)
                {
                    mat[i][j] -= mat[i - 1][j - 1];
                }
                else
                {
                    mat[i][j] -= 0;
                }
            }
        }
        return mat;
    }
}