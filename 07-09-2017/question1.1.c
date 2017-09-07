#include <stdio.h>

int main(){
	float a[10][10], d[10], x[10], y[10];
    int n=5, m=50, i=0, j=0;

    printf("The size of the matrix: %d\n",n);
    printf("a[]:\n");

    a[0][0] = 1;	a[0][1] = -0.5;	a[0][2] = 0;	a[0][3] = 0;	a[0][4] = 0;
    a[1][0] = -0.5;	a[1][1] = 1;	a[1][2] = -0.5;	a[1][3] = 0;	a[1][4] = 0;
    a[2][0] = 0;	a[2][1] = -0.5;	a[2][2] = 1;	a[2][3] = -0.5;	a[2][4] = 0;
    a[3][0] = 0;	a[3][1] = 0;	a[3][2] = -0.5;	a[3][3] = 1;	a[3][4] = -0.5;
    a[4][0] = 0;	a[4][1] = 0;	a[4][2] = 0;	a[4][3] = -0.5;	a[4][4] = 1;

    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		printf("%f\t",a[i][j]);
    	}
    	printf("\n");
    }

    printf("\nValues to the right side of equation d[]\n");
    d[0] = 0;
    d[1] = 0;
    d[2] = 0;
    d[3] = 0;
    d[4] = -0.5;
    for(i=0;i<n;i++){
    	printf("%f\n",i,d[i]);
    }

    printf("\nInitial values of x[]\n");
    for(i=0;i<n;i++){
    	printf("%f\n",0);
    	x[i]=0;
    }

    printf("\nNumber of Iterations: 50\n\n");

    while (m > 0){
    	printf("Iteration %d\n",50-m);
        for (i = 0; i < n; i++){
            y[i] = (d[i] / a[i][i]);
            for (j = 0; j < n; j++){
	            if (j == i)
	                continue;
	            y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }
            printf("x%d= %f\t",i,y[i]);
        }
        printf("\n\n");
        m--;
    }
	return 0;
}