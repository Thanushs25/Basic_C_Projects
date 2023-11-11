#include<stdio.h>
#include<windows.h>
#include<time.h>

int main()
{
	system("color 3F");
	int pin=1234,option,enteredPin,count=0,amount=1;
	float balance = 5000;
	int continueTransaction = 1;
	
	time_t now;
	time(&now);
	printf("\n");
	printf("\t\t\t\t\t       %s",ctime(&now));
	printf("\n\t\t\t=================== Welcome To Indian ATM ===================");
	
	while(pin != enteredPin){
		printf("\nPlease enter your pin : ");
		scanf("%d",&enteredPin);
		if(enteredPin != pin){
			Beep(610,500);
			printf("Invalid Pin!!!");
		}
		count++;
		if(count == 3 && pin != enteredPin){
			exit(0);
		}
	}
				
	while(continueTransaction != 0){
		printf("\n\t\t\t===================== Available Transcations =====================");
		printf("\n\n\t\t1.Withdrawal");
		printf("\n\t\t2.Deposit");
		printf("\n\t\t3.Check Balance");
	    printf("\n\n\tPlease select the option : ");
	    scanf("%d",&option);
	    switch(option){
	    	case 1:
	    		while(amount % 500 != 0){
	    			printf("\n\t\tEnter the amount : ");
	    			scanf("%d",&amount);
	    			if(amount % 500 != 0)
	    			printf("\n\t The amount should be the multiple of 500");
				}
				if(balance < amount){
					printf("\n\t Sorry insufficient Balance");
					amount = 1;
					break;
				}
				else{
					balance -= amount;
					printf("\n\t\tYou have withdrawn Rs.%d. Your new balance is %.2f",amount,balance);
					printf("\n\t\t\t================= Thank you for banking with Indian Bank =================");
					amount = 1;
					break;
				}
			case 2:
			    printf("\n\t\t Please enter the amount : ");
				scanf("%d",&amount);
				balance += amount;
				printf("\n\t\tYou have deposited Rs.%d. Your new balance is %.2f",amount,balance);
				printf("\n\t\t\t================= Thank you for banking with Indian Bank =================");
				amount = 1;
				break;
				
			case 3:
			    printf("\n\t\tYour balance is %.2f",balance);
				break;	
				
			default:
				Beep(610,500);
			    printf("\n\t\tInvalid Option!!!");
				break;
	   } 
	
	   printf("\n\t\tDo you wish to perform another transction? Press 1[Yes], 0[No]");
	   scanf("%d",&continueTransaction);
	 
    }
}
