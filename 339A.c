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
int i,k=0;
char ch[100]; 
int A[101];
for(i=0;i<101;i++)
A[i]=100000;
char p;
scanf("%s",ch);
for(i=0;ch[i]!='\0';i++)	{
p=ch[i];
if(p!='+')	{
A[k]=(int)p - 48;

k++;
}

}
if(k>1)	{
quicksort(A,0,k);
for(i=0;i<k;i++)	{
printf("%d",A[i]);
if(i!=k-1)	{
printf("+");
}
}
}
else printf("%d",A[0]);
printf("\n");
return 0;

}

