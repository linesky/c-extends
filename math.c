#include <stdio.h>
#include <stdlib.h>

//gcc  math.c -L ./ -l maths -o maths
int add(int a,int b);
int subs(int a,int b);
int mul(int a,int b);
int adivs(int a,int b);


int main(){
	printf("add %d",add(10,10));
	printf("subs %d",subs(40,20));
	printf("mul %d",mul(10,2));
	printf("div %d",adivs(40,2));
}
