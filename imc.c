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

// Comece aqui seu programa.

#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
    float tn;
    float ct;
    char buffer[1024];
    do 
    {
        printf("Informe seu peso (kg): ");
        if (fgets(buffer, 1024, stdin)) // le o buffer de entrada do terminal
        {
            tn = atof(buffer);
        }
    }
    while (tn < 40.00 || tn > 200.00);
    
    char buffer2[1024];
    do 
    {
        printf("Informe sua altura (m): ");
        if (fgets(buffer2, 1024, stdin)) // le o buffer de entrada do terminal
        {
            ct = atof(buffer2);
        }
    } 
    while (ct < 1.40 || ct > 2.50);

    float imc = (tn / (ct * ct));
    if (imc < 16.0) 
    {
        printf("IMC: %.2f; Classificação: %s.\n", imc, "Magreza grau III");
    }
    else if (imc >= 16.0 && imc < 17.0) 
    {
        printf("IMC: %.2f; Classificação: %s.\n", imc, "Magreza grau II");
    }
    else if (imc >= 17.0 && imc < 18.5) 
    {
        printf("IMC: %.2f; Classificação: %s.\n", imc, "Magreza grau I");
    }
    else if (imc >= 18.5 && imc < 25.0) 
    {
        printf("IMC: %.2f; Classificação: %s.\n", imc, "Peso adequado");
    }
    else if (imc >= 25.0 && imc < 30.0) 
    {
        printf("IMC: %.2f; Classificação: %s.\n", imc, "Pré-obeso");
    }
    else if (imc >= 30.0 && imc < 35.0) 
    {
        printf("IMC: %.2f; Classificação: %s.\n", imc, "Obesidade grau I");
    }
    else if (imc >= 35.0 && imc < 40.0) 
    {
        printf("IMC: %.2f; Classificação: %s.\n", imc, "Obesidade grau II");
    }
    else 
    {
        printf("IMC: %.2f; Classificação: %s.\n", imc, "Obesidade grau III");
    }
    return 0;
}