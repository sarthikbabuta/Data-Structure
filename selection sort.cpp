#include<iostream>
using namespace std;
void selection(int arr[],int n)
{
	for(int i=1;i<=n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<=n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
				
			}
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
}
int main()
{
	int arr[100],n;
	cout<<"enter array\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	selection(arr,n);
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i];
	}
}
