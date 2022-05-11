#include <stdio.h>
#include <stdlib.h>

int main(){

    // int hora_cinema = 20;
    // int hora_atual = 20;

    // if(hora_atual > hora_cinema + 30){
    //     printf("Passou do tempo limite! nao pode entrar \n");
    // }else if(hora_atual < hora_cinema -30){
    //     printf("Nem abriu a porta do cinema \n");
    // }else if(hora_atual == hora_cinema){
    //     printf("Pode entrar no cinema \n");
    // }

   //*****************************************************************************************************
    
    // int contador = 1;
    // int limite = 10;

    // while (contador < limite)
    // {
    //     printf("estamos no primeiro loop\n");
    //     if (contador == 3);
    //     {
    //         int contador_2 = 5;
    //         while(contador_2 > 0){
    //             printf("estamos no segundo loop\n");
    //             contador_2--;


    //         }
    //     }
        
    //     contador++;
    // }
    
    //**********************************************************************************************

    // char nome[256];
    // char sobrenome[256];
    // int ano_nascimento;
    // int idade;

    // printf("\nQual seu primeiro nome?\n");

    // scanf("%s",nome);

    // printf("\n Legal %s... Qual seu sobrenome? \n",nome);

    // scanf("%s",sobrenome);

    // // printf("\nShow de bola %s %s ... Qual sua idade?\n",nome,sobrenome);

    // // scanf("%d",&idade);

    // printf("\n%s %s Qual o ano do seu nascimento?\n",nome,sobrenome);

    // scanf("%d",&ano_nascimento);

    // // if (idade < 18)
    // // {
    // //     printf("\nSinto muito %s %s mas so aceitamos maiores de idade! :(\n",nome,sobrenome);
    // // }else if(idade >= 18){
    // //     printf("%s %s seja bem vindo! :)\n",nome,sobrenome);
    // // }
    
    //  if (ano_nascimento < 2021 -18)
    // {
    //     printf("%s %s seja bem vindo! :)\n",nome,sobrenome);
    // }else
    // {
    //     printf("\nSinto muito %s %s apenas aceitamos maiores de idade! :(\n",nome,sobrenome);

    // }



    // char nome[256];
    // int idade;

    // printf("\nOla! qual seu nome?\n");
    // scanf("%s",&nome);

    // printf("\n Qual sua idade?\n");
    // scanf("%d",&idade);

    // printf("Nome: %s\nIdade: %d\n",nome,idade);

    // printf("\nAguarde enquanto lemos seus dados...\n");

    // printf("\nAprimeira letra do seu nome e: %c\n",nome[0]);

    // if (idade >= 18){
    //     printf("\n Voce e adulto\n");
    // }else if(idade < 18 && idade >=15){
    //     printf("\nVoce e adolescente\n");
    // }else if(idade < 15 && idade >= 12){
    //     printf("\nVoce e pre-adolescente\n");
    // }else{
    //     printf("\nVoce e crianca\n");
    // }
        


    char player1[256];
    char player2[256];

    printf("\nPlayer 1, Sua vez...\n");
    scanf("%s",&player1);

    printf("\nPlayer 2, Sua vez...\n");
    scanf("%s",&player2);

    printf("\nO player 1 jogou %s e o player 2 jogou %s\n",player1,player2);

    printf("\n Aguarde, estaos calculando o resultado...\n");

    if (strcmp(player1,"papel") == 0)
    {
                    if (strcmp(player2,"papel") == 0)
                {
                    printf("\nEmpate!\n");
                }else if (strcmp(player2,"tesoura") == 0)
                {
                    printf("\n Player 2 venceu  \n");
                }else if (strcmp(player2,"pedra") == 0)
                {
                    printf("\n Player 1 venceu  \n");
                }else{
                    printf("\nVoce jogou uma informacao invalida!\n");
                }

    }else if (strcmp(player1,"tesoura") == 0)
    {
            if (strcmp(player2,"papel") == 0)
                {
                    printf("\n Player 1 venceu  \n");
                }else if (strcmp(player2,"tesoura") == 0)
                {
                    printf("\nEmpate!\n");
                }else if (strcmp(player2,"pedra") == 0)
                {
                    printf("\n Player 2 venceu  \n");
                }else{
                    printf("\nVoce jogou uma informacao invalida!\n");
                }
    }else if (strcmp(player1,"pedra") == 0)
    {
            if (strcmp(player2,"papel") == 0)
                {
                    printf("\n Player 2 venceu  \n");
                }else if (strcmp(player2,"tesoura") == 0)
                {
                    printf("\n Player 1 venceu  \n");
                }else if (strcmp(player2,"pedra") == 0)
                {
                    printf("\nEmpate!\n");
                }else{
                    printf("\nVoce jogou uma informacao invalida!\n");
                }
    }else{
        printf("\nVoce jogou uma informacao invalida!\n");
    }
    
    
    

}