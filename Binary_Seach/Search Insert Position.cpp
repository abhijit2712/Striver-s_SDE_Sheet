class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int k)
    {
        //Quetions is stating that find upper bound 
        int low = 0;
        int high = n - 1;
        int ans = -1;
        
        while(low <= high){
            int mid = low + (high - low)/2;
            
            if(arr[mid] == k) return mid;
            
            if(arr[mid] < k){
                low = mid + 1;
            }else{
                ans = mid;
                high = mid - 1;
            }
        }
        
        if(ans == -1) return n;
        return ans;
        
    }
};
