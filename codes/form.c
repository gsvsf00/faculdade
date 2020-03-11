#include <stdio.h>
#include <stdlib.h>
#include "form.h"

float somar(float a, float b){
return a+b;
}

float menos(float a, float b){
return a-b;
}
float multi(float a, float b){
return a*b;
}

float divid(float a, float b){
	if(b != 0){
	return a/b;
	}
else printf("divisor = 0");
}
