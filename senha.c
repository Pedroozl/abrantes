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
#include <stdbool.h>
#include <ctype.h>

/**
 * Protótipo das funções
 */
bool validar(char senha[]);


/**
 * MAIN
 */
int main(void)
{
    // Solicita uma senha ao usuário e valida a senha:
    char senha[1024];
    printf("Digite sua senha: ");
    scanf("%s", senha);
    if (validar(senha))
    {
        printf("%s\n", "Sua senha é válida!");
    }
    else
    {
        printf("%s",   "A senha precisa de 1 letra maiúscula, ");
        printf("%s\n", "1 letra minúscula, 1 número e 1 símbolo!");
    }
    
    // Termina o programa
    return 0;
}


/**
 * VALIDAR
 * Função que recebe uma string contendo a senha do usuário e retorna TRUE ou
 * FALSE dependendo se a senha contém pelo menos 1 caractere de cada categoria
 * necessária: letra maiúscula, letra minúscula, número e símbolo.
 *
 * Parâmetros:
 *    (string) senha: string que representa a senha informada pelo usuário.
 *
 * Retorno:
 *    (bool): TRUE ou FALSE indicando se a senha é válida ou não.
 */
bool validar(char senha[])
{
    int check_pass[4] = {0, 0, 0, 0};
    for (int i = 0; i < strlen(senha); i++) 
    {
        char current = senha[i];
        if (current) {
            if (isdigit(current)) 
            {
                check_pass[2] = 1; 
            } 
            else if (isalpha(current) && isupper(current)) 
            {
                check_pass[0] = 1; 
            }
            else if (isalpha(current) && islower(current)) 
            {
                check_pass[1] = 1; 
            }
            else if (ispunct(current)) 
            {
                check_pass[3] = 1; 
            }
        }
    }
    return check_pass[0] == 1 && check_pass[1] == 1 && check_pass[2] == 1 && check_pass[3] == 1 ? true : false;
}
