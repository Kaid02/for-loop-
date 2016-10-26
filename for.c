#include<stdio.h>
	int main(){
	int n,f=1,i=1;
	
	printf("\nEnter any number :");
	scanf("%d",&n);
	
	 for(i=1,f=1;i<=n;i++)
     {f=f*i;}
	
	
	printf("\nthe factorial of number is:%d",f);
	return 0;
  }
