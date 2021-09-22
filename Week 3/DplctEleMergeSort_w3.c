#include<stdio.h>
#include<malloc.h>
void mergeSort(int arr[],int i,int m,  int n)
{
//	printf("\nCalled merge sort F = %d || L = %d || mid = %d",i,n,m);
//	system("pause");
	int ti = i, j = m+1;
	int * ar = (int *)malloc((n-i+1)*sizeof(int));
	int l = 0;
	while(ti<=m&&j<=n)
	{
		if(arr[ti]<arr[j])
		{
//			printf("\n 1 => %d %d", arr[i],arr[j]);
			ar[l] = arr[ti];
//			printf("\n 1.a => %d",ar[l]);
			l++;ti++;
		}
		else
		{
//			printf("\n 2 => %d %d", arr[ti],arr[j]);
			ar[l] = arr[j];
//			printf("\n 2.a => %d",ar[l]);
			l++;j++;
		}
//	system("pause");	
	}
	while(ti<=m)
	{
		ar[l] = arr[ti];
		l++;ti++;
	}
	while(j<=n)
	{
		ar[l] = arr[j];
			l++;j++;
	}
//	printf("\nConsider only this Topp\n");
//	for(ti=0;ti<(n-i+1);ti++)
//	{
//		printf("%d ",ar[ti]);
//	}
//	printf("\nConsider only this bott\n");
	int tk = 0;
	for(ti=i;tk<(n-i+1);ti++,tk++)
	{
		arr[ti] = ar[tk];
	}
//	for(i=0;i<10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
}
void mergeDivide(int arr[], int F, int L)
{
	if(F<L)
	{
		int mid = (F+L)/2; 
//		printf("\nIN divide F = %d || L = %d || mid = %d",F,L,mid);
//		printf("\n calling first merge");
//		system("pause");
		mergeDivide(arr,F,mid);
//		printf("\nIN divide F = %d || L = %d || mid = %d",F,L,mid);
//		printf("\n calling second merge");
//		system("pause");
		mergeDivide(arr,mid+1,L);
//		printf("\nIN divide F = %d || L = %d || mid = %d",F,L,mid);
//		printf("\n calling mergeSort");
//		system("pause");
		mergeSort(arr,F,mid,L);
	}
}
int main()
{
//	int ti,i,n= 10;
//	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
	
//	for(ti=0;ti<n;ti++)
//	{
//		
//		printf("%d ",arr[ti]);
//	}
//	printf("\n");
//	mergeDivide(arr,0,n-1);
//	printf("\n?IN the end \n");
//	for(i=0;i<n;i++)
//	{
//		printf("%d ",arr[i]);
//	} 
	int noc,i,*arr,noe,*rep,j;
	scanf("%d",&noc);
	rep = (int *)malloc(noc*sizeof(int));
	for(i = 0;i<noc;i++)
	{
		scanf("%d",&noe);
		arr = (int *)malloc(noe*sizeof(int));
//		printf("\nGOOD 1");
		for(j=0;j<noe;j++)
		{
			scanf("%d",arr+j);
		}
		mergeDivide(arr,0,noe-1);
		*(rep+i) = 0;
//		printf("\n");
//		for(j=0;j<noe;j++)
//		{
//			printf("%d ",*(arr+j));
//		}
		for(j=0;j<noe-1;j++)
		{
//			printf("\nrep = %d ",*(rep+i));
//			printf("\n %d == %d",arr[j],arr[j+1]);
//			system("pause");
			if(arr[j] == arr[j+1])
			{
				*(rep+i) = 1;
				break;
			}
		}
		free(arr);
	}
	for(i = 0;i<noc;i++)
	{
		if(*(rep+i) == 1)
			printf("\nYES");
		else
			printf("\nNO");
	}
	return 0;
}
