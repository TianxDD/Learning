#include<stdio.h>
int main()
{
	int T,i;
	scanf("%d",&T);
	int a[T];
	for(i = 0;i<T;i++){
		scanf("%x\n",&a[i]);
	}
	for(i = 0;i<T;i++){
		printf("%d\n",a[i]);
	}
	
	return 0;
}
