class Solution {
public:
    int binary_search(vector<int>& nums,int left,int right,int k){
        if(left > right) return -1;
        int mid =  left + (right - left) / 2;
        if(k == nums[mid]) return mid;
        if(k > nums[mid]) return binary_search(nums,mid+1,right,k);
        if(k < nums[mid]) return binary_search(nums,left,mid-1,k);
        return -1;
    }
    int search(vector<int>& nums, int k) {
        int left = 0;
        int right = nums.size() - 1;
        return binary_search(nums,left,right,k); 
    }
};
