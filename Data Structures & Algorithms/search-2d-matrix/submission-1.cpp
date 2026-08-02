class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       if(matrix.empty() || matrix[0].empty())
       {
        return false;
       }

       int ROWS = matrix.size();
       int COLS = matrix[0].size();

       int l = 0;
       int r = ROWS * COLS - 1;

       while(l <= r)
       {
        int mid = l + (r - l) / 2;
        int val = matrix[mid / COLS][mid % COLS];
        if(val < target)
        {
            l = mid + 1;
        }
        else if(val > target)
        {
            r = mid - 1;
        }
        else
        {
            return true;
        }
       } 
       return false;
    }
};
