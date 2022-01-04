
class Solution {
  public:
    int findPosition(int n , int m , int k) {
        if(n==1){
           return 1;
       }
       if((m%n + k-1)==n)
       return m%n + k-1;
       else
       return (m%n + k-1)%n;
    }
};
