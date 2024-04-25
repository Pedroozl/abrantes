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
#include <string.h>


/**
 * PONTOS[]
 * Array que armazena o número de pontos de cada letro do alfabeto,
 * em ordem (ou // seja: A = 1; B = 3; C = 3; D = 2; etc.)
 */
int PONTOS[] = {1, 3, 3,  2, 1, 4, 2, 4, 1, 8, 5, 1,3,1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
char letras[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };


/**
 * Protótipos das funções
 */
int calcular_pontuacao(char* palavra);


/**
 * MAIN
 */
int main(void)
{
    // Solicita uma palavra de cada jogador:
    char* palavra1;
    char* palavra2; 
    printf("Jogador 1: ");
    scanf("%s", &palavra1);
    printf("Jogador 2: ");
    scanf("%s", &palavra2);

    // Calcula a pontuação de cada palavra:
    int pontuacao1 = calcular_pontuacao(palavra1);
    int pontuacao2 = calcular_pontuacao(palavra2);

    if (pontuacao1 == pontuacao2) 
    {
        printf("Empate!\n");
    }
    else if (pontuacao1 > pontuacao2)
    {
        printf("O jogador 1 ganhou!\n");
    }
    else 
    {
        printf("O jogador 2 ganhou!\n");
    }

    // TODO: Imprimir o resultado do jogo
    
    // Termina o programa
    return 0;
}


/**
 * CALCULAR_PONTUACAO
 * Esta função recebe uma palavra (string) e, utilizando o array global de
 * pontos para cada letra do alfabeto, calcula e retorna a pontuação total da
 * palavra (calcula quanto "vale" a palavra).
 *
 * Parâmetros:
 *    (string) palavra: string com a palavra informada pelo jogador
 *
 * Retorno:
 *    (int) pontuação da palavra
 *
 * Obs.: é obrigatório utilizar o array PONTOS[] no cálculo da pontuação!
 */

int find_index(char c) 
{
    int pos = 0;
    for (int i = 0; i < 26; i++) 
    {
        if (letras[i] == c) 
        {
            pos = i;
            break;
        }
    }
    return pos;
}

int calcular_pontuacao(char* palavra)
{
    // TODO: Calcular e retornar a pontuação da palavra
    printf("%s", palavra);
    int points = 0;
    for (int i = 0; i < 64; i++) 
    {
        if (!palavra[i]) 
        {
            continue;
        }
        char current = tolower(palavra[i]);
        int position = find_index(current);
        if (position == 0) 
        {
            continue;
        }
        printf("%c > %i\n", current, PONTOS[position]);
        points += PONTOS[position];
    }
    return points;
}
