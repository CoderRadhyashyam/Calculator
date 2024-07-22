#include<stdio.h>
int main()
{
	float firstnumber,secondnumber,Result;
	char n;
	printf("Enter first  number ");
	scanf("%d",&firstnumber);
	printf("enter your  choice(+,-,*,/)");
	scanf(" %c",&n);
	printf("Enter second number ");
	scanf("%d",&secondnumber);
	switch(n){
		
			
		case '+':{
			Result = firstnumber + secondnumber;
			printf("%f",Result);
			break;
		}
	   
	  
		case '-': {
			Result = firstnumber - secondnumber;
			printf("%f",Result);
			break;
		}
	
	    
		case '*':{
			Result = firstnumber * secondnumber;
			printf("%f",Result);
			break;
		} 
		
	    	    
		case '/':{
			if(secondnumber==0){
				printf("second number should not be zero for division......");
			}
			else{
			  	Result = firstnumber / secondnumber;
			printf("%f",Result);
			  }	
		break;
		}
		 
		default:{
			printf("Please enter a valid operator");
			break;
		}
		  
    }
	
	return 0;
}
