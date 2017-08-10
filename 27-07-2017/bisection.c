#include <stdio.h>
#define EPSILON 0.0001

float fx (float x) {
	return ((x*x*x)-(4*x)-9);
}

void bisection (float a, float b) {
	float m=0;int q=0;
	if(fx(a)*fx(b)>=0){
		printf("Wrong Interval\n");
	}
	while ((b-a) >= EPSILON ) {
		q+=1;
		m = (a+b)/2;
		if(fx(m) == 0){
			break;
		}
		else if(fx(m)*fx(a)<0){
			b=m;
		}
		else{
			a=m;
		}
	}
	printf("The value of root : %f\n",m);
	printf("The solution : %f\n",fx(m));
	printf("Number of Iterations : %d\n",q);
}

int main () {
	float a=2,b=3;
	printf("Bisection Method\n");
	printf("Solving for equation : x^3-4x-9\n");
	bisection(a,b);	
	return 0;
}
