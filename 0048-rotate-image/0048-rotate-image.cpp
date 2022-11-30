class Solution {
public:
    void rotate(vector<vector<int>>&m)
    {
        //do the traspose matrix 
      for(int i = 0 ; i < m.size();i++)
      {
        for(int j = i; j < m[0].size();j++)
        {
          int x = m[i][j];
          m[i][j] = m[j][i];
          m[j][i] = x;
        }
      }
      //reverse every row
      for(int i = 0 ; i < m.size();i++)
      {
        reverse(m[i].begin(),m[i].end());
      }
    }
};