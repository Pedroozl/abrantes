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

int response() 
{
    int aa;
    printf("Altura: ");
    scanf("%i", &aa);
    if (aa && aa > 0 && aa < 9) 
    {
        return aa;
    }
    return 0;
}

int main(void) 
{
    int a;
    do 
    {
        a = response();
    } 
    while (a == 0);
    for (int i = 0; i < a; i++) // Basicamente e so inverter
    {
        for (int e = 1; e < (a - i); e++) 
        {
            printf(" "); //Espaco do bloco
        }

        for (int e = 0; e <= i; e++) 
        {
            printf("#"); // Loga o bloco
        }
        
        printf("  "); // espaco entre as piramides

        for (int e = 0; e <= i; e++) // cria o bloco POREM sem espaco antes ou seja geracao normal
        {
            printf("#"); // Loga o bloco
        }     

        printf("\n");
    }
    return 0;
}