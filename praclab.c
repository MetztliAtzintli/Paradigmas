#include <stdio.h>

void division(int,int);
void multiplicacion(int,int);
int factorial(int);

int main(){
    int num1 = 10;
    int num2 = 5;

    printf("Division");
    division(num1,num2);
    printf("Multipliacion");
    multiplicacion(num1,num2);
    printf("El factorial de %d es: %d\n",num2,factorial(num2));

    return 0;
}

void division(int x, int y){
    int cociente = 0;
    int resto = x;
    
    if (x > 0 && y > 0 )
    {   
        while (resto >= y)
        {
            resto -= y;
            cociente++;
        }
        printf(" \n %d div %d = %d (Resto = %d)\n",x,y,cociente,resto);
    }else{
        printf(" \n Ambos numeros deben ser mayor a cero\n");
    }
}

void multiplicacion(int x, int y){
    int acomulador, contador;

    if (x >= 0 && y >=0)
    {
        acomulador = 0;
        
        if (y != 0)
        {
            contador = 1;
            
            while (contador <= x)
            {
                acomulador += y;
                contador++;
            }
            
        }
        printf(" \n %d * %d = %d \n",x,y,acomulador);
    }else{
        printf(" \n Ambos numeros deben ser mayores o iguales que cero \n");
    }
}

int factorial(int x){
    if (x < 1)
    {
        return 1;
    }
    return x * factorial(x-1);
}
