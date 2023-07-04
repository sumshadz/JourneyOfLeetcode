//Solution 1
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m=matrix.size();
      int n=matrix[0].size();
      for(int i=0;i<m;i++){
          if(matrix[i][0]<=target && matrix[i][n-1]>=target)
          {
              for(int j=0;j<n;j++)
              {
                  if(matrix[i][j]==target) return true;
              }
          }
      }
      return false;  
    }
};

//Solution 2
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m=matrix.size();
      int n=matrix[0].size();
      int row=0,col=n-1;
      while(row<m && col>-1){
          int curr=matrix[row][col];
          if(curr==target) return true;
          if(target>curr) row++;
          else col--;
      }
      return false;  
    }
};
