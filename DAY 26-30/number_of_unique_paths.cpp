class Solution
{
    public:
    //Function to find total number of unique paths.
    void path( int a , int b , int x , int y , int &ans )
    {
        if( x == a and y == b )
            ans++;

        if( x > a or y > b )
            return ;
        
        path( a , b , x + 1  , y , ans );
        path( a , b , x , y + 1 , ans );
    }
    
    int NumberOfPath(int a, int b)
    {
        int ans = 0 ;
        path( a , b , 1 , 1 , ans );
        return ans ;
    }
};
