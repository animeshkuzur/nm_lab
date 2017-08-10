#include <stdio.h>
#define EPSILON 0.0001

float fx(float x){
	return ((x*x*x)-(4*x)-9);
}

void secant(float a,float b){
	float m=0;int q=0;
	
}

int main(){
	float a=2,b=3;
	printf("Muller Method\n", );
	printf("Solving for equation : x^3-4x-9\n");
	secant(a,b);	
	return 0;
}