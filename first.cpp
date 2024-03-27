#include<iostream.h>
#include<conio.h>
void main()
{
  int s=0,a[10],avg,n;
cout<<("Enter the no.of elements:");
  cin>>n;
cout<<("Enter the elements:");
for(i=0;i<n;i++)
  cin>>a[i];
for(i=0;i<n;i++)
  s=s+a[i];
cout<<("The sum is: ",s);
avg=s/n;
cout<<("The average is: ",avg);
