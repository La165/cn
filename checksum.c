#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20],sum[20],com[20];
	int i,len;
	printf("enter first binary string:\n");
	scanf("%s",a);
	printf("enter second binary string:\n");
	scanf("%s",b);
	if(strlen(a)==strlen(b))
	{
		len=strlen(a);
		char carry='0';
		for(i=len-1;i>=0;i--)
		{
			if(a[i]=='0'&&b[i]=='0'&&carry=='0')
			{
				sum[i]='0';
				carry='0';
			}
			else if(a[i]=='0'&&b[i]=='0'&&carry=='1')
			{
				sum[i]='1';
				carry='0';
			}
			else if(a[i]=='0'&&b[i]=='1'&&carry=='0')
			{
				sum[i]='1';
				carry='0';
			}
			else if(a[i]=='0'&&b[i]=='1'&&carry=='1')
			{
				sum[i]='0';
				carry='1';
			}
			else if(a[i]=='1'&&b[i]=='0'&&carry=='0')
			{
				sum[i]='1';
				carry='0';
			}
			else if(a[i]=='1'&&b[i]=='0'&&carry=='1')
			{
				sum[i]='0';
				carry='1';
			}
			else if(a[i]=='1'&&b[i]=='1'&&carry=='0')
			{
				sum[i]='0';
				carry='1';
			}
			else if(a[i]=='1'&&b[i]=='1'&&carry=='1')
			{
				sum[i]='1';
				carry='1';
			}
			else
			{
				break;
			}
		}
			printf("\ncarry=%c,sum=%s",carry,sum);
			for(i=len-1;i>0;i--)
			{
				if(sum[i]=='1'&&carry=='1')
				{
					sum[i]='0';
					carry='1';
				}
				else if(sum[i]=='0'&&carry=='1')
				{
					sum[i]='1';
					break;
				}
				else
				{
					break;
				}
				for(i=0;i<len;i++)
				{
					if(sum[i]=='0')
					{
						com[i]='1';
					}
					else
					{
						com[i]='0';
					}
				}
			}
			printf("\nChecksum=%s",com);
		}
 else
	{
		printf("\nwrong input strings");
 }
}
