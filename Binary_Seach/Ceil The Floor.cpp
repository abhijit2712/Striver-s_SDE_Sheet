int findFloor(int arr[], int n, int x){
        
        int low = 0;
        int high = n - 1;
        int ans = -1;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(arr[mid] == x) return mid;
            else if(arr[mid] < x){
                ans = mid;
                low = mid + 1;      //storing lower bound in ans 
            }else{
                high = mid -1;
            }
        }
        
        return ans;
    }

    int findCeil(int arr[], int n, int x){
        
        int low = 0;
        int high = n - 1;
        int ans = -1;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(arr[mid] == x) return mid;
            else if(arr[mid] < x){
                low = mid + 1;
            }else{  
                ans = mid;                  //storing uppr bound in ans 
                high = mid -1;      
            }
        }
        
        return ans;
    }
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr, arr + n);                     //sort the given array
    
    int floor_no = findFloor(arr, n, x);        //index lower bound 
    int Ceil_no = findCeil(arr, n, x);          //index upper bound
    int ans1 = 0 ,ans2 = 0;
    
    
    
    if(floor_no == -1) ans1 = -1;       //checking lower bound out of bound condition 
    else ans1 = arr[floor_no];
    
    if(Ceil_no == -1) ans2 = -1;        //checking upper out of bound condition 
    else ans2 = arr[Ceil_no];
    
    
    
    
    return {ans1,ans2};
}
