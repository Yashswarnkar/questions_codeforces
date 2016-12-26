#include<bits/stdc++.h>
int main()	{
int n;
std::cin>>n;
int arr[n];
for(int i=0;i<n;i++)
std::cin>>arr[i];
int m;
std::cin>>m;
int arr1[m];
for(int i=0;i<m;i++)
std::cin>>arr1[i];

int ans1=0,ans2=0;
for(int i=0;i<m;i++){
for(int j=0;j<n;j++){
if(arr[j]==arr1[i]){
ans1+=j+1;
ans2+=n-(j+1)+1;
}
}
}
std::cout<<ans1<<" "<<ans2;

}
