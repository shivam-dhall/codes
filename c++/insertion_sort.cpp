#include<iostream>
using namespace std;
int main()
{
  int n,temp,j;
  cout<<"Size : ";
  cin>>n;
  int a[n];
  cout<<endl<<"Array "<<endl;

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=1;i<n;i++)
  {
    temp=a[i];
    j=i-1;
    while(j>=0 && temp<a[j])
      {
        a[j+1]=a[j];
        j--;
      }
  a[j+1]=temp;
  }
  cout<<"Sorted Array"<<endl;

  for(int i=0;i<n;i++)
    cout<<a[i]<<endl;

}
