#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	
	int count;
	for(int i=a;i<=b;i++){
		if((i%7==0||i%11==0)&&(i%77!=0)){
			count++;
		}
	}
	
	printf("%d",count);
	
	return 0;
}





