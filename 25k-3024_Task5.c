#include<stdio.h>
int main(){
	int user_input,input_crust;
	char input_topping;
	printf("1 pizza costs $8\n");
	printf("2 pizzas cost $15\n");
	printf("3 pizzas cost $21\n");
	printf("How many pizzas do you want?");
	scanf("%d",&user_input);
	switch(user_input){
		case 1:
			printf("\nYour total is $8 for one pizza");
			printf("\nWhat crust would you like?");
			printf("\n1. Regular($0) 2. Thin Crust($1) 3.Stuffed Crust($2) ");
			scanf("%d",&input_crust);
			printf("\nWould you like extra cheese($1.50)? Please answer with y for yes and n for no.");
			scanf(" %c",&input_topping);
			if(input_topping=='y'){
			if (input_crust==1){
				printf("your total is $9.50");
			}else if(input_crust==2){
				printf("Your total is $10.50 with additional $1 for thin crust and $1.50 for cheese");
			}else if(input_crust==3){
				printf("Your total is $11.50 with additional $2 for stuffed crust and $1.50 for cheese");
			}else{
				printf("\nInvalid input");
			}
		}
			else{
				if (input_crust==1){
				printf("your total is $8");
			}else if(input_crust==2){
				printf("Your total is $9 with additional $1 for thin crust");
			}else if(input_crust==3){
				printf("Your total is $10 with additional $2 for stuffed crust");
			}else{
				printf("\nInvalid input");
			}
			}
			break;
		case 2:
			printf("\nYour total is $15 for two pizzas");
			printf("\nWhat crust would you like?");
			printf("\n1. Regular($0) 2. Thin Crust($1) 3.Stuffed Crust($2) ");
			scanf("%d",&input_crust);
			printf("\nWould you like extra cheese($1.50)? Please answer with y for yes and n for no.");
			scanf(" %c",&input_topping);
			if(input_topping=='y'){
			if (input_crust==1){
				printf("your total is $16.50 and $1.50 for extra cheese");
			}else if(input_crust==2){
				printf("Your total is $17.50 with additional $1 for thin crust and extra cheese");
			}else if(input_crust==3){
				printf("Your total is $18.50 with additional $2 for stuffed crust and extra cheese");
			}else{
				printf("\nInvalid input");
			}
		}else {
			if (input_crust==1){
				printf("your total is $15");
			}else if(input_crust==2){
				printf("Your total is $16 with additional $1 for thin crust");
			}else if(input_crust==3){
				printf("Your total is $17 with additional $2 for stuffed crust");
			}else{
				printf("\nInvalid input");
			}
		}
			break;
		case 3:
			printf("\nYour total is $21 for three pizzas");
			printf("\nWhat crust would you like?");
			printf("\n1. Regular($0) 2. Thin Crust($1) 3.Stuffed Crust($2) ");
			scanf("%d",&input_crust);
			printf("\nWould you like extra cheese($1.50)? Please answer with y for yes and n for no.");
			scanf(" %c",&input_topping);
			if(input_topping=='y'){
				if (input_crust==1){
					printf("your total is $22.50 with extra cheese");
				}else if(input_crust==2){
					printf("Your total is $23.50 with additional $1 for thin crust and extra cheese");
				}else if(input_crust==3){
					printf("Your total is $24.50 with additional $2 for stuffed crust and extra cheese");
				}else{
					printf("\nInvalid input");
				}
			}else {
				if (input_crust==1){
					printf("your total is $21");
				}else if(input_crust==2){
					printf("Your total is $22 with additional $1 for thin crust");
				}else if(input_crust==3){
					printf("Your total is $23 with additional $2 for stuffed crust");
				}else{
					printf("\nInvalid input");
				}
			}
			break;
		default:
			printf("\nInvalid Size");
	}
	return 0;
}
