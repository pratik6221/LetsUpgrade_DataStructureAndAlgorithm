#include<iostream>
using namespace std;

int main()
{
	int size;
	cout<<"Enter the size of an array: ";
	cin>>size;
	
	int arr[size];
	
	cout<<"Enter array of size "<<size<<": ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Entered array is: ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	
	int r;
	cout<<"\nHow many times do you want to rotate array towards left? : ";
	cin>>r;
	
	int first;
	for(int i=0;i<r;i++)
	{
		first=arr[0];
		
		for(int j=0;j<size-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[size-1]=first;
	}
	
	cout<<"Array after rotating "<<r<<" times towards left: ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	
return 0;
}
		
	
