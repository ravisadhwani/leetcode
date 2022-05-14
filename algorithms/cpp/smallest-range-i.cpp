class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        
        int maax=INT_MIN;
        int miin=INT_MAX;
        for(int i:nums){
            cout<<i;
            maax=max(maax,i);
            miin=min(miin,i);
        }
        int diff=maax-miin;
        
        return diff>2*k ? diff-2*k : 0;
        
    }
};