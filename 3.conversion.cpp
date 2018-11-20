/* This code gives an intro to the variables of type float which is nothing but decimal values as 
well as fractions,and introduce the looping statement while.The use of looping statement is to 
repeat the same job again and again instead of writing again for the given inputs.Here we will 
make a simple fahrenheit to celsius convertor with the mathematical formulae and %f tells to print 
as floating point and %6f to make the width as 6 digits so it looks aligned and 6.1 means 6 digits 
floatig point with 1 decimal.while executes untill the condition fails and then it termites and execute
the next instruction in the main method.
*/
#include<stdio.h>
#define upperlimit 300
#define lowerlimit 0
#define step 20
main()
{
	float celsius,fahrenheit;
	fahrenheit=lowerlimit;
	while(fahrenheit<=upperlimit)
	{
	celsius=(5.0/9.0)* (fahrenheit-32);
	printf("\n The celsius value for the given %3.0f fahrenheit is %6.1f",fahrenheit,celsius);
	fahrenheit=fahrenheit+step;

	}
}
