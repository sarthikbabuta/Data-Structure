#include<iostream>
using namespace std;
void merge(int arr[],int beg,int mid,int end)
{
	int arr2[100];
	for(int i=beg;i<=end;i++)
	{
		arr2[i]=arr[i];
	}
	int i=beg;
	int j=mid+1;
	int k=beg;
	while((i<=mid)&&(j<=end))
	{
		if(arr2[i]<arr2[j])
		{
			arr[k]=arr2[i];
			k++;
			i++;
		}
		else
		{
			arr[k]=arr2[j];
			k++;
			j++;
		}
	}
	if(i>mid)
	{
		while(j<=end)
		{
			arr[k]=arr2[j];
			k++;
			j++;
		}
	}
	if(j>mid)
	{
		while(i<=mid)
		{
			arr[k]=arr2[i];
			k++;
			i++;
		}
	}
	
}
void mergesort(int arr[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		mergesort(arr,beg,mid);
		mergesort(arr,mid+1,end);
		merge(arr,beg,mid,end);
		
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
	mergesort(arr,1,n);
	for(int i=1;i<=n;i++)
	{
		cout<<arr[i];
	}
}
