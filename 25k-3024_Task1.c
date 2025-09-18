#include<stdio.h>
int main(){
	int size;
	printf("1. Small\n");
	printf("2. Medium\n");
	printf("3. Large\n");
	printf("Enter a number:");
	scanf("%d",&size);
	switch(size){
		case 1:
			printf("You ordered a small pizza\n");
			break;
		case 2:
			printf("You ordered a medium pizza\n");
			break;
		case 3:
			printf("You ordered a large pizza\n");
			break;
		default:
			printf("\nInvalid Size");
	}
return 0;
	
	
}
