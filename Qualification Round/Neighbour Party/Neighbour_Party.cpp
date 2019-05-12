#include <iostream>
using namespace std;
int t;

int** func()
{
int sol[10][2]={0};
    int n,max,pos=0,temp=0,i;
  cin>>n;
  int elem[n];
  for (i=0;i<n;++i)
  {cin>>elem[i];}

  max=elem[0];
  for (i=0;i<n;++i)
  {
  if (elem[i]==0)
  {
  temp=elem[i];
  elem[i]=elem[i+1];
  }

  if (elem[i]>max)
  {max=elem[i];
  pos=i;}
    }

  for (i=0;i<n;++i)
  {
  if ((i!=pos-1) && (i!=pos+1) && (i!=pos))
  {
  if ((elem[i]+max)>max)
  { sol[t][0]=elem[i];
  sol[t][1]=max;}
  else
  {sol[t][0]=max;
  sol[t][1]='\0';}
  }
  }
  cout<<"Sol1 "<<sol[t][0]<<" Sol2 "<<sol[t][1]<<endl;

return sol;
}

int main ()
{
int i,j;
    cin>>t;
    int** ptr;

    for (i=0;i<t;++i)
    {  ptr=func(); }

for (i=0;i<t;++i)
{
cout<<ptr[i][0];
if (ptr[i][1]!='\0')
cout<<ptr[i][1];
}
return 0;

}
