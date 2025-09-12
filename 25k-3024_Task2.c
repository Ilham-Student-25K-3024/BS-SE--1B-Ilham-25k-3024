#include <stdio.h>
#include <conio.h>
int main(){
	//Task2
	int firstnumber,secondnumber;
	printf("Enter first number:");
	scanf("%d",&firstnumber);
	printf("Enter Second number:");
	scanf("%d",&secondnumber);
	if (firstnumber>secondnumber){
		printf("\n%d is greater than %d",firstnumber,secondnumber);
	}
	else{
		printf("\n%d is not greater than %d",firstnumber,secondnumber);
	}
	return 0;
}
