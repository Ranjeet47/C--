# include<iostream>
using namespace std;
    
/*program for binary search of array element

*/
int main()
{
        int a[10]={6,8,13,17,20,22,25,28,30,35};
 	int l=6,h=35,key,mid;
	cout<<"enter the key;
	cin>>key;
	whlie(l<=h)
	{
		mid=(l+h)/2;
		if(key==a[mid])
		{
			cout<<"key found a"<<mid;
			return 0;
		}
		else if(key<a[mid])
			h=mid-l;
		else
			l=mid+l;
	}
	cout<<"not found";
	return 0;
}