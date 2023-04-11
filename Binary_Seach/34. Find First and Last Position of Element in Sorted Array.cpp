class Solution {
    int firstOccurance(vector<int>& arr,int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=(start+end)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            end=end-1;
        }

        if(key>arr[mid]){
            start=mid+1;
        }else if(key<arr[mid]){
            end=mid-1;
        }

        mid=(start+end)/2;
    }
    return ans;
}
    
    
int lastOccurance(vector<int>& arr,int size,int key){
    int start=0;
    int end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
          
        }

        if(key>arr[mid]){
            start=mid+1;           
              
        }else if(key<arr[mid]){
            end=mid-1;
         
            
        }
        mid=(start+end)/2;
       
    }
    return ans;
}

    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          vector<int> v;
        int n= nums.size();
         int index=firstOccurance(nums,n,target);
         int index2=lastOccurance(nums,n,target);
        cout<<index<<endl;
        cout<<index2<<endl;
        
        v.push_back(index);
        v.push_back(index2);
        
        return v;
        
        
    }
};
