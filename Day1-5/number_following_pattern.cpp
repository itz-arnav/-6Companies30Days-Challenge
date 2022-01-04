class Solution{   
public:
    string printMinNumberForPattern(string s){
            
        string ans = "";
        stack<int> st;
        for(int i = 0; i<=s.length(); i++){
            st.push(i+1);
            if(i == s.length() || s[i] == 'I'){
                while(!st.empty()){
                    char ch = '0' + st.top();
                    ans += ch;
                    st.pop();
                }
            }
        }
            
        return ans;    
            
    }
};
