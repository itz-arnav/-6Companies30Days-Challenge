class Solution {
public:
    bool anu(vector<int>& nums, int n, int mid,int m){
        int count=0,sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]>mid) return false;
            else if(sum+nums[i]<=mid) 
                sum+=nums[i];
            else{
                count++;
                sum=nums[i];
            }
        }
        count++;
        return count<=m;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int i=0,j,sum=0,max=0,n=nums.size();
        j=accumulate(nums.begin(),nums.end(),0);
        while(i<j){
            int mid=i+(j-i)/2;
            if(anu(nums,n,mid,m)){
                max=mid;
                j=mid;
            }
            else i=mid+1;
        }
        return j;
    }
};
