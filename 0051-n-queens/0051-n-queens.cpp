class Solution {
  bool is_safe(int row,int col,int n,vector<string>v)
  {
    int temprow = row,tempcol = col;
     //check the upper
    while(row >= 0)
    {
      if(v[row][col] == 'Q') return false;
      row--;
    }
    row = temprow;
    
    //check leftupper
    while(col >= 0 && row >= 0)
    {
      if(v[row][col] == 'Q') return false;
      row--,col--;
    }
    row = temprow,col = tempcol;
    //check rightupper 
    while(row >= 0 && col < n)
    {
      if(v[row][col] == 'Q') return false;
      row--,col++;
    }
    return true;
  }
  void helper(vector<vector<string>>&ans,vector<string>v,int row,int n)
  {
    if(row == n)
    {
      ans.push_back(v);
      return;
    }
    
    for(int col = 0; col < n; col++)
    {
      if(is_safe(row,col,n,v))
      {
        v[row][col] = 'Q';
        helper(ans,v,row+1,n);
        v[row][col] = '.';
      }
    }
  }
public:
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>>ans;
        string s(n,'.');
        vector<string>v(n,s);
      // for(string it : v) cout << it << endl;
        helper(ans,v,0,n);
      return ans;
    }
};