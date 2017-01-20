#include<iostream>
#include<stdio.h>
#include<algorithm>
int main()	{
long long int n;
std::cin>>n;
long long int a=0,arr1[n],arr2[n];
for(int i=0;i<n;i++ )	{

std::cin>>arr1[i];
arr2[i]=i+1;
}
std::sort(arr1,arr1+n);
for(int i=0;i<n;i++)	{
//std::cout<<arr1[i]<<"\n"<<arr2[i]<<"\n";
//std::cout<<a<<"\n";
a+=abs(arr1[i]-arr2[i]);
}
std::cout<<a;
}
