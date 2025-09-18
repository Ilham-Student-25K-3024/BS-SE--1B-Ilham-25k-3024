#include<stdio.h>
int main(){
	int user_input;
	printf("\nHow many pizzas do you want?:");
	scanf("%d",&user_input);
	if (user_input>1){
		printf("\nCheck our multi-pizza deals!");
	}
	else{
		printf("Your total is $8\n");
	}
return 0;
	
	
}
