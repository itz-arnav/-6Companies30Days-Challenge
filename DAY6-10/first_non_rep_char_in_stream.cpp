string FirstNonRepeating(string A){
     // Code here
     
      string ans="";
     vector<int> mp(26,0);
     deque<char> q;
     for(int i=0;i<A.size();i++)
     {
        if(mp[A[i]-'a']==0)
        q.emplace_back(A[i]);
        mp[A[i]-'a']++;
        if(mp[A[i]-'a']==2)
        {auto it=find(q.begin(),q.end(),A[i]); if(it!=q.end()) q.erase(it);}
        if (!q.empty() && mp[q.front()-'a']==1)
        ans.push_back(q.front());
        
        else
        {
            ans.push_back('#');
        }
       }
     return ans;
 }
