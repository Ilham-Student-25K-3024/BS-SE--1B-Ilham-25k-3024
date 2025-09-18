#include<stdio.h>
int main(){
	int user_input;
	printf("1 pizza costs $8\n");
	printf("2 pizzas cost $15\n");
	printf("3 pizzas cost $21\n");
	printf("How many pizzas do you want?");
	scanf("%d",&user_input);
	switch(user_input){
		case 1:
			printf("\nYour total is $8 for one pizza");
			break;
		case 2:
			printf("\nYour total is $15 for two pizzas");
			break;
		case 3:
			printf("\nYour total is $21 for three pizzas");
			break;
		default:
			printf("\nInvalid Size");
	}
	return 0;
}
