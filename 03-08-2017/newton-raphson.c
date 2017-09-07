#include <stdio.h>
#define EPSILON 0.0001

float fx(float x){
	return ((x*x*x)-(4*x)-9);
}

void newton(float a,float b){
	float m=0;int q=0;
	
}

int main(){
	float a=2,b=3;
	printf("Newton-Raphson Method\n", );
	printf("Solving for equation : x^3-4x-9\n");
	newton(a,b);	
	return 0;
}