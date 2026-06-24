class Solution {
public:
    int function(vector<int>&weights,int mid){
        int days=1;
        int load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>mid){
                days=days+1;
                load=weights[i];
              }
              else load+=weights[i];

        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int maxi=weights[0];
        int sum=0;
          for(int i=1;i<n;i++){
            if(weights[i]>maxi) maxi=weights[i];
           
          }
            for(int i=0;i<n;i++){
           sum+=weights[i];
            }
          int lo=maxi;
          int ans=0;
          int hi=sum;
          int  no_of_days;
          while(lo<=hi){
            int mid=(lo+hi)/2;
            no_of_days=function(weights,mid);
            if(no_of_days<=days){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
            
          }
          return ans;
    }
};