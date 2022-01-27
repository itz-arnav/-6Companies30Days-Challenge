
class Solution {
public:
    bool sona(vector<int>& piles, int k,int h,int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)piles[i]/k);
            if(sum>h) return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1,j=*max_element(piles.begin(),piles.end()),mid;
        int anu=j,n=piles.size();
        while(i<=j){
            mid=(i+j)/2;
            if(sona(piles,mid,h,n)){
                anu=mid;
                j=mid-1;
            }
            else i=mid+1;
        }
        return anu;
    }
};
