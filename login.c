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
#include <string.h>

#define USERNAME "administrador"
#define PASSWORD "123456"


int main(int argc, char *args[]){

    if (argc != 3){
        printf("Modo de uso:\n./login [user] [password]\n");
        return 2;
    }

    if (strcmp(args[1], USERNAME) == 0 && strcmp(args[2], PASSWORD) == 0){
        printf("Acesso concedido\n");
        return 0;
    }
    printf("Acesso negado\n");

    return 1;
}

