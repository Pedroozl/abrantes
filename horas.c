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

// Comece aqui seu pragrama:
#include <ctype.h>
#include <stdio.h>


/**
 * Protótipo das funções
 */
float calcular_horas(int horas[], int semanas, char saida);


int main(void)
{
    // Pergunta quantas semanas o aluno já estudou e cria um array apropriado
    // para armazenar as horas de estudo em cada semana.
    int semanas;
    printf("Quantas semanas de estudo na CS50? ");
    scanf("%i", &semanas);
    int horas[semanas];

    // Percorre o array preenchendo a quantidade de horas estudadas em cada
    // semana.
    for (int i = 0; i < semanas; i++)
    {
        int hsemana;
        printf("Horas na semana %i: ", i);
        scanf("%i", &hsemana);
        horas[i] = hsemana;
    }

    // Pergunta o tipo de saída desejado: T para o total de horas de estudo, ou
    // M para a média de horas semanais de estudo.
    char saida;
    do
    {
        char r;
        printf("Digite T para o total ou M para a média de horas por semana: ");
        scanf("%c", &r);
        saida = toupper(r);
    }
    while (saida != 'T' && saida != 'M');

    // Imprime o resultado desejado, chamando a função calcular_horas.
    printf("%.1f horas\n", calcular_horas(horas, semanas, saida));
    
    // Termina o programa.
    return 0;
}


/**
 * CALCULAR_HORAS
 * A função recebe um array de inteiros onde cada posição no array representa o
 * número de horas estudadas em uma semana, a quantidade de semanas estudadas
 * (que deve corresponder à quantidade de posições no array) e um código em char
 * que representa o tipo de saída esperado (T para horas totais de estudo e M
 * para média de horas de estudo por semana). A função retorna a quantidade
 * total de horas de estudo OU a quantidade média de horas de estudo por semana.
 * Parâmetros:
 *
 *    (int) horas[]: um array de números inteiros onde cada posição no array
 *                   representa a quantidade de horas estudada naquela semana.
 *    (int) semanas: um número inteiro que indica quantas semanas de estudo
 *                   serão informadas (corresponde ao tamanho do array horas[]).
 *    (char) saida:  uma char que obrigatoriamente deve ser 'T' ou 'M', e que
 *                   indica o tipo de saída esperado da função: o 'T'otal de
 *                   horas estudadas, ou 'M'édia de horas de estudo por semana.
 * Retorno:
 *    (float): um float que representa o total de horas de estudo (considerando
 *             todas as horas em todas as semanas, ou a média de horas de estudo
 *             por semana.
 */
float calcular_horas(int horas[], int semanas, char saida)
{
    int t = 0;
    for (int i = 0; i < semanas; i++) {
        if (horas[i]) {
            t += horas[i];
        }
    }
    if (saida == 'T') 
    {
        return t;
    } 
    else 
    {
        return (float)t / (float)semanas;
    }
}
