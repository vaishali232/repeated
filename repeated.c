#include<stdio.h>
int main()
{

int n,t,k=1,flag=0;
scanf("%d",&n);
int a[n];
int freq[n];
for(int i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
for(int i=0;i<n;i++)
{
	freq[i]=0;
}
for(int i=0;i<n;i++)
{
freq[a[i]]++;
}
for(int i=0;i<n;i++)
{
if(freq[i]>1)
{
	flag=1;
printf("%d ",i);
}

}
	if(flag==0)
	{
		printf("unique");
	}

}
