class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
        return x;

        int start=0;
        int end=x;
        int mid;
        int ans;
        while(start<=end){
            mid=start+(end-start)/2;
            //mid==x;
            if(mid==x/mid){
                return mid;
                break;
            }
            //mid<target
            else if(mid<x/mid){
                ans=mid;
                start=mid+1;
            }
            else{
                // ans=mid;
                end=mid-1;
            }
        }
        return ans;
    }
};