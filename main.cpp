#include<stdio.h>
#include<conio.h>

int main(){

	int a; //you can change with unsigned int
	a=10;
	printf("value of a: %d \n",a);
	printf("sizeof a is: %d \n",sizeof(a));

	char c; //you can change with unsigned char
	c='A';
	printf("value of c: %c \n",c);
	printf("sizeof c is: %d \n",sizeof(c));

	float b;
	b=10.458;
	printf("value of b: %f \n",b);
	printf("sizeof b is: %d \n",sizeof(b));

	long float l;
	l=22.458;
	printf("value of l: %lf \n",l);
	printf("sizeof l is: %d \n",sizeof(l));

	double d;
	d=12.000256;
	printf("value of d: %e \n",d);
	printf("sizeof d is: %d \n",sizeof(d));

	long double ld;
	ld=15.00000;
	printf("value of ld: %ld \n",ld);
	printf("sizeof ld is: %d \n",sizeof(ld));

	getch();
	return 0;
}
