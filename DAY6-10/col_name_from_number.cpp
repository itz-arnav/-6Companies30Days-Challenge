class Solution{
    public:
    string colName (long long int N)
    {
        string res;
        
        while(N)
        {
            int index = N % 26;
            
            if(index == 0)
            {
                res.push_back('Z');
                
                N -= 26;
            }
            else
            {
                res.push_back('A' + (index - 1));
                
                N -= index;
            }
            
            N /= 26;
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};
