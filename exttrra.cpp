#include<iostream>
using namespace std;
int partition(int arr[],int beg,int end)
{
	int pivot=arr[end];
	int pindex=beg;
	for(int i=beg;i<end;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(arr[i],arr[pindex]);
			pindex++;
		}
	}
	swap(arr[pindex],arr[end]);
	return pindex;
}
void quick(int arr[],int beg,int end)
{
	if(beg<end)
	{
		int pindex=partition(arr,beg,end);
		quick(arr,beg,pindex-1);
		quick(arr,pindex+1,end);
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
	quick(arr,1,n);
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i];
	}
}
