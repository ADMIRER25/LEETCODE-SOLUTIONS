class Solution
{
    public boolean halvesAreAlike(String str)
    {
      int c=0,t=0;
      int n = str.length();
      str = str.toLowerCase();
    // System.out.println(str);
      for(int i= 0;i < n/2;i++)
      {
        char ch = str.charAt(i);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
          c++;
      }
      for(int i = n/2;i<n;i++)
      {
        char ch= str.charAt(i);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
          t++;
      }
      if(c == t) return true ;
      return false ;
    }
}