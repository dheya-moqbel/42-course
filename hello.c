//my first git Modification 
 #include <stdio.h>
int calculate (int a, int b);

int main(void)
{
	int age = 29;
	float weight = 72.5;
	char grade = 'A';

	int result = calculate(20, 7);  // Arguments

	printf("Age: %d\n", age );
	printf("Weight: %.2f\n", weight);
	printf("My grade is %c\n", grade);
	printf("result: %d\n", result);

	return 0;
}

int calculate (int a, int b)   // parameters
{
	return a + b ;
}
// working on feature branch
