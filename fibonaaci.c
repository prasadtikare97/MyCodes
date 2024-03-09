#include <stdio.h>
int fibonaaci(int n){
	if(n==0 ){
		return 0;
	}else if(n==1){
		return 1;
	}else{
		return fibonaaci(n-1) + fibonaaci(n-2);
	}
}
int main()
{
// declare variables
int num=-8;
int n1=0,n2=1,n,sum,i,j;
scanf("%d",&n);
printf("Fibonaaci series :");
printf("%d ",n2);

for(j=0;j<=n-2;j++){
	sum=n1+n2;
	printf("%d ",sum);
	n1=n2;
	n2=sum;
}

printf("\nFibonaaci series using function :");
for(i=1;i<=n;i++){
printf("%d ",fibonaaci(i));
}

num=--num;
printf("\n%d\n",num);
num = num-- - --num;
printf("%d\n",num);
num=--num;
printf("%d\n",num);
return 0;
}
