#include <stdio.h>

int main(){
	float valueOne;
	float valueTwo;
	char operator;
	
	double result;

	int running = 1;

	printf("Please enter a calculation:\n");
	while (running){
	scanf("%f %c %f", &valueOne, &operator, &valueTwo);
	switch(operator)
	{
		case '+': result = valueOne + valueTwo;
			break;
		case '-': result = valueOne - valueTwo;
			break;
		case '*': result = valueOne * valueTwo;
			break;
		case '/': result = valueOne / valueTwo;
			break;
		default:
			printf("INVALID...\n");
			running = 0;
			break;
	}
	printf("%.9lf\n", result);
	result = 0.;
	}
	return 0;
}