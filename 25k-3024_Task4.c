#include<stdio.h>
int main(){
	int user_input,input_crust,size;
	printf("\nWhat size pizza do you want? 1.small 2.medium 3.large");
	scanf("\n%d",&size);
	switch(size){
		case 1:
			printf("You ordered a small pizza\n");
			printf("1 small pizza costs $8, 2 small pizzas cost $15, 3 small pizzas cost $21\n");
			printf("How many pizzas do you want?");
			scanf("%d",&user_input);
				switch(user_input){
					case 1:
						printf("\nYour total is $8 for one small pizza");
						break;
					case 2:
						printf("\nYour total is $13 for two small pizzas because it comes in multi deal ");
						break;
					case 3:
						printf("\nYour total is $20 for three small pizzas as per multi deals");
						break;
					default:
						printf("\nInvalid");}
				printf("\nWhat crust would you like?");
				printf("\n1. Regular($0) 2. Thin Crust($1) 3.Stuffed Crust($2) ");
				scanf("%d",&input_crust);
				switch(input_crust){
					case 1:
						printf("your total is $8");
						break;
					case 2:
						printf("Your total is $9 with additional $1 for thin crust");
						break;
					case 3:
						printf("Your total is $10 with additional $2 for stuffed crust");
						break;
					default:
						printf("\nInvalid");}
			break;
		case 2:
			printf("You ordered a medium pizza\n");
			printf("1 medium pizza costs $10, 2 medium pizzas cost $17, 3 medium pizzas cost $23\n");
			printf("How many pizzas do you want?");
			scanf("%d",&user_input);
				switch(user_input){
					case 1:
						printf("\nYour total is $10 for one medium pizza");
						break;
					case 2:
						printf("\nYour total is $15 for two medium pizzas because it comes in multi deal ");
						break;
					case 3:
						printf("\nYour total is $21 for three medium pizzas as per multi deals");
						break;}
				printf("\nWhat crust would you like?");
				printf("\n1. Regular($0) 2. Thin Crust($1) 3.Stuffed Crust($2) ");
				scanf("%d",&input_crust);
				switch(input_crust){
					case 1:
						printf("your total is $10");
						break;
					case 2:
						printf("Your total is $16 with additional $1 for thin crust");
						break;
					case 3:
						printf("Your total is $13 with additional $2 for stuffed crust");
						break;
					default:
						printf("\nInvalid");}
			break;
		case 3:
			printf("You ordered a large pizza\n");
			printf("1 large pizza costs $12, 2 large pizzas cost $19, 3 large pizzas cost $25\n");
				printf("How many pizzas do you want?");
				scanf("%d",&user_input);
				switch(user_input){
					case 1:
						printf("\nYour total is $12 for one large pizza");
						break;
					case 2:
						printf("\nYour total is $17 for two large pizzas because it comes in multi deal ");
						break;
					case 3:
						printf("\nYour total is $23 for three large pizzas as per multi deals");
						break;}
				printf("\nWhat crust would you like?");
				printf("\n1. Regular($0) 2. Thin Crust($1) 3.Stuffed Crust($2) ");
				scanf("%d",&input_crust);
				switch(input_crust){
					case 1:
						printf("your total is $12");
						break;
					case 2:
						printf("Your total is $18 with additional $1 for thin crust");
						break;
					case 3:
						printf("Your total is $25 with additional $2 for stuffed crust");
						break;
					default:
						printf("\nInvalid");}
			break;
		default:
			printf("\nInvalid Size");
	}
return 0;
	
		
	return 0;
}
