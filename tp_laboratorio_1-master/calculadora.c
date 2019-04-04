/**
 * suma dos numeros que recibe por parametro
 * \param x es el primer operando de la suma
 * \param y es el segundo operando de la suma
 * \return retorna el resultado de x+y
 */

int add(int x, int y)
{
    int result;
    result = x+y;
    return result;
}

/** \brief  Resta de dos numeros que recibe por parametro
 * \param x es el primer operando de la resta
 * \param y es el segundo operando de la resta
 * \return retorna el resultado de x-y
 */
 int substract(int x, int y)
{   int result;
    result = x-y;
    return result;
}

/** \brief La funcion multiplicar, multiplica dos numeros que recibe por parametro
 * \param x es el primero operando de la multiplicación
 * \param y es el segundo operando de la multiplicacion
 * \return retorna el resultado de x*y
 */

int multiply(int x, int y)
{
    int result;
    result = x*y;
    return result;
}

/** \brief La funcion dividir, divide dos numeros que recibe por parametro(siempre que y!=0)
 * \param x es el primero operando de la division
 * \param y es el segundo operando de la multiplicacion
 * \return retorna el resultado de x/y (siempre y cuando y!=0)
 */

float divide(int x, int y)
{
    float fX=(float)x;
    float fY=(float)y;
        float result;
    result = fX/fY;
    return result;
}

/** \brief Calcula el factorial de dos numeros que recibe por parametro
 * \param x es el primer numero que recibe por parametro
 * \param y es el segundo numero que recibe por parametro
 * \return retorna el resultado de la factorización de x e y
 */

int factorial(int x)
{
    int result = x;
    for(int i=x-1; i>0; i--)
    {
        result = result * i;
    }
    if (result == 0){

        result=1;
    }
    return result;
}


