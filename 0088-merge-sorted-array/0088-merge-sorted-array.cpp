#include<bits/stdc++.h>
class Solution {
public:
    void merge(vector<int>&a, int m, vector<int>&b, int n) 
    { int i,j;
      if(m == 0)
      {
        int idx = 0;
        for(i = m; i < m + n; i++)
        {
          a[i] = b[idx];
          idx++;
        }
      }
      else if(n == 0) return;
      
     // cout << a.size() << endl;
      for(i = 0; i < m; i++)
      {
        if(a[i] > b[0]) swap(a[i],b[0]);
        
        int first = b[0];
        
        for(j = 1; j < n && first > b[j];j++)
        {
          b[j-1] = b[j];
        }
        b[j-1] = first;
      }
      int idx = 0;
      for(i = m; i < m + n; i++)
      {
        a[i] = b[idx];
        idx++;
      }
    }
};