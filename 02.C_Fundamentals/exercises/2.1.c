// includes all the solutions of chapter 2 exercise.



/**********************************
 * SECTION 2.1, 1


#include <stdio.h>

int main(void){
        printf("Hello, world\n");
        return 0;
}

************************************/







/*********************************************************
 * SECTION 2.2, 2

#include <stdio.h>

int main(void)
{
    printf("Parkinson's Law:\nWork expands so as to ");
    printf("fill the time\n");
    printf("available for its completion.\n");

    // DIRECTIVES = "#include <stdio.h>
	// STATEMENTS = the printf and return lines
	
	// The program produces the following lines: 
	//     Parkinson's Law:
	//	   Work expands so as to fill the time
    //     available for its completion.

	return 0;
}
***********************************************************/







/*************************************************************
* SECTION 2.4, 3
	
	// JUST INITIALIZERS INSTEAD OF ASSIGNMENTS 
	int height = 8, length = 10, width = 12;
	
	
	// WRITING THE EXPRESSION IN PRINT INSTEAD OF THE WEIGHT VARIABLE
	printf("Weight of box: %d", (volume+165) / 166);

**************************************************************/





/*********************************************************************************

SECTION 2.4, 4

#include <stdio.h>


int main(void){
	int x,y,z;
	float a,b,c;	
	
	printf("Integer Values: %d, %d, %d \n", x, y, z);
	printf("Float Values: %f, %f, %f", a, b, c);

	return 0;

	// TEST RESULTS:
	// INT: 
	// 2859008, 0, 13781272
	// 3051520, 0, 12667160
	// 2510848, 0, 9455896

	// FLOAT:
	// 0.000000, 0.000000, 0.000000      
	// 0.000000, 0.000000, 0.000000
	// 0.000000, 0.000000, 0.000000

	// SAME VALUES REPEATING FOR UNINITIALIZED FLOATS
	// ONE INTEGER IS REPEATING 0 AND THE REST 2 GENERATE RANDOM LARGE NUMBERS
}
	
**********************************************************************************/






/******************************

SECTION 2.7, 5

100_bottles
because it starts with a number

------------------------------------

SECTION 2.7, 6

Using multiple underscores is not ideal as it is hard to read how many hard underscores are present.

------------------------------------

SECTION 2.7, 7

a and e
******************************/



/*******************************************
SECTION 2.8, 8, 9, 10

	answer = ( 3 * q - p * p ) / 3 ;

	answer = Identifier
	'=' = Operator
	( = Special Symbol
	3 = Constant
	* = Operator
	q = Identifier
	- = Operator
	p = Identifier
	* = Operator
	p = Identifier
	) = Special Symbol
	/ = Operator
	3 = Constant
	; = Special Symbol

	// 14 TOKENS

The space of identifier is essential, in this case it is 'answer'
***************************************************************/
