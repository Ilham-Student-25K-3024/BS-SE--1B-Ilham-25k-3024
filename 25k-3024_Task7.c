#include<stdio.h>
int main(){
	int user_input,input_crust,input_time;
	char input_topping,std_id;
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
			printf("Between 11 AM and 2 PM, there is a 10%% discount.What's the current time?(0-23)");
			scanf("%d",&input_time);
			
			
			if(input_time>=11 && input_time<=14){
			if(input_topping=='y'){
			if (input_crust==1){
				printf("your total is $6.55 with 10%% discount");
			}else if(input_crust==2){
				printf("Your total is $7.45 with additional $1 for thin crust and $1.50 for cheese and 10%% discount");
			}else if(input_crust==3){
				printf("Your total is $8.35 with additional $2 for stuffed crust and $1.50 for cheese and 10%% discount");
			}else{
				printf("\nInvalid input");
			}
		}
	
			else{
				if (input_crust==1){
				printf("your total is $7.20 with 10%% discount");
			}else if(input_crust==2){
				printf("Your total is $8.10 with additional $1 for thin crust with 10%% discount");
			}else if(input_crust==3){
				printf("Your total is $9.00 with additional $2 for stuffed crust with 10%% discount");
			}else{
				printf("\nInvalid input");
			}
			}}else {
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
			printf("\nDo u have student ID?(y/n)");
			scanf("%c",&std_id);
			if(std_id=='y'){
				printf("\n$2 discount added to total");
			}else{
				printf("you get no discount");
			}
			break;
		case 2:
			printf("\nYour total is $15 for two pizzas");
			printf("\nWhat crust would you like?");
			printf("\n1. Regular($0) 2. Thin Crust($1) 3.Stuffed Crust($2) ");
			scanf("%d",&input_crust);
			printf("\nWould you like extra cheese($1.50)? Please answer with y for yes and n for no.");
			scanf(" %c",&input_topping);
			printf("Between 11 AM and 2 PM, there is a 10%% discount.What's the current time?(0-23)");
			scanf("%d",&input_time);
			printf("\nDo u have student ID?(y/n)");
			scanf("%c",&std_id);
			if(std_id=='y'){
			if(input_time>=11 && input_time<=14){
			if(input_topping=='y'){
			if (input_crust==1){
				printf("your total is $14.85 and $1.50 for extra cheese with 10%% discount");
			}else if(input_crust==2){
				printf("Your total is $15.75 with additional $1 for thin crust and extra cheese and 10%% discount");
			}else if(input_crust==3){
				printf("Your total is $16.65 with additional $2 for stuffed crust and extra cheese and 10%% discount");
			}else{
				printf("\nInvalid input");
			}
		}else {
			if (input_crust==1){
				printf("your total is $13.50 with 10%% discount");
			}else if(input_crust==2){
				printf("Your total is $14.40 with additional $1 for thin crust with 10%% discount");
			}else if(input_crust==3){
				printf("Your total is $15.30 with additional $2 for stuffed crust with 10%% discount");
			}else{
				printf("\nInvalid input");
			}
		}}else {
			if (input_crust==1){
				printf("your total is $15");
			}else if(input_crust==2){
				printf("Your total is $16 with additional $1 for thin crust");
			}else if(input_crust==3){
				printf("Your total is $17 with additional $2 for stuffed crust");
			}else{
				printf("\nInvalid input");
			}
		}}else{
			printf("no discount");
		}
			break;
		case 3:
			printf("\nYour total is $21 for three pizzas");
			printf("\nWhat crust would you like?");
			printf("\n1. Regular($0) 2. Thin Crust($1) 3.Stuffed Crust($2) ");
			scanf("%d",&input_crust);
			printf("\nWould you like extra cheese($1.50)? Please answer with y for yes and n for no.");
			scanf(" %c",&input_topping);
			printf("Between 11 AM and 2 PM, there is a 10%% discount.What's the current time?(0-23)");
			scanf("%d",&input_time);
			printf("\nDo u have student ID?(y/n)");
			scanf("%c",&std_id);
			if(std_id=='y'){
			if(input_time>=11 && input_time<=14){
			if(input_topping=='y'){
				if (input_crust==1){
					printf("your total is $20.25 with extra cheese and 10%% discount");
				}else if(input_crust==2){
					printf("Your total is $21.15 with additional $1 for thin crust and extra cheese and 10%% discount");
				}else if(input_crust==3){
					printf("Your total is $22.05 with additional $2 for stuffed crust and extra cheese and 10%% discount");
				}else{
					printf("\nInvalid input");
				}
			}else {
				if (input_crust==1){
					printf("your total is $18.90 with 10%% discount");
				}else if(input_crust==2){
					printf("Your total is $19.80 with additional $1 for thin crust with 10%% discount");
				}else if(input_crust==3){
					printf("Your total is $20.70 with additional $2 for stuffed crust with 10%% discount");
				}else{
					printf("\nInvalid input");
				}
			}}else {
				if (input_crust==1){
					printf("your total is $21");
				}else if(input_crust==2){
					printf("Your total is $22 with additional $1 for thin crust");
				}else if(input_crust==3){
					printf("Your total is $23 with additional $2 for stuffed crust");
				}else{
					printf("\nInvalid input");
				}
			}}else{
				printf("no discount");
			}
			break;
		default:
			printf("\nInvalid Size");
	}
	return 0;
}
