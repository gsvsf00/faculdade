#include <stdio.h>
#include <stdlib.h>
#include "form.h"

int somar(int a, int b){
return a+b;
}

int menos(int a, int b){
return a-b;
}
int multi(int a, int b){
return a*b;
}

int divid(int a, int b){
	if(b != 0){
	return a/b;
	}
else printf("divisor = 0");
}
