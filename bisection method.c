#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)-4*x-9)
#define E 0.0001
int main(){
	float x0,x1,x,error;
	loop:
	printf("Enter the value of x0 : ");
	scanf("%f",&x0);
	printf("Enter the value of x1 : ");
	scanf("%f",&x1);
	if((f(x0)*f(x1))>0){
		printf("Entered value doesnot contain roots\n");
		goto loop;
	}
	else{
		loop2:
			x=(x0+x1)/2;
			error=fabs(x0-x1);
	}
	if((f(x0)*f(x))<0){
		x1=x;
	}
	else{
		x0=x;
	}
	if(error>E){
		goto loop2;
	}
	else{
		printf("Requird root is : %f",x);
	}
	
	return 0;
}
