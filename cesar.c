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
#include <ctype.h>
#include <stdlib.h>

/**
 * MAIN
 */

char alfabeto_lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
char alfabeto_upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

int find_index(char c, char type) 
{   
    int r = 666;
    for (int i = 0; i < 26; i++) 
    {
        if (type == 'L' && alfabeto_lower[i] == c || type == 'U' && alfabeto_upper[i] == c)
        {
            r = i;
            continue;
        }
    }
    return r;
}

int verify_pomba(char* x) 
{
    int pass = 1;
    for (int i = 0; i < strlen(x); i++) 
    {
        char current = x[i];
        if (current) 
        {
            if (!isdigit(current)) 
            {
                pass = 0;
                continue;
            }
        }
    }
    return pass;
}

int cifrar(int c, int key) 
{
    int kk = (c + key);
    if (kk >= 26) 
    {
        kk = (kk - (26 * (kk / 26)));
    }
    return kk;
}

int main(int argc, char* argv[])
{
    if (!argv[1] || argv[2])
    {
        printf("Uso: ./cesar chave\n");
        return 1;
    }
    int valid_argv = verify_pomba(argv[1]);
    if (!valid_argv) 
    {
        printf("Uso: ./cesar chave\n");
        return 1;
    }
    char texto_puro[128];
    printf("Texto puro: ");
    fgets(texto_puro, 128, stdin);
    char text_cifrado[128];
    for (int i = 0; i < strlen(texto_puro); i++) 
    {
        char current = texto_puro[i];
        if (current && (int)current != 10)
        {
            char type = isupper(current) ? 'U' : 'L';
            int index = find_index(current, type);
            if (index == 666) 
            {
                text_cifrado[i] = current;
                continue;
            }
            int cifrado = cifrar(index, atoi(argv[1]));
            text_cifrado[i] = type == 'U' ? alfabeto_upper[cifrado] : alfabeto_lower[cifrado];
        }
    }
    printf("Texto cifrado: %s\n", text_cifrado);
    return 0;
}

