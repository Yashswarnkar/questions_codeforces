#include<stdio.h>
int q,k;
int partition(int A[],int B[],int p,int r)	{
int j,temp,temp1;
int x=A[r];
//printf("%d\n",x);
int i=p-1;
for(j=p;j<r;j++)	{
if(A[j]<x)	{
i=i+1;
temp=A[i];
temp1=B[i];
A[i]=A[j];
B[i]=B[j];
A[j]=temp;
B[j]=temp1;
}

}
temp=A[j];
temp1=B[j];
A[j]=A[i+1];
B[j]=B[i+1];
A[i+1]=temp;
B[i+1]=temp1;
return i+1;
}
void quicksort(int A[],int B[],int p,int r)	{
if(p<r)	{
q=partition(A,B,p,r);
quicksort(A,B,p,q-1);
quicksort(A,B,q+1,r);
}
}

int main()	{
int s,n;
int i;
scanf("%d%d",&s,&n);
int A[n];
int B[n];
for(i=0;i<n;i++)	{
scanf("%d",&A[i]);
scanf("%d",&B[i]);
}
quicksort(A,B,0,n-1);
for(i=0;i<n;i++)	{
if(s>=A[i])	{
s=s+B[i];
}
else	{
printf("NO");
break;
}
}
if (i==n)
printf("YES");
return 0;
}






