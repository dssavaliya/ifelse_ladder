//Find min. no. from given 2 no. using ladder if else.
#include <stdio.h>

int main() {
    int num1,num2;

	printf("Enter two numbers:\n");
	scanf("%d %d",&num1,&num2);

	if(num1<num2)
	{	
		printf("%d is smaller",num1);
	}
	else if(num2<num1)
    {
		printf("%d is smaller",num2);	
    }
    else
	{
		printf("%d and %d are equal",num1,num2);
	}
	return 0;



    
}