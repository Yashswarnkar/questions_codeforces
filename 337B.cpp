#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int r=a*d,p=b*c;
	if(r>p)swap(r,p);
	r=p-r;
	cout<<r/__gcd(r,p)<<"/"<<p/__gcd(r,p)<<endl;
}
