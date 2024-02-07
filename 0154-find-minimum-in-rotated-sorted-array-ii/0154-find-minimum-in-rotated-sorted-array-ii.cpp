class Solution {
public:
    int findMin(vector<int>& nums) {
         int start=0;
         int end=nums.size()-1;
         while(start< end){
             int mid=start+(end-start)/2;
             if(nums[end]<nums[mid]){
                 start=mid+1;
             }
             else if(nums[mid]<nums[start]){
                end=mid;
                start++;
             }
             else{
                 end--;
             }

         }
         return nums[start];
    }
};