#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	
	int sum=0;
	for(int i=1;i<n;i++){
		if(i%m==0){
			sum+=i;
			printf("%d ",i);
		}
	}
	
	printf("\n%d",sum);
	
	
	
	
	return 0;
}