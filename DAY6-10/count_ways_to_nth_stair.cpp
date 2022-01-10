class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        if(m%2==1)
    return (m+1)/2;
    else
    return (m/2)+1;
    }
};
