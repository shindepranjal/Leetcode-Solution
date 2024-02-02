class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n=arr.size();
         int start = 0;
        int end = n - 1;
        
        while(start <= end)
        {
            int mid = start + (end-start) / 2;
            if (arr[mid] == target)
               return true;
			// with duplicates we can have this contdition, just update left & right
            if((arr[start] == arr[mid]) && (arr[end] == arr[mid]))
            {
                start++;
                end--;
            }
			// first half
			// first half is in order
            else if(arr[start] <= arr[mid])
            {
				// target is in first  half
                if((arr[start] <= target) && (arr[mid] > target))
                    end = mid - 1;
                else
                    start = mid + 1;
            }
			// second half
			// second half is order
			// target is in second half
            else
            {
                if((arr[mid] < target) && (arr[end]>= target))
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return false;
    
    }
};