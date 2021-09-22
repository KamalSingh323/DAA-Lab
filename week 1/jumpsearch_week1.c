#include<stdio.h>
#include<malloc.h>
 #include<math.h>
 int JS(int ar[], int n, int e,int * cnt)
 {
 	*cnt = 0;
 	int jmp = sqrt(n);
 	int i=0,l=jmp;
 	while(l<n)
 	{
 	
 		(*cnt)++;
 		if(e<=ar[l])
 		break;
 		i = l;
 		l = l+jmp;
 	}
 	if(l>=n)
 		l=n-1;
 	for(;i<=l;i++)
 	{
 		(*cnt)++;
 	
 		if(e == ar[i])
 			return i;
 	}
 	return -1;
 }
 int main()
 {
 	int noc,i,arr[1000],noe,j,ele;
 	scanf("%d",&noc);
 	int *vals = (int *)malloc(noc*sizeof(int));
 	int *its = (int *)malloc(noc*sizeof(int));
 	for(i =0;i<noc;i++)
 	{
 		scanf("%d",&noe);
 		for(j = 0;j<noe;j++)
 			scanf("%d",&arr[j]);
 		scanf("%d",&ele);
 		*(vals+i) = -1;
 		*(vals+i) = JS(arr,noe,ele,its+i);
 	}

 	for(i =0;i<noc;i++)
 	{
 		if(i[vals] == -1)
 			printf("\nNot present, %d",*(its+i));
 		else
 			printf("\nPresent at %d, %d",vals[i] + 1,*(its+i));
 	}
 	system("pause");
 	return 0;
 }
