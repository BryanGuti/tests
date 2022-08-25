#include<stdio.h>

int main()
{
    int numero_de_estudiantes, notas_por_estudiante;

    printf("Averigue los promedios del curso y de los estudiantes.\n");
    printf("Cuantos estudiantes son: ");
    scanf("%i", &numero_de_estudiantes);
    printf("Cuantas notas tiene cada estudiante: ");
    scanf("%i", &notas_por_estudiante);

    float registro[numero_de_estudiantes + 1][notas_por_estudiante + 1];


    for (int i = 0; i < (numero_de_estudiantes); i++)
    {
        for (int j = 0; j < (notas_por_estudiante); j++)
        {
            printf("Ingrese la nota %i del estudiante %i: ", (j + 1), (i + 1));
            scanf("%f", &registro[i][j]);
        }
    }


    for (int i = 0; i < numero_de_estudiantes; i++)
    {
        float promedio_del_estudiante = 0;

        for (int j = 0; j < notas_por_estudiante; j++)
        {
            promedio_del_estudiante += registro[i][j];
        }

        registro[i][notas_por_estudiante] = (promedio_del_estudiante / notas_por_estudiante);        
    }


    for (int i = 0; i < (notas_por_estudiante + 1); i++)
    {
        float promedio_del_curso = 0;

        for (int j = 0; j < numero_de_estudiantes; j++)
        {
            promedio_del_curso += registro[j][i];
        }

        registro[numero_de_estudiantes][i] = (promedio_del_curso / numero_de_estudiantes);        
    }


    printf("\nREGISTRO\n");


    for (int i = 0; i < (numero_de_estudiantes + 1); i++)
    {
        if ((numero_de_estudiantes) - i == 0)
        {
            printf("\n");
            for (int j = 0; j < (notas_por_estudiante + 1); j++)
            {
                if ((notas_por_estudiante) - j == 0)
                {
                    printf("\t\t%.2f", registro[i][j]);
                }
                else
                {
                    printf("\t%.2f", registro[i][j]);
                }      
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < (notas_por_estudiante + 1); j++)
            {
                if ((notas_por_estudiante) - j == 0)
                {
                    printf("\t\t%.2f", registro[i][j]);
                }
                else
                {
                    printf("\t%.2f", registro[i][j]);
                }      
            }       
            printf("\n");
        }         
    }


    return 0;
}