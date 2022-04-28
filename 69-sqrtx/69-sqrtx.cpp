class Solution {
public:
   
    unsigned long int binarySearch(int x){
        
       int s = 0;
       int e = x;
       unsigned long int mid = s + (e-s)/2;
       
       unsigned long int ans = 0;
        
       while(s<=e){
                
            unsigned long int sqr = mid*mid;
            if( sqr == x){
            
                return mid;
            }
            else if (sqr > x){
                e = mid -1;
            }
            else if(sqr<x) {
                
                ans = mid;
                s = mid+1;
                
                
            }
            
            
            mid = s +(e-s)/2;
        }
        
       return ans;
        
    }
    
   unsigned long int mySqrt(int x) {
        
      unsigned long int a = binarySearch(x);
      return a;
    }
};