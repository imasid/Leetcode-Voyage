class Solution {
public:
    
    
    vector<char> reverseString(vector<char>& s) {
      
      int st = 0 ;
      int n = s.size();
      int e = n-1;
        
         
        
        while(st<e){
            
            swap(s[st],s[e]);
            st++;
            e--;
            
        }
        
        return s;
    }
};