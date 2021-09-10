// 03/09/2021 - Primeira etapa:
// Esta atividade tem o propósito de fazer em disputa de programação entre times com o objetivo de obtenção de uma solução ótima.
// Cada time deverá ser formado no máximo de três integrantes.
// Cada equipe deve desenvolver um sistema de autenticação com os seguintes critérios:
// * Usuário tem que ser administrador em minúsculo.
// * A senha será escolhida pela equipe que desenvolveu o sistema de autenticação, não
//   pode passar de seis dígitos, deve ser letras maiúscula, minúscula ou números.
// * Ao autenticar no software deve aparecer uma mensagem acesso concedido, é retorno 0 na saída.
// * O processo de autenticação deve ser por entrada de dados através do console do sistema
//   operacional conforme esta estrutura: [aplicativo] [usuário] [senha]
// Um algoritmo guloso é uma técnica de desenvolvimento, que tem o objetivo de resolver um problema com a melhor escolha em todas as fases,
// com a esperança de encontrar uma ótima solução global para o problema. Neste caso para nosso sistema de autenticação.


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define USERNAME "administrador"

#define HIDE_LETTER(a) (a) + 0x50
#define UNHIDE_STRING(str) \
  do                       \
  {                        \
    char *ptr = str;       \
    while (*ptr)           \
      *ptr++ -= 0x50;      \
  } while (0)
#define HIDE_STRING(str) \
  do                     \
  {                      \
    char *ptr = str;     \
    while (*ptr)         \
      *ptr++ += 0x50;    \
  } while (0)


int main(int argc, char *args[]){
    char passwd[] = {HIDE_LETTER('x'), HIDE_LETTER('3'), HIDE_LETTER('d'), HIDE_LETTER('C'), HIDE_LETTER('U'), HIDE_LETTER('4'), '\0'};

    if (argc != 3){
        printf("Modo de uso:\n./login [user] [password]\n");
        return 2;
    }

    UNHIDE_STRING(passwd);

    if (strcmp(args[1], USERNAME) == 0 && strcmp(args[2], passwd) == 0){
        printf("Acesso concedido\n");
        return 0;
    }

    HIDE_STRING(passwd);

    return 1;
}

