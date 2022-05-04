class Solution {
public:
    bool isPalindrome(string s) {
        
        int st =0;
        int e = s.length()-1;
        
        while(st<e){
            
            if(!isalnum(s[st])){
                
                st++;
                
            }else if(!isalnum(s[e])){

                e--;
            }else if( tolower(s[st++])!=tolower(s[e--])){
                
               return false;
                
            }
        }
        
        return true;
    }
};