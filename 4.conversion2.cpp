/*
 Now in this code we are going to do exactly the previous problem but in a difference manner,first 
we will do converstion for celsius to fahrenheit,then we will do it with the for loop,and do all the 
calculation in the printf argument(once we have made the argument type as %f in the code then we are 
allowed to do any float expressions.And finally,let me tell you about the symbolic constants which were
introduced in the previous example.It is way to represent meaning to the reads for understanding,instead 
of using 0 and 300 we can set ias lowerlimit and upperlimit which will make some sense but it is not like
declaring a variable.Let's do it....
*/
#include<stdio.h>
#define lowerlimit 0
#define upperlimit 300
#define step 20
main()
{
	int celsius;
	float fahrenheit;
	for(celsius=lowerlimit;celsius<=upperlimit;celsius+=step)
	{
	   printf("\n The fahrenheit value for the given celsius %3d is %6.1f",celsius,(9.0/5.0)*(celsius+32));
	
	}
}
