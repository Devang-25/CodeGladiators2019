#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string arr[10];
int t;

    string input ()
     {
       int i,n;
     cin>>n;
     int stre[n],ene[n];
     for (i=0;i<n;++i)
     {cin>>stre[i];}
     for (i=0;i<n;++i)
     {cin>>ene[i];}

     sort (stre, stre+n);
     sort (ene, ene+n);

       int p=0,q;
      for (i=0;i<n;++i)
      {
      if (ene[i]>stre[i])
      ++p;
      else
      ++q;
      }
      string res;

             if (p==n)
          res="WIN";
          else
          res="LOSE";
          return res;
 }


int main ()
{
int i;
    cin>>t;

for (i=0;i<t;++i)
arr[i]=input ();

for (i=0;i<t;++i)
cout<<arr[i]<<endl;

return 0;
}
