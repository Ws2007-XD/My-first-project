#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	
	int first=1;
	while(num>0){
		int digit=num%10;
		
		if(digit>0){
			if(!first){
				printf(" ");
			}
			printf("%d",digit);
			first=0;
		}
		num/=10;
	}
	
	return 0;
}