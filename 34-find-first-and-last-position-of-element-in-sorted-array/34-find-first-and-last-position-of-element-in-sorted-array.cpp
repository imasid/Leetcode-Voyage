class Solution {
public:
    int firstOccur(vector<int>& nums, int n , int target){

        int s=0;
        int e=n-1;
        int mid= s+ (e-s)/2;
        int ans=-1;
        
        while(s<=e){
            
            if(nums[mid]==target){
                
                ans=mid;
                e= mid-1;
            
            }
            else if(nums[mid]>target){
                
                e= mid-1;
            
            }
            else if(nums[mid]<target){
                
                s= mid+1;
            
            }
                mid= s + (e-s)/2;

            
        }
       return ans; 
    }
    int lastOccur(vector<int>& nums, int n , int target){

        int s=0;
        int e=n-1;
        int mid= s+ (e-s)/2;
        int ans=-1;
        
        while(s<=e){
            
            if(nums[mid]==target){
                
                ans=mid;
                s=mid+1;
            
            }
            else if(nums[mid]>target){
                
                e= mid-1;
            
            }
            else if(nums[mid]<target){
                
                s= mid+1;
            
            }
            
            mid= s + (e-s)/2;
         
        }
      return ans;  
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<int>ans;
        ans.push_back(firstOccur(nums, n , target));
        ans.push_back(lastOccur(nums, n , target));
        
        return ans;
    }
    
};