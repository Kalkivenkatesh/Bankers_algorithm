#include<bits/stdc++.h>
using namespace std;
int equi(int arr[], int num)
{
	int sum=0,leftsum=0;
	for(int i=0;i<num;i++)
	{
		sum=sum+arr[i];
	}
	for(int i=0;i<num;i++)
	{
		sum = sum-arr[i];
		if(leftsum==sum)
		{
			return i;
		}
		leftsum=leftsum+arr[i];
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<equi(a,n);
	return 0;
	
}
