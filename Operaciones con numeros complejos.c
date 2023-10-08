#include<stdio.h>

typedef struct{
    float r,i; //parte real e imaginaria
}complejo;

void imprimirComplejo(complejo c){
    printf("%.2f + %.2fi\n",c.r,c.i);
}

complejo sumaComp(complejo c1, complejo c2){
    complejo s;
    s.r = c1.r+c2.r;
    s.i = c1.i+c2.i;
    return s;
}

complejo restaComp(complejo c1, complejo c2){
    complejo res;
    res.r = c1.r-c2.r;
    res.i = c1.i-c2.i;
    return res;
}

complejo multiplicacionComp(complejo c1, complejo c2){
    //(a+bi)*(c+di) = (a*c-b*d) + (a*d+b*c)i
    complejo m;
    m.r = c1.r*c2.r - c1.i*c2.i;
    m.i = c1.r*c2.i + c2.r*c1.i;
    return m;
}

int main(){
    complejo c1 = {4,3}, c2 = {4,-3};
    printf("El primer nro complejo es: "); imprimirComplejo(c1);
    printf("El segundo nro complejo es: "); imprimirComplejo(c2);
    printf("\nEl resultado de la suma es: "); imprimirComplejo(sumaComp(c1,c2));
    printf("\nEl resultado de la resta es: "); imprimirComplejo(restaComp(c1,c2));
    printf("\nEl resultado de la multiplicacion es: "); imprimirComplejo(multiplicacionComp(c1,c2));
    return 0;
}

