#include<stdio.h>
int main()
{
    int i,j,m=2,n=2;
	int a[2][2]={5,6,7,8};
	int transpose[2][2]={0,0,0,0};
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			transpose[j][i]=a[i][j];
		}
    }
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}