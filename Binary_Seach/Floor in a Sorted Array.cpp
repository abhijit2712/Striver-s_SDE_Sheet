 int findFloor(vector<long long> arr, long long n, long long x){
        
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(arr[mid] == x) return mid;
            else if(arr[mid] < x){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid -1;
            }
        }
        
        return ans;
    }
