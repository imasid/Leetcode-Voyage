class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       
        int rows = matrix.size();
        int cols = matrix[0].size();
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = rows -1;
        int endingCol = cols -1;
        int count = 0 ;
        int total = rows*cols;
        vector<int> ans;
        
        while(count<total){
            
            //printing first row
            for(int index =startingCol ; index<=endingCol && count<total ; index++){
                 
                ans.push_back(matrix[startingRow][index]);
                count++;
            }startingRow++;
            
            //printing last column
             for(int index =startingRow ; index<=endingRow &&count<total ; index++){
                 
                ans.push_back(matrix[index][endingCol]);
                count++;
            }endingCol--;
            
            //printing last row
            for(int index =endingCol ; index>=startingCol &&count<total ; index--){
                 
                ans.push_back(matrix[endingRow][index]);
                count++;
            }endingRow--;
            
            //printing first column 
            for(int index =endingRow ; index>=startingRow && count<total ; index--){
                 
                ans.push_back(matrix[index][startingCol]);
                count++;
            }startingCol++;
                 
            
        }
        
            return ans;
            
        }
};