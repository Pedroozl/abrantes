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
#include <string.h>

#define SIZE_OF_NUMBER 16

struct CreditCard
{
    int valid;
    char brand[18];
};

int getChars(char nbr[]) 
{
    int cr = 0;
    for (int i = 0; i < SIZE_OF_NUMBER; i++) 
    {
        int ii = (nbr[i] - '0');
        if (nbr[i] && ii == 0 || nbr[i] && ii) 
        {
            cr += 1;
        }
    }
    return cr;
}

struct CreditCard isValid(char nbr[], int chars) 
{
    struct CreditCard cc;
    int twonmb = 0;
    int nbrix = 0;
    int nnbrix = 0;
    for (int i = chars; i >= 0; i--) 
    {
        twonmb += 1;
        int nbri = !nbr[i] ? 0 : (nbr[i] - '0');
        if (!nbr[i] || twonmb <= 2) 
        {
            if (nbr[i]) 
            {
                nnbrix += nbri;
            }
            continue;
        }
        int c = (nbri * 2);
        if (c >= 10)
        {
            char t [2];
            sprintf(t, "%i", c);    
            for (int ii = 0; ii < 2; ii++) 
            {        
                nbrix += (t[ii] - '0');
            }
        }
        else
        {
            nbrix += c;
        }
        twonmb = 1;
    }
    cc.valid = (nbrix + nnbrix) % 10 == 0 ? 1 : 0;
    if (chars == 15 && nbr[0] == '3' &&  nbr[1] == '4' || chars == 15 && nbr[0] == '3' &&  nbr[1] == '7') 
    {
        strcpy(cc.brand, "AMEX");
    }
    else if (chars == 13) 
    {
        strcpy(cc.brand, "VISA");
    }
    else if (chars == 16) 
    {
        if (nbr[0] == '4')
        {
            strcpy(cc.brand, "VISA");
        }
        else if (nbr[0] == '5' &&  nbr[1] == '1' || nbr[0] == '5' &&  nbr[1] == '2' || nbr[0] == '5' &&  nbr[1] == '3' || nbr[0] == '5' &&  nbr[1] == '4' || nbr[0] == '5' &&  nbr[1] == '5')
        {
           strcpy(cc.brand, "MASTERCARD");
        }
        else 
        {
            cc.valid = 0;
        }
    } 
    else 
    {
        cc.valid = 0;
    }
    return cc;
}

int main(void) 
{
    char card[SIZE_OF_NUMBER];
    printf("Número: ");
    scanf("%s", &card);
    int chars = getChars(card);
    if (chars < 13 || chars > 16) 
    {
        printf("INVÁLIDO\n");
        return 0;
    }
    struct CreditCard result = isValid(card, chars);
    if (result.valid == 0) 
    {
        printf("INVÁLIDO\n");
    }
    else 
    {
        printf("%s\n", result.brand);
    }
    return 0;
}