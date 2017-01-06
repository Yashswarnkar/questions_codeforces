#include<stdio.h>
int arr[1000000];
int size[1000000];
int root(int i)	{

while(arr[i]!=i)	{
arr[i]=arr[arr[i]];
i=arr[i];
}
return i;

}


void initialize(  int N)
{
    for(int i = 0;i<N;i++)
    {
arr[ i ] = i ;
size[ i ] = 1;
}
}

void weightedunion(int A,int B)
{
    int root_A = root(A);
    int root_B = root(B);
    if(size[root_A] < size[root_B ])
    {
arr[ root_A ] = arr[root_B];
size[root_B] += size[root_A];
}
    else
    {
arr[ root_B ] = arr[root_A];
size[root_A] += size[root_B];
}

}
int main()	{
int n;
long long int k;
scanf("%d%lld",&n,&k);

initialize(n);
int arr1[n];
for(int i=0;i<n;i++)
scanf("%d",&arr1[i]);
for(int j=0;j<n-1;j++){
for(int i=j+1;i<n;i++)	{
if((arr1[j]!=k*arr1[i])||(arr1[j]*k!=arr1[i]))	{
weightedunion(arr1[j],arr1[i]);

}
}
}
int ans=0;
for(int i=1;i<100000;i++)	{
int root_A = root(i);
if(size[root_A]>ans)
ans=size[root_A];
}
printf("%d",ans);
}
