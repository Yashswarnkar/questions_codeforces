#include<stdio.h>
int q;
int partition(int A[],int l,int h)	{
int x=A[h];
int j,temp;
int i=l-1;
for(j=l;j<h;j++)	{
if(A[j]<x)	{
i=i+1;
temp=A[i];
A[i]=A[j];
A[j]=temp;
}

}
temp=A[j];
A[j]=A[i+1];
A[i+1]=temp;
return i+1;
}
void quicksort(int A[],int l,int h)	{
if(l<h)	{
q=partition(A,l,h);
quicksort(A,l,q-1);
quicksort(A,q+1,h);
}
}
int main()	{
int i,temp=0,j,sum=0;
int n;
scanf("%d",&n);
int A[n];
for(i=0;i<n;i++)	{
scanf("%d",&A[i]);
//printf("%d\n",A[i]);
sum=sum+A[i];
}
//printf("%d",sum);
quicksort(A,0,n-1);
for(i=0;i<n;i++)
printf("%d\n",A[i]);
for(i=n-1;i>=0;i--)	{
temp=temp+A[i];
if(temp>(sum/2))	{
j=n-i;
break;}
}
printf("%d",j);
return 0;
}
