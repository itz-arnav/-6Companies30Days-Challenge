class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> ans;
    string t;
    vector<char> ch[15];
    void rec(int a[],int n,int i){
        if(i==n){
            ans.push_back(t);
            return;
        }
        for(auto c:ch[a[i]]){
            t.push_back(c);
            rec(a,n,i+1);
            t.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int N){
        int j=2,i=0;
        for(;i<18;i++)ch[j].push_back(char('a'+i)),j+=(i%3==2);
        ch[7].push_back('s');
        ch[8]={'t','u','v'};
        ch[9]={'w','x','y','z'};
        rec(a,N,0);
        return ans;
    }
};
