#include<stdio.h>
void main(){
	int r,sp,p;
	for(r = 1; r <=5; r++){
		for(p = 1; p <= r; p++){
			printf("%d",p);
		}
		printf("\n");
	}
}
