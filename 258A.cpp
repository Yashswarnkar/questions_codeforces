#include<bits/stdc++.h>
using namespace std;
int main()	{
char ch[100005];
cin>>ch;
int n = strlen(ch);
int arr[100005];
int flag=1;
for(int i=0;i<n-1;i++){
if(ch[i]=='0'&&flag==1){
flag=0;
}
else cout<<ch[i];
}
if(flag==0)
cout<<ch[n-1];

}
