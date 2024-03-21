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

int main (void) 
{
    int tn, ct, tt;
    printf("Você quer a tabuada de qual número? ");
    scanf("%i", &tn);
    printf("\nVocê quer começar a tabuada em qual número? ");
    scanf("%i", &ct);
    printf("\nVocê quer terminar a tabuada em qual número? ");
    scanf("%i", &tt);
    if (ct > tt) 
    {
        printf("Erro na especificação da tabuada.");
        return 0;
    }
    for (int i = ct; i <= tt; i++)
    {
        printf("%i x %i = %i\n", tn, i, (tn * i));
    }
    return 0;
}