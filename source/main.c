
/******************************************************************************/
// PROYECTO CALCULADORA
// Lenguaje C.
// https://www.onlinegdb.com/edit/v0g8ct5zX
// https://onlinegdb.com/OuWdPj1ot
// https://github.com/aperezNWO/c_test/
/*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

void calculadora()
{
    //
    const int OPERATION_MAX       = 100;
    const int STRING_LEN_MAX      = 100;
    const float RADIAN_CONVERSION = 0.0174532925;
    //
    float   primerNumero;
    float   segundoNumero;
    float   operacionResultado;
    int     operacionItem;
    //
    char   *operacionOperador;
    char   *operacionDescripcion;
    char    continuar               ='s';
    int     operationCount          = 0;
    char  **operationLog;
    //
    operationLog = malloc(OPERATION_MAX * sizeof(char*));
    
    //        
    while (continuar == 's')
    {
         //
         system("@cls||clear");
         //
         printf("\n");
         printf("\n-----------");
         printf("\nCalculadora");
         printf("\n-----------");
         printf("\n");
         printf("\nListado de Operaciones   : "); 
         printf("\n");
         if (operationCount>0)
             printf("\n0. Historico.");
         printf("\n1. Suma.");
         printf("\n2. Resta.");
         printf("\n3. Multiplicacion.");
         printf("\n4. Division.");
         printf("\n5. Potencia.");
         printf("\n6. Raíz Cuadrada.");
         printf("\n7. Seno.");
         printf("\n8. Coseno.");
         printf("\n9. Tangente.");
         printf("\n");
         printf("\nIngrese Operacion      : ");  
          scanf(" %d",&operacionItem);
         //    
         if (operacionItem != 0)
         {
            //
            if (operacionItem < 7)
            {
                operacionDescripcion="Primer Numero";
            }
            else 
            {
                operacionDescripcion="Angulo       ";
            }
            //
            printf("\nIngrese %s  : ",operacionDescripcion);
             scanf(" %f",&primerNumero);
            //
            if (operacionItem < 5)
            {
                printf("\nIngrese Segundo Número : ");
                 scanf(" %f",&segundoNumero);
            }
            //
            switch(operacionItem)
            {
                 case 1:
                        operacionResultado = (primerNumero + segundoNumero);
                        operacionOperador  = "+";
                 break;
                 case 2:
                        operacionResultado = (primerNumero - segundoNumero);
                        operacionOperador  = "-";
                 break;
                 case 3:
                        operacionResultado = (primerNumero * segundoNumero);
                        operacionOperador  = "x";
                 break;        
                 case 4:
                        operacionResultado = (primerNumero / segundoNumero);
                        operacionOperador  = "/";                        
                 break;
                 case 5:
                        operacionResultado = pow(primerNumero,2);
                        operacionOperador  = "pow";
                 break;
                 case 6:
                        operacionResultado = sqrt(primerNumero);
                        operacionOperador  = "sqrt";  
                 break;
                 case 7:
                        operacionResultado = sin(primerNumero*RADIAN_CONVERSION);
                        operacionOperador  = "sin";  
                 break;
                 case 8:
                        operacionResultado = cos(primerNumero*RADIAN_CONVERSION);
                        operacionOperador  = "cos";  
                 break;
                 case 9:
                        operacionResultado = tan(primerNumero*RADIAN_CONVERSION);
                        operacionOperador  = "tan";  
                 break;                   
            }
            // 
            char buffer[200];
            if (operacionItem < 5)
                sprintf(buffer,"%f = %f %s %f",operacionResultado,primerNumero,operacionOperador,segundoNumero); 
            else
                sprintf(buffer,"%f = %s(%f)"  ,operacionResultado,operacionOperador,primerNumero);
            //
            printf("\n%s",buffer);
            //
            operationLog[operationCount] = malloc((sizeof(buffer)+1) * sizeof(char));
            strcpy(operationLog[operationCount], buffer);
            //
            operationCount++;
         }
         //
         if (operacionItem==0)
         {
             //
             printf("\n");
             printf("\nHistórico de operaciones.");
             printf("\n");            
             //         
             for (int index  = 0; index < operationCount; index++)
             {
                 printf("\nOperación # %d : { %s }",index,operationLog[index]);
             }
         }
         //
         printf("\n");
         printf("\n ¿Desea continuar (s/n)? : ");
          scanf(" %c",&continuar);
         continuar = tolower(continuar);
         printf("\n Operacion Seleccionada : %c",continuar); 
    }  
}    

//
int main()
{
    //
    calculadora();
    //
    return 0;
}
