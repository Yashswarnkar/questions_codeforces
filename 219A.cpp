#include<bits/stdc++.h>
int arr[27]={0};
using namespace std;
int main()	{
int k;
cin>>k;
int flag=0;
char ch[1005];
int count=0;
scanf("%s",ch);
for(int i=0;ch[i]!='\0';i++){
int a = ch[i];
arr[a-96]+=1;
//cout<<arr[a-96];
count++;
}
int len=0;
if(count%k==0&&count>=k){
for(int i=1;i<=26;i++){
if(arr[i]%k!=0)
flag=1;
}
while(len<count&&flag!=1){
for(int i=1;i<=26;i++){
int a = arr[i]/k;
for(int j=0;j<a;j++){
char b = char(i+96);
cout<<b;
}
len+=a;
}
}

}
else {
cout<<"-1";
}
if(flag==1)
cout<<"-1";
}
