# include<iostream>
using namespace std;
    
/*program for finding armstrong number


*/
int main()
{
	int n,r,sum=0,m;
	cout<<"enter the number   ..";
	cin>>n;
	m=n;
	while(n>0)
	{
		r=n%10;
	        n=n/10;
		sum=sum+r*r*r;
	}
	if(sum==m)
		cout<<"armstrong number"<<endl;
	else
		cout<<"not a armstrong number"<<endl;
	return 0;
}

