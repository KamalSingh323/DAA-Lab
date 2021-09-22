#include<stdio.h>
#include<malloc.h>
int main()
{
	int noc,i,noe,*arr,j,k,l,t,a,b,*sj,*sk,*sl;
	scanf("%d",&noc);
	sj = (int *)malloc(noc*sizeof(int));
	sk = (int *)malloc(noc*sizeof(int));
	sl = (int *)malloc(noc*sizeof(int));
	for(i=0;i<noc;i++)
	{
		scanf("%d",&noe);
		arr = (int *)malloc(noe*sizeof(int));
		for(j=0;j<noe;j++)
		{
			scanf("%d",&arr[j]);
		}
		t = 0;
		for(j=0;j<noe-2;j++)
		{
			a = arr[j];
			for(k=j+1;k<noe-1;k++)
			{
				b = arr[k];
				for(l=k+1;l<noe;l++)
				{
				//	printf("\n arr[j(%d)](%d) + arr[k(%d)](%d) = arr[l(%d)](%d)", j,a,k,b,l,arr[l]);
				//	fflush(stdin);
				//	getchar();
					if(arr[l] == a+b)
					{
						t = 1;
						break;
					}
				}
				if(t == 1)
					break;
			}
			if(t == 1)
				break;
		}
		if(t == 0)
			sj[i] = sk[i] = sl[i] = -1;
		else
		{
		//	printf("j = %d, k = %d, l = %d", j,k,l);
		//	fflush(stdin);
		//	getchar();
			sj[i] = j;
			sk[i] = k;
			sl[i] = l;
		}
	}
	for(i=0;i<noc;i++)
	{
		if(sj[i] == -1)
			printf("\nNo sequence found");
		else
			printf("\n%d, %d, %d",sj[i]+1,sk[i]+1,sl[i]+1);
	}
	return 0;
}
//1 5 84 209 341
//24 28 48 71 86 89 92 120 194 201
//64 69 82 95 99 107 113 141 171 350 369 400 511 590 666
