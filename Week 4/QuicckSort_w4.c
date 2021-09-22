#include<stdio.h>
#include<malloc.h>
int Qcon(int arr[],int F,int L)
{
	int i,temp;
	int p = arr[L];
	int j = F-1;
	for(i = F;i<L;i++)
	{
		printf("\nif(%d<=%d):%s",arr[i],p,arr[i]<=p?"swapping":"loop");
		if(arr[i]<=p)
		{
			printf("\nSwapping %d<-->%d\n",arr[i],arr[j+1]);
			system("pause");
			printf("\n");
			j++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	printf("\n%d\n",j);
//	if(j == -1)
//	{
//		j = L-1;
//	}
//	else
//	{
		printf("\nSwapping after loop %d<-->%d\n",arr[L],arr[j+1]);
		system("pause");
		printf("\n");
		temp = arr[L];
		arr[L] = arr[j+1];
		arr[j+1] = temp;
//	}
	return j+1;
}
void Qdivide(int arr[], int F, int L)
{
	int i;
	printf("\nCalled Qdivide(arr,%d,%d)\n",F,L);
	for(i=F;i<=L;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	system("pause");
	printf("\nGOOD\n");
//	printf("\nif(%d<%d)(%s) : %s\n",F,L,F<L,F<L?"Continue":"Return");
	printf("\nif(%d<%d) :? %s\n",F,L,F<L?"Continue":"Return");
	if(F<L)
	{
		printf("\ncalling Qcon(arr,%d,%d)\n",F,L);
		for(i=F;i<=L;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		system("pause");
		int ind = Qcon(arr,F,L);
		printf("\ncalling Qdivide(arr,0,9)\n");
		for(i=F;i<=L;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		system("pause");
		Qdivide(arr,F,ind-1);
		printf("\ncalling Qdivide(arr,0,9)\n");
		for(i=F;i<=L;i++)
		{
			printf("%d ",arr[i]);
		}
		printf("\n");
		system("pause");
		Qdivide(arr,ind+1,L);
	}
}
int main()
{
//	int arr[] = {10,9,8,7,6,5,4,3,2,1},i;
	int noc,**arr,*noe;
	int i,j;
	scanf("%d",&noc);
	arr = (int **)malloc(noc*sizeof(int *));
	noe = (int *)malloc(noc*sizeof(int));
	for(i=0;i<noc;i++)
	{
		scanf("%d",noe+i);
		for(j=0;j<*(noe+i);j++)
		{
			
		}
	}

	return 0;
}
