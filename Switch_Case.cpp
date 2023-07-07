// Question : https://practice.geeksforgeeks.org/problems/java-switch-case-statement3529/1

class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        switch(choice){
            case 1: 
            return Math.PI*arr[0]*arr[0];
            case 2:
            return arr[0]*arr[1];
            default:
            return 0.0;
        }
    }
};
