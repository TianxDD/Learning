#include<stdio.h>
int main(){
	struct date{
		int year;
		int month;
		int day;
	}today;
	today.year = 2022;
	today.month = 11;
	today.day = 13;
	
	printf("%d-%d-%d",today.year,today.month,today.day);
	
	return 0;
}
