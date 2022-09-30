#include <stdio.h>

int suma(int *x, int *y, int *res);
int resta(int *x, int *y, int *res);
int mult(int *x, int *y, int *res);
int div(int *x, int *y, int *res);

int main(){
	int x, y, res;
	printf("Ingrese los valores de\n");
	printf("X: ");
	scanf("%d",&x);
	printf("Y: ");
	scanf("%d",&y);
	printf("\n");
	suma(&x, &y, &res);
	printf("SUMA: X: %d, Y:%d, Resultado: %d \n\n",x,y,res);
	resta(&x, &y, &res);
	printf("RESTA: X: %d, Y:%d, Resultado: %d \n\n",x,y,res);
	mult(&x, &y, &res);
	printf("MULTIPLICACION: X: %d, Y:%d, Resultado: %d \n\n",x,y,res);
	div(&x, &y, &res);
	printf("DIVISION: X: %d, Y:%d, Resultado: %d \n\n",x,y,res);
}

int suma(int *x, int *y, int *res){
	(*x)=(*x)+2; (*y)=(*y)-4;
	(*res)=(2*(*x))-(3*(*y));
}


int resta(int *x, int *y, int *res){
	(*x)=(*x)+1; (*y)=((*y)*(-1));
	(*res)=(*x)-(*y);
}


int mult(int *x, int *y, int *res){
	(*x)=(*x)+(*x); (*y)=(*y)+(2*(*y));
	(*res)=(*x)*(*y);
}

int div(int *x, int *y, int *res){
	(*x)=(*x)+2;
	if ((*y)==0){
		(*y)=(*y)+1;
	}
	else {
		(*y)=(*y)*2;
	}
	(*res)=(*x)/(*y);
}