class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>&v) 
    {
      sort(v.begin(),v.end()) ;
      vector<vector<int>>ans;
      vector<int>temp = v[0];
      for(int i = 0; i < v.size();i++)
      {
          if(v[i][0] <= temp[1]) // merged interval
          {
              temp[1] = max(temp[1],v[i][1]);
          }
          else
          {
              ans.push_back(temp);
              temp = v[i];
          }
      }
      ans.push_back(temp);
      return ans;
    }
};