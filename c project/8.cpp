#include<stdio.h>
#include<math.h>
int main(){
	int R,M,Y,i;
	double sum;
	scanf("%d %d %d",&R,&M,&Y);
	sum = M;
	for(i=1;i<=Y;i++){
		sum = (R*0.01+1) * sum;
	}
	printf("%d",(int)sum);
	return 0;
}
