#include<bits/stdc++.h>
using namespace std;
int main()	{
int arr[4][4];
int flag=0;
for(int i=0;i<4;i++){
for(int j=0;j<4;j++){
char ch;
cin>>ch;
if(ch=='#')
arr[i][j]=1;
else arr[i][j]=0;
}
}
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
if((arr[i][j]==arr[i][j+1]&&arr[i][j+1]==arr[i+1][j+1])||(arr[i][j]==arr[i+1][j]&&arr[i+1][j]==arr[i+1][j+1])||(arr[i+1][j]==arr[i+1][j+1]&&arr[i+1][j+1]==arr[i][j+1]))
flag=1;
}
}
if(flag==1)
cout<<"YES";
else cout<<"NO";
}
