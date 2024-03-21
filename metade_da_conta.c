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
    float tn, ct;
    int tt;
    printf("Valor da comida? ");
    scanf("%f", &tn);
    printf("\nPorcentagem de impostos? ");
    scanf("%f", &ct);
    printf("\nPorcentagem da gorjeta? ");
    scanf("%i", &tt);
    if (tn < 10.00 || tn > 999.99 || ct <= 0.00 || ct > 100.00 || tt <= 0 || tt > 100) 
    {
        printf("ERRO.");
        return 0;
    }
    float p1, p2, t;
    p1 = (ct / 100) * tn;
    t = tn + p1;
    p2 = ((float)tt / 100) * t;
    t = t + p2;
    t = (t / 2);
    printf("Cada um pagará R$ %.2f!\n", t);
    return 0;
}