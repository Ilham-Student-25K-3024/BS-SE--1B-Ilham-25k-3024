#include <stdio.h>
#include <conio.h>
int main(){
	//Task3
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	if (number >0){
		printf("\nPositive");
	}
	else if(number <0){
		printf("\nNegative");
	}
	else{
		printf("\nNumber is zero");
	}
return 0;



}
