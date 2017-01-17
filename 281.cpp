#include<bits/stdc++.h>
using namespace std;
int main()	{
char ch[10000];
scanf("%s",ch);
if(ch[0]>=65&&ch[0]<=90)
cout<<ch;
else 	{
ch[0]=ch[0]-32;
cout<<ch;
}

return 0;
}
