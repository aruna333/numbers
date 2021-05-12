#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,count=0;
	cin>>num;
	for(int i=2;i<=num-1;i++)// first method
	{
		if(num%i==0)
		{
			count++;
			cout<<" not a prime";
			break;
		}
	
	}
	if(count==0)
	{
		cout<<"prime";
	}
	//second method
	
		for(int i=2;i<=(num/2)+1;i++)
	{
		if(num%i==0)
		{
			count++;
			cout<<" not a prime";
			break;
		}
	
	}
	if(count==0)
	{
		cout<<"prime";
	}
	//third method
	#include<cmath>
using namespace std;
int main()
{
	int num,count=0;
	cin>>num;
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			count++;
			cout<<"not a prime";
			break;
		}
	}
	if(count==0)
	{
		cout<<"prime";
	}
	return 0;
}
