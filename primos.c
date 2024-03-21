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
#include <stdbool.h>

int main(void) 
{
    int tn, ct;
    printf("Menor número: ");
    scanf("%i", &tn);
    printf("\nMaior número: ");
    scanf("%i", &ct);
    for (int i = tn; i <= ct; i++) 
    {
        int divs = 0;
        for (int p = 1; p <= i; p++)
        {
            if ((i % p) == 0) 
            {
                divs++;
            }
        }
        
        if (divs <= 2)
        {
            printf("%i\n", i);
        }
    }
    return 0;
}