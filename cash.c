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

int get_troco();
int calcular_moedas50();
int calcular_moedas25();
int calcular_moedas10();
int calcular_moedas05();
int calcular_moedas01();

int main()
{
    int troco = get_troco();
    printf("%i\n", troco);
    return 0;
}

int get_troco()
{
    int value;
    char buffer[1024];
    do 
    {
        printf("Informe o troco devido (em centavos): ");
        if (fgets(buffer, 1024, stdin)) // le o buffer de entrada do terminal
        {
            value = atoi(buffer);
        }
    }
    while (value < 0 || value > 99);

    int restant; 
    int coins = 0;
    restant = value;
    while (restant != 0 && restant > 0)
    {
        if (restant >= 50) 
        {
            int r = calcular_moedas50(restant);
            coins += r;
            restant -= (50 * coins);
        } 
        else if (restant < 50 && restant >= 25) 
        {
            int r = calcular_moedas25(restant);
            coins += r;
            restant -= (25 * r);
        }
        else if (restant < 25 && restant >= 10) 
        {
            int r = calcular_moedas10(restant);
            coins += r;
            restant -= (10 * r);
        }
        else if (restant < 10 && restant >= 5) 
        {
            int r = calcular_moedas05(restant);
            coins += r;
            restant -= (05 * r);
        }
        else if (restant < 5 && restant == 1 && restant > 0) 
        {
            int r = calcular_moedas01(restant);
            coins += r;
            restant -= r;
        }
    }
    
    return coins;
}

int calcular_moedas50(int restant)
{
    int coins = 0;
    for (int i = 0; i < (restant / 50); i++)
    {
        coins += 1;
    }
    return coins;
}

int calcular_moedas25(int restant)
{
    int coins = 0;
    for (int i = 0; i < (restant / 25); i++)
    {
        coins++;
    }
    return coins;
}

int calcular_moedas10(int restant)
{
    int coins = 0;;
    for (int i = 0; i < (restant / 10); i++)
    {
        coins++;
    }
    return coins;
}

int calcular_moedas05(int restant)
{
    int coins = 0;
    for (int i = 0; i < (restant / 5); i++)
    {
        coins++;
    }
    return coins;
}

int calcular_moedas01(int restant)
{
    int coins = 0;
    for (int i = 0; i < restant; i++)
    {
        coins++;
    }
    return coins;
}