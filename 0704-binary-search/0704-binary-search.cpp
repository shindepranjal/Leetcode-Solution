class Solution {
public:
    int search(vector<int>& arr, int target) {
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target) return i;
            
        // }
        // return -1;
        int n=arr.size();
        int start= 0;
        int end=n-1;
        int mid;
        while(start<=end){
            mid=(start+end)/2;
            //mid==target
            if(arr[mid]==target){
                return mid;
            }
            //mid<target
            else if(arr[mid]<target){
                start=mid+1;
            }
            //mid>target
            else
            {
                end=mid-1;
            }
        }

        return -1;
        
    }
};