#include<stdio.h>
void fact(int n)
{
int i,p = 1;
for(i = 1;i<= n; i++)
p = p*i;
printf("factroil = %d\n",p);	
}
void fibb(int n)
{
	int i, t1=0,t2= 1,nt;
	printf("fabonacci series :\n");
	for(i =0;i<=n;i++)
	{
		printf("%d\n",t1);
		nt = t1+t2;
		t1 = t2;
		t2 = nt;
    }
}
int main()
{
	int n,i;
	printf("Enter a number :");
	scanf("%d",&n);
	fact(n);
	fibb(n);
	
	return 0;
}
