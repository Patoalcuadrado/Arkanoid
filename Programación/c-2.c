#include <stdio.h>


int main(){
        char caracter;
        printf("Introduce un carácter\n");
        scanf("%c",&caracter);
        printf("variable caracter es %c\n", caracter);

        fflush(stdin); //Limpio la entrada estandar por si introducen mas de un caracter

        int entero;
        printf("Introduce un numero entero\n");
        scanf("%d", &entero);
        printf("Variable entero es %d\n");
        //Puedo imprimirlo como caracter, ya que un nº se corresponde con uyn caracter ASCII
        printf("Ese número se correcponde con el carácter %c\n", entero);

        float nFloat;
        printf("Introcude un numero float\n");
        scanf("%f",&nFloat );
        printf("Variable nFloat es %f\n", nFloat);

        double nDouble;
        printf("Introduce un número double\n");
        scanf("%lf",&nDouble);
        printf("Variable nDouble es %lf\n, nDouble");

        return 0;

}