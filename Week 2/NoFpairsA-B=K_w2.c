#include<stdio.h>
#include<malloc.h>
int main()
{
	int noc,i,noe,j,*cnt,a,*arr,ele,k;
	scanf("%d",&noc);
	cnt = (int *)malloc(noc*sizeof(int));
	for(i=0;i<noc;i++)
	{
		scanf("%d",&noe);
		arr = (int *)malloc(noe*sizeof(int));
		for(j=0;j<noe;j++)
			scanf("%d",arr+j);
		scanf("%d",&ele);
		*(cnt+i)=0;
		for(j=0;j<noe-1;j++)
		{
			a = arr[j];
			for(k=j+1;k<noe;k++)
			{
				if(a-arr[k]==ele||arr[k]-a==ele)
					*(cnt+i)+=1;
			}
		}
	}
	for(i=0;i<noc;i++)
	{
		printf("\n%d",*(cnt+i));
	}
	return 0;
}
