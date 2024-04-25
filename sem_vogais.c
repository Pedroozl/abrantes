/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Pedro Moreira Guarconi
 *    Matrícula: 202414492
 *    Turma: CC1CM
 *    Email: pedroguarconi@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

// Comece aqui seu programa
#include <stdio.h>
#include <string.h>

/**
 * MAIN
 */


char trocar_vogal(char letra) 
{   
    switch (letra)
    {
        case 'a':
            return '6';
            break;

        case 'e':
            return '3';
            break;

        case 'i':
            return '1';
            break;

        case 'o':
            return '0';
            break;

        case 'u':
            return 'v';
            break;

        default:
            return letra;
            break;
    }
}

void trocar(char original[], char novo[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        char current = original[i];
        char new = trocar_vogal(current);
        novo[i] = new;
    }
}

int main(int argc, char *argv[])
{
    if (!argv[1]) 
    {
        printf("Uso: ./sem_vogais palavra\n");
        return 1;
    }

    if (argv[2]) 
    {
        printf("Somente um argumento\n");
        return 1;
    }

    char novafrase[1024];
    char originalarray[1024];

    sprintf(originalarray, "%s",  argv[1]);

    trocar(originalarray, novafrase, strlen(argv[1]));

    printf("%s\n", novafrase);

    return 0;
}