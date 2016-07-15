#include<iostream.h>
void reverseArray(int arr[],int len)
{
	int i=0;
	int j=len-1;
	while(i<j)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	
}
void outArray(int arr[],int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}
void main()
{
	int arr[5]={1,2,3,4,5};
	cout<<"ok?"<<endl;
	outArray(arr,5);
	reverseArray(arr,5);
	outArray(arr,5);
}