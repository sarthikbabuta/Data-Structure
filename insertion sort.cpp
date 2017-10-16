#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
	int i,j,k,temp;
	for(int i=2;i<=n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(arr[j]>temp&&j>0)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
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
	insertion(arr,n);
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i];
	}
}
