#include<bits/stdc++.h>
int main()	{
int arr[4][4];
char ch1[5];
for(int i=0;i<4;i++)	{

scanf("%s",ch1);
for(int j=0;j!='\0';j++)	{
if(ch1[j]=='#'){
arr[i][j]=0;//printf("%d",arr[i][j]);
}
else {
arr[i][j]=1;//printf("%d",arr[i][j]);
}
}

}


int k=0;
bool flag=false;
 while(k<3&&flag==false)	{
for(int i=0;i<3;i++)	{
if(((arr[k][i]==arr[k+1][i]&&arr[k][i]!=arr[k+1][i+1]&&arr[k][i]==arr[k][i+1])||(arr[k][i]==arr[k+1][i]&&arr[k+1][i]!=arr[k][i+1]&&arr[k+1][i]==arr[k+1][i+1]))||(arr[k][i]==arr[k+1][i]&&arr[k][i]==arr[k+1][i+1]&&arr[k][i]==arr[k][i+1]))	{
flag=true;break;

}

}
k++;

}
if(flag==true)
printf("YES");
else 
printf("NO");

}
