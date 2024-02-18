class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
    int start= *max_element(weights.begin(),weights.end());
    int end = 0; // Initialize end to 0

        // Calculate the sum of elements in weights
    for (int weight : weights)
     end += weight;
    int ans=end;
    while(start<=end){
        int mid=start+(end-start)/2;
        int pages=0;
        int count=1;
        for (int weight : weights){
            if(pages + weight>mid){
                pages=0;
                count++;
            }
            pages=pages+weight;
        }
        if(count<=days){
            ans=min(ans,mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

     return ans;
        
    }
};