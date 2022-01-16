void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int const N = matrix.size();
    for(int i=0; i<N; i++)
    {
        for(int j=0, k=N-1; j<k; j++, k--)
        {
            swap(matrix[i][j], matrix[i][k]);
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }    
}
