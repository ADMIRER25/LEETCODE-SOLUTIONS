#include<bits/stdc++.h>
class Solution {
public:
    void merge(vector<int>&a, int m, vector<int>&b, int n) 
    { 
      int i,j;
      int gap = ceil((m+n)/2.0);
      i = 0,j = gap;
      while(gap > 0)
      {
         if(j >= m+n)
          {
            if(gap == 1) gap = 0;
            else gap = ceil(gap/2.0);  
            i = 0,j = gap;
          }
          if(j < m && a[i] > a[j]) swap(a[i],a[j]);
          else if(j >= m && i < m && a[i] > b[j-m]) swap(a[i],b[j-m]);
          else if(j >= m && i >= m && b[i-m] > b[j-m]) swap(b[i-m],b[j-m]);
          i++,j++;
       
      }
      int idx = 0;
      for(i = m; i < m +n; i++)
      {
        a[i] = b[idx];
        idx++;
      }
    }
};