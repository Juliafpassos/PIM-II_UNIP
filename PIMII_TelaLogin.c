// BIBLIOTECAS IMPORTADAS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  char cpf[12];
  char Senha[7];
  char Gcpf[12];
  char GSenha[7];
  char Nome[50];
  char Confirma[1];

  // cadastro
    printf("\n=================================");
    printf("\n====== Cadastro do usuário ======");
    printf("\n=================================");

  // preenchimento dos dados
    printf("\n\nNome completo: ");
     // scanf("%s", Nome);
     fgets(Nome,50,stdin);

    printf("\n\nDigite o seu CPF (somente números): ");
      scanf("%s",Gcpf);

    printf("\n\nDigite uma Senha de 6 caracteres: ");
      scanf("%s",GSenha);

  //confirmação do cadastro
    printf("\n\n====== Cadastro efetuado ======");

//    printf("\n\n Pressione para realizar o login: ");
  //    scanf("%s", Confirma);

//  system("cls"); // limpar a tela

  // tela de login
    printf("\n=================================");
    printf("\n========= TELA DE LOGIN =========");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

    printf("\n\ncpf: ");
      scanf("%s",cpf);

    printf("\nSenha: ");
      scanf("%s",Senha);

  // validação de login e senha
 if(strcmp (cpf,Gcpf) != 0 || strcmp(Senha,GSenha) != 0)
  {
    printf("\n\n====== LOGIN E/OU SENHA INCORRETOS ======\n\n");

 // system("pause");
 // system("cls");

    printf("\n=================================");
    printf("\n========= TELA DE LOGIN =========");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

    printf("\n\n======== TENTE NOVAMENTE ========");

    printf("\n\nLogin: ");
      scanf("%s",cpf);

    printf("\nSenha: ");
      scanf("%s",Senha);
  }
   printf("\n\n======== Login efetuado com sucesso ========");

}

