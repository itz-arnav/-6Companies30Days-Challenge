class Solution{
    public:
    //You need to complete this fucntion
    long long power(int N,int R)
    {
       if(R==0)

        return 1;

       if(R==1)

        return (N%1000000007);

       long long ans=1;

       long long know= power(N,R/2)%1000000007;

       if(R%2)

        ans=(ans*N)%1000000007;

       return (ans*((know*know)%1000000007))%1000000007;
    }

};
