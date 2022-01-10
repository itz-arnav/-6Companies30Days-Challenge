class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
   {   vector<int>v;
        deque<int>q;
       int i=0,j=0;
       while(j<n)
       {
           while(q.size()>0 && arr[j]>q.back()){
           q.pop_back();
           }
           
          q.push_back(arr[j]);
          if(j-i+1<k) j++;
          else if(j-i+1==k)
          {
              v.push_back(q.front());
              if(q.front()==arr[i])
              q.pop_front();
              i++;j++;
              
          }
           
           
       }
       return v;
   }
};
