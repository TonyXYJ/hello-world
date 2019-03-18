#include<stdio.h>
int m[200];
int main()
{
	int i,j,l;
	int k=0,count=0,supersum=0;
	for(i=100;i<1000;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			break;
			else
			continue;
		}
		if(j==i)
		{
			int a=i/100,b=(i%100)/10,c=i%10;
			int sum=a+b+c,pro=a*b*c,quasum=a*a+b*b+c*c;
			int f,g,h;
			if(sum==2)
			f=sum-1;
			else
			{
				for(f=2;f<sum;f++)
				{
					if(sum%f==0)
					break;
					else
					continue;
				}
			}
			if(f==sum)
			{
				if(pro==0||pro==1)
				break;
				else if(pro==2)
				g=pro-1;
				else
				{
					for(g=2;g<pro;g++)
					{
						if(pro%g==0)
						break;
						else
						continue;
					}
				}
				if(g==pro)
				{
					if(quasum==2)
					h=quasum-1;
					else
					{
						for(h=2;h<quasum;h++)
						{
							if(quasum%h==0)
							break;
							else
							continue;
						}
					}
					if(h==quasum)
					{
						count++,m[k]=i,k++;
					}
				}
			}
		}
	}
	for(l=0;l<k;l++)
		supersum=supersum+m[l];
	printf("超级素数的个数：%d\n",k);
	printf("超级素数的和是：%d\n",supersum);
	printf("最大的超级素数是：%d\n",m[k-1]);
	return 0;
}
