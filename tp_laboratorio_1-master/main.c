/*******************************************************************
*Programa:TP_LABORATORIO_1
*
*Objetivo: Ingresar dos valores, realizar las operaciones y mostrarlas
nombre[Melina Parodi]
edad 27
*
*
********************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"



void printMenu(int x, int y);
void readNumber(int* number);
void printResults(int resultAddition, int resultSubstraction, float resultDivision, int resultMultiplication, int resultFactorialA, int resultFactorialB, int flagDivisionZero );


int main(void)
{
    int x=0; // Se declara la variable x
    int y=0; // Se declara la variable y
    int resultAddition=0; // Guarda el resultado de la suma
    int resultSubstraction=0; // Guarda el resultado de la resta
    float resultDivision=0; // guarda el resultado de la división
    int resultMultiplication=0; // guarda el resultado de la multipliación
    int resultFactorialA=0; // guarda el resultado de factorial A
    int resultFactorialB=0;// guarda el resultado de factorial B
    int flagEnd=0; // guarda para 0 = seguir, 1=salir
    int flagDivisionZero=1;// va a guardar un 0 siempre que se pueda realizar la división, es decir, que variable "y" sea distinta a 0. Si no en banderaDivisionCero tiene que haber un 1.
    do
    {

        int option; //Variable que representa la opción que eligió el usuario


        printMenu(x, y);


        printf("Ingrese la opcion que desea: ");
        scanf("%d",&option);


        switch(option)
        {
        case 1:
            readNumber(&x);
            break;

        case 2:
            readNumber(&y);
            break;

        case 3:
            printf("\ta. Calcular la suma (A+B)\n");
            printf("\tb. Calcular la resta (A-B)\n");
            printf("\tc. Calcular la division (A/B)\n");
            printf("\td. Calcular la multiplicacion (A*B)\n");
            printf("\td. Calcular el factorial(A!)\n");
            resultAddition = add(x,y);
            resultSubstraction = substract(x,y);
            if(y==0)
            {
                flagDivisionZero = 1;
            }
            else
            {
                flagDivisionZero = 0;
                resultDivision = divide(x,y);
            }
            resultMultiplication = multiply (x,y);
            resultFactorialA = factorial(x);
            resultFactorialB = factorial (y);
            break;

        case 4:
            printResults( resultAddition, resultSubstraction, resultDivision, resultMultiplication, resultFactorialA, resultFactorialB, flagDivisionZero );
            break;

        case 5:
            flagEnd = 1;
            break;
        default:
            printf("Opcion incorrecta\n\n");
        }
    }
    while(flagEnd==0);

    return 0;
}
/** \brief La funcion imprimir menu, imprime las 5 opciones a elegir y muestra los dos numeros ingresados por el usario
 * \param x es el valor que recibe la funcion (primer operando que ingresa el usuario)
 * \param y es el valor que recibe la funcion  (segundo operando que ingresa el usuario)
 * \return no retorna nada
 */


void printMenu(int x, int y)
{
    printf("1. Ingresar 1er operando (A=%d)\n", x);
    printf("2. Ingresar 2do operando (B=%d)\n", y);
    printf("3. Calcular todas las operaciones\n");
    printf("4. Informar resultados\n");
    printf("5. Salir\n\n");
}

/** \brief La función readNumber muestra al usuario "ingrese un numero"
 * \param recibe por parámetro la dirección donde se guarda un número entero
 * \return no retorna nada
 */

void readNumber(int* pnumber)
{

    printf("Ingrese el valor del operando: ");

    scanf("%d",pnumber);
}

/** \brief imprime los resultados de las operaciones
 * \param recibe por parametro los valores de las operaciones calculadas
 * \return no retorna nada
 */

void printResults(int resultAddition, int resultSubstraction, float resultDivision, int resultMultiplication, int resultFactorialA, int resultFactorialB, int flagDivisionZero )// paso por valor los resultados de las operaciones
{
    printf("a. El resultado de A+B es: %d\n", resultAddition);
    printf("b. El resultado de A-B es: %d\n", resultSubstraction);
    if(flagDivisionZero==0)
    {
        printf("c. El resultado de A/B es: %.2f\n", resultDivision);
    }
    else
    {
        printf("c. No es posible dividir por cero.\n");
    }
    printf("d. El resultado de A*B es: %d\n", resultMultiplication);
    printf("e. El factorial de A es: %d y El factorial de B es: %d\n", resultFactorialA, resultFactorialB);
}
