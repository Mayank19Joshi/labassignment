#include<stdio.h>
#include<malloc.h>
int BS(int ar[],int n,int e)
{
	int i = 0,l=n;
	int m;
	while(i<=l)
	{
		m = (i+l)/2;
		if(ar[m] == e)
			return m;
		else if(ar[m]>e)
			l = m-1;
		else if(ar[m]<e)
			i = m+1;
	}
	return -1;
}
int main()
{
	int noc,j,i,*arr,* ele,*nok,ti,tl,noe;
	scanf("%d",&noc);
	ele = (int *)malloc(noc*sizeof(int));
	nok = (int *)malloc(noc*sizeof(int));
	for(i=0;i<noc;i++)
	{
		scanf("%d",&noe);
		arr = (int *)malloc(noe*sizeof(int));
		
		for(j=0;j<noe;j++)
			scanf("%d",arr+j);
		scanf("%d",ele+i);
		*(nok+i) = BS(arr,noe,*(ele+i));
		ti=tl=*(nok+i);

		if(ti!=-1)
		{
			while(((ti-1)>=0)&&(arr[ti-1]==*(ele+i)))
				ti--;
			while(((tl+1)<noe)&&(arr[tl+1]==*(ele+i)))
				tl++;
			*(nok+i) = tl - ti +1;
		}
	}
	for(i=0;i<noc;i++)
	{
		if(*(nok+i)!=-1)
			printf("\n%d - %d",*(ele+i),*(nok+i));
		else
			printf("\nKey not present");
	}
	return 0;
}
