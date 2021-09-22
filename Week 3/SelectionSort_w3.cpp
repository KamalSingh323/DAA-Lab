#include<stdio.h>
#include<malloc.h>
int main()
{
	int noc,i,*noe,j,**arr,*swps,*cmps,temp,k,l,smallind;
	scanf("%d",&noc);
	swps = (int*)malloc(noc*sizeof(int));
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
		*(swps+i) = 0;
	//	printf("\nNo error till now\n");
		for(j=0;j<*(noe+i)-1;j++)
		{
			temp = arr[i][j];
//			printf("\ntemp = %d",temp);
			//printf("\n TEST CONDITION: %d", cmps[i]++);
			smallind = j;
			for(k = j+1;k<*(noe+i);k++)
			{
				if((++cmps[i])&&(arr[i][smallind] > arr[i][k]))	smallind = k;
			}
			(*(swps+i))++;
			arr[i][j] = arr[i][smallind];
			arr[i][smallind] = temp;
			//for(k = j-1;k>=0&&((++cmps[i])&&temp<arr[i][k]);k--)
			//{
//				printf("\nj = %d, k = %d",j,k);
			//	(*(shft+i))++;
			//	arr[i][k+1] = arr[i][k];
//				printf("\n");
//				for(l=0;l<*(noe+i);l++)
//				{
//					printf("%d ",arr[i][l]);
//				}
//				printf("\nshfts %d",*(shft+i));
			//}
			//arr[i][k+1] = temp;
//			printf("\n");
//			for(l=0;l<*(noe+i);l++)
//			{
//				printf("%d ",arr[i][l]);
//			}
		//	printf("\nswaps %d",*(swps+i));
		}
	}
	//printf("\n%d",noc);
	for(i=0;i<noc;i++)
	{
		printf("\n\n");
		for(j=0;j<*(noe+i);j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\ncomparisons = %d",*(cmps+i));
		printf("\nswaps = %d",*(swps+i));
	}
	free(arr);
	free(swps);
	free(cmps);
}
