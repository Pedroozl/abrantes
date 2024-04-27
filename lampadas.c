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
#include <stdlib.h>
#include <ctype.h>

/**
 * Variáveis e contantes globais
 */
const int BITS_NO_BYTE = 8;

/**
 * Protótipos das funções
 */
void imprimir_lampada(int bit);

/**
 * MAIN
 */
int main(void)
{
    char mensagemarray[128];
    printf("MENSAGEM: ");
    fgets(mensagemarray, 128, stdin);
    for (int i = 0; i < 128; i++)
    {
        char current = mensagemarray[i];
        if (current && (int)current != 10)
        {
            int ascii = (int)current;
            char bits_chain[8];
            int restant = ascii;
            int last = 0;
            int index = 0;
            while (index < 8)
            {
                //printf("INDEX: %i REST: %i REST/2: %i MOD: %i\n", index, restant, restant/2, (restant % 2));
                last = restant / 2;
                int a = (restant % 2);
                if (restant <= 0) {
                    a = 0;
                }
                bits_chain[index] = a + '0';
                restant = last;
                if (index == 7)
                {
                    bits_chain[index] = '\0';
                }
                index++;
            }
            char invertido[8];
            int size = strlen(bits_chain);
            for (int ci = 7; ci >= 0; ci--) 
            {
                char tmp = bits_chain[ci];
                if (ci == 7)
                {
                    imprimir_lampada(0);
                    continue ;
                }
                imprimir_lampada(tmp == '0' ? 0 : 1);
            }
            printf("\n");
        }
    }
    return 0;
}


/**
 * IMPRIMIR_LAMPADA
 * Esta função recebe um inteiro que representa um bit (0 ou 1) e imprime no
 * terminal um Emoji que representa uma lâmpada acesa ou uma lâmpada apagada.
 * Não há nenhum retorno, só a impressão de um lâmpada acessa ou apagada.
 * Note como um Emoji é impresso através de seu código Unicode.
 *
 * Parâmetros:
 *    (int) bit: um número inteiro que pode ser 0 ou 1
 *
 * Retorno:
 *    (void)
 */
void imprimir_lampada(int bit) 
{
    if (bit == 0)
    {
        // Emoji que representa uma lâmpada apagada
        printf("\U000026AB");
        //printf("0");
    }
    else if (bit == 1)
    {
        // Emoji que representa uma lâmpada acessa
        printf("\U0001F7E1");
        //printf("1");
    }
}

