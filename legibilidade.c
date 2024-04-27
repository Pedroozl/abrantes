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
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int contar_letras(char texto[]) 
{
    int letras = 0;
    for (int i = 0; i < strlen(texto); i++) 
    {
        char current = texto[i];
        if (current && (int)current != 10) 
        {
            if (islower(current) || isupper(current)) 
            {
                letras++;
            }
        }
    }
    return letras;
}

int contar_palavras(char texto[]) 
{
    int palavras = 1;
    for (int i = 0; i < strlen(texto); i++) 
    {
        char current = texto[i];
        if (current && (int)current != 10) 
        {
            if (isspace(current)) 
            {
                palavras++;
            }
        }
    }
    return palavras;
}

int contar_frases(char texto[]) 
{
    int frases = 0;
    for (int i = 0; i < strlen(texto); i++) 
    {
        char current = texto[i];
        if (current && (int)current != 10) 
        {
            if ((int)current == 33 || (int)current == 46 || (int)current == 63) 
            {
                frases++;
            }
        }
    }
    return frases;
}

int main()
{
    char texto[2048];
    printf("Texto: ");
    fgets(texto, 2048, stdin);
    int frases = contar_frases(texto);
    int letras = contar_letras(texto);
    int palavras = contar_palavras(texto);
    float media_letras = ((float)letras / (float)palavras) * 100;
    float media_frases = ((float)frases / (float)palavras) * 100;
    float indice = round((0.0588 * media_letras) - (0.296 * media_frases) - 15.8);
    //printf("FRASES %i LETRAS %i PALAVRAS %i INDICE %f\n", frases, letras, palavras, indice);
    if (indice > 16) 
    {
        printf("Grau 16+\n");
    } 
    else if (indice < 1) 
    {
        printf("Abaixo do Grau 1\n");
    } 
    else 
    {
        printf("Grau %.0f\n", indice);
    }
    return 0;
}