#include<stdio.h>
#include<math.h>
// floor(var);This function returns the nearest integer
//which is less than or equal to the
//argument passed to this function.

//round(var); use for round up of a floating number

//ceil(var); This function returns nearest integer
//value which is greater than or equal
//to the argument passed to this function

// other math functions are sin(var); cos(var); cosh(var); 
//tanh(var); exp(var); tan(var); log(var); pow();sqrt(var);
int main(){
	
	float x=12.23;
	printf("floor(x):%f\nround(x):%f\nceil(x):%f\nsin(x)=%f\ncos(x)=%f\ntan(x)=%f\nsinh(x)=%f \n\twhere the value of x :%f",floor(x),round(x),ceil(x),sin(x),cos(x),tan(x),sinh(x),x);
	printf("\npow(x,2)=%f\nsqrt(x)=%f\n\n",pow(x,2),sqrt(x));
	return 0;
}
