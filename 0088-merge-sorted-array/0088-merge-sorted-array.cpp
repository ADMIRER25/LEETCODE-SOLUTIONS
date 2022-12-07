#include<bits/stdc++.h>
class Solution {
public:
    void merge(vector<int>&a, int m, vector<int>&b, int n) {
        //int temp = m;
        a.resize(m);
        for(int i = 0; i < n; i++)
        {
            a.push_back(b[i]);
        }
        sort(a.begin(),a.end());
    }
};