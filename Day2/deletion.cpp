#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int n,i;
	cout<<"Enter the size of an array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of an array: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter 1: to delete from beginning \nEnter 2: to delete from any position";
	int ch;
	cout<<"\n Enter choice: ";
	cin>>ch;
	
	switch(ch)
	{
		case 1:
			int i;
			for(i=0;i<n;i++)
			{
				arr[i]=arr[i+1];
			}
			
			n--;
			
			for(i=0;i<n;i++)
			{
				cout<<arr[i];
			}
			cout<<"\n element deleted successfully from the beginning";
			break;
			
		case 2:
			int p;
			cout<<"Enter the position of elememt which to be deleted: ";
			cin>>p;
			
			for(i=p;i<n;i++)
			{
				arr[i]=arr[i+1];
			}
			
			n--;
			
			for(i=0;i<n;i++)
			{
				cout<<arr[i];
			}
			
			cout<<"\n Element deleted from the position "<<p;
			
			break;
	}


return 0;
}


