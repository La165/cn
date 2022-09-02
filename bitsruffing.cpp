#include<iostream>
#include<string.h>
using namespace std;
int main()
{
		int a[20],b[30],i,j,k,count,n;
		cout<<"Enter frame size:";
		cin>>n;
		cout<<"Enter the frame in the form of 0 and 1:";
		
			for(i=0;i<n;i++)
		cin>>a[i];
			i=0;
			count=2;
			j=0;
			while(i<n)
			{
				if(a[i]==1)
				{
					b[j]=a[i];
				for(k=i+1; a[k]==1 && k<n && count<7;k++)
				{
					j++;
					b[j]=a[k];
					count++;
					if(count==5)
					{
						j++;
						b[j]=0;
					}
					i=k;
				}
			}
				else
				{
					b[j]=a[i];
				}
				i++;
				j++;
				}
				cout<<"After bit stuffing:";
				for (i=0;i<j;i++)
			 cout<<b[i];
				return 0;
			
}
