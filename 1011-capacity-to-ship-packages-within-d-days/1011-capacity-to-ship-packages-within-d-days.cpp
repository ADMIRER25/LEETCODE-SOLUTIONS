class Solution {
  bool possible(vector<int>weights,int cap,int days)
  {
    int daysneeded = 1,maxcap = 0;
    
    for(int weight: weights)
    {
      maxcap += weight;
      if(maxcap > cap) // if sum of the weightd exceeds the capacity then to ship that 1 extra day is needed
      {
        daysneeded++;
        maxcap = weight; //now maxcap will check again from weight from which it is exceed the given capacity
      }
    }
     return daysneeded <= days;  //if we can ship the pakages less than d days we need to decrease the capacity so that number of days to ship the pakages increased.
  }
public:
    int shipWithinDays(vector<int>& weights, int days) 
    {
       int maxcapacity,mincapacity = 0;
       for(int weight: weights)
       {
         if(mincapacity < weight) mincapacity = weight; // it is possible to ship with the maximum weight 
         maxcapacity += weight; // it is possible to ship in 1 day with the sum of the weights.
       }
      
      int l = mincapacity,r = maxcapacity;
      
      while(l < r)
      {
        int mid = l + (r-l)/2;
        
        if(possible(weights,mid,days)) // if it is possible to ship the pakages within d days with mid capacity, if possible then we can ship it grater than mid capacity so we try to less the capacity,but if not it is not possible to ship the pakages in d days with mid capacity as well as less than mid capacity so we will increase the capacity so that number of days needs will decrease and if we can ship the pakages less than d days we need to decrease the capacity so that number of days needed increased.
        {
          r = mid;
        }
        else l = mid + 1;
      }
      return l; // here l == r so here we can ship pakages with least capacity in d days;
    }
};