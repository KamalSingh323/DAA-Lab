#include<stdio.h>
#include<malloc.h>
int main()
{
	int noc,i,*noe,j,**arr,*shft,*cmps,temp,k,l;
	scanf("%d",&noc);
	shft = (int*)malloc(noc*sizeof(int));
	cmps = (int*)malloc(noc*sizeof(int));
	noe = (int*)malloc(noc*sizeof(int));
	arr = (int**)malloc(noc*sizeof(int **));
	for(i=0;i<noc;i++)
	{
		scanf("%d",noe+i);
		*(arr+i) = (int*)malloc(*(noe)*sizeof(int));
		for(j=0;j<*(noe+i);j++)
		{
			scanf("%d",&arr[i][j]);
		}
		*(cmps+i) = 0;
		*(shft+i) = 0;
		for(j=1;j<*(noe+i);j++)
		{
			temp = arr[i][j];
//			printf("\ntemp = %d",temp);
			//printf("\n TEST CONDITION: %d", cmps[i]++);
			for(k = j-1;k>=0&&((++cmps[i])&&temp<arr[i][k]);k--)
			{
//				printf("\nj = %d, k = %d",j,k);
				(*(shft+i))++;
				arr[i][k+1] = arr[i][k];
//				printf("\n");
//				for(l=0;l<*(noe+i);l++)
//				{
//					printf("%d ",arr[i][l]);
//				}
//				printf("\nshfts %d",*(shft+i));
			}
			arr[i][k+1] = temp;
//			printf("\n");
//			for(l=0;l<*(noe+i);l++)
//			{
//				printf("%d ",arr[i][l]);
//			}
//			printf("\nshfts %d",*(shft+i));
		}
	}
	for(i=0;i<noc;i++)
	{
		printf("\n\n");
		for(j=0;j<*(noe+i);j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\ncomparisons = %d",*(cmps+i));
		printf("\nshifts = %d",*(shft+i));
	}
	free(arr);
	free(shft);
	free(cmps);
}
