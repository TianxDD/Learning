#include<stdio.h>
int main()
{
	int k,i;
	scanf("%d",&k);
	int a[k];
	int one=0;
	int five=0;
	int ten = 0; 
	for(i = 0;i<k;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0;i<k;i++){
		if(a[i]== 1)one++;
		else if(a[i] == 5)five++;
		else if(a[i] == 10)ten++;
	}
	printf("%d\n%d\n%d",one,five,ten);
	
	return 0;
}
