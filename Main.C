#include <stdio.h>
#include <stdlib.h>
#define MAX 50

/* Estrutura Deputado */
typedef struct D{
char codigo[MAX];
char nome [MAX];
char genero;
char circulo[MAX];
}tDeputado;

/* Estrutura Deputados */
typedef tDeputado tDeputados[MAX];

/* Estrutura Partido */
typedef struct P{
char sigla[MAX];
char nome[MAX];
int qtd;
tDeputados deputados;
}tPartido;

/* Estrutura Partidos */
typedef tPartido tPartidos[MAX];

/* Estrutura Parlamento */
typedef struct Pa{
char pais;
tPartidos partidos;
}tParlamento;

int main()
{
    tParlamento pt;
    /* Vetor inicial: Registo do País, os partidos do seu parlamento assim como os deputados que o compõem */
    pt={"Portugal",{{"PS","Partido Socialista",86,{{01321,"Alexandre Tiedtke Quintanilha","M","Porto"},{01456,"Antonio Paulo Jacinto Eusebio","M","Faro"},{01789,"Ana Catarina Veiga Santos Mendonca Mendes","F","Setubal"},{01309,"Wanda Olavo Correa D'azevedo Guimaraes","F","Lisboa"}}},{"PSD","Partido Social Democrata",89,{{02045, "Pedro Manuel Mamede Passos Coelho","M","Lisboa"},{02356,"Maria Manuela Pereira Tender","F","Vila Real"},{02932,"Sara Martins Marques dos Santos Madruga da Costa","F","Madeira"},{02467,"Isaura Leonor Marques de Figueiredo Silva Pedro","F","Viseu"}}},{"BE","Bloco de Esquerda",19,{{03567,"Joana Rodrigues Mortagua","F","Setubal"},{03876,"Joao Manuel Duarte Vasconcelos","M","Faro"},{03211,"Sandra Mestre da Cunha","F","Setubal"},{03004,"Catarina Soares Martins","F","Porto"}}}}};
    menu0();
}

void menu0(){
    int n;
    system("cls");
    printf("Selecione uma opcao (utilize minusculas):\n\n");
    printf("1. Inserir, mostrar ou eliminar informacao do parlamento\n");
    printf("2. Inserir, mostrar ou eliminar informacao dos partidos\n");
    printf("3. Inserir, mostrar ou eliminar informacao dos deputados\n");
    printf("0. Sair do programa\n");
    scanf("%d",&n);
    while(n!=0&&n!=1&&n!=2&&n!=3){
        printf("Invalido. Introduza novamente:\n");
        scanf("%d",&n);
    }
    if(n==1)
        menu1();
    else
        if(n==2)
            menu2();
            else
                if(n==3)
                    menu3();
}

void menu1(){
    int n;
    system("cls");
    printf("Parlamento (utilize minusculas):\n");
    printf("Selecione uma opcao:\n");
    printf("1. Inserir dados\n");
    printf("2. Mostrar dados\n");
    printf("3. Eliminar dados\n");
    printf("0. Voltar atras\n");
    scanf("%d",&n);
    while(n!=0&&n!=1&&n!=2&&n!=3){
        printf("Invalido. Introduza novamente:\n");
        scanf("%d",&n);
    }
    if(n==1){
        system("cls");
        printf("Insere");
    }
    else
        if(n==2){
            system("cls");
            printf("Mostra");
        }
            else
                if(n==3){
                    system("cls");
                    printf("Elimina");
                }
                    else
                        if(n==0){
                            menu0();
                        }
}

void menu2(){
    int n;
    system("cls");
    printf("Partidos:\n");
    printf("Selecione uma opcao(utilize minusculas):\n");
    printf("1. Inserir dados\n");
    printf("2. Mostrar dados\n");
    printf("3. Eliminar dados\n");
    printf("0. Voltar atras\n");
    scanf("%d",&n);
    while(n!=0&&n!=1&&n!=2&&n!=3){
        printf("Invalido. Introduza novamente:\n");
        scanf("%d",&n);
    }
    if(n==1){
        system("cls");
        printf("Insere");
    }
    else
        if(n==2){
            system("cls");
            printf("Mostra");
        }
            else
                if(n==3){
                    system("cls");
                    printf("Elimina");
                }
                    else
                        if(n==0){
                            menu0();
                        }
}

void menu3(){
    int n;
    system("cls");
    printf("Deputados:\n");
    printf("Selecione uma opcao(utilize minusculas):\n");
    printf("1. Inserir dados\n");
    printf("2. Mostrar dados\n");
    printf("3. Eliminar dados\n");
    printf("0. Voltar atras\n");
    scanf("%d",&n);
    while(n!=0&&n!=1&&n!=2&&n!=3){
        printf("Invalido. Introduza novamente:\n");
        scanf("%d",&n);
    }
    if(n==1){
        system("cls");
        printf("Insere");
    }
    else
        if(n==2){
            system("cls");
            printf("Mostra");
        }
            else
                if(n==3){
                    system("cls");
                    printf("Elimina");
                }
                    else
                        if(n==0){
                            menu0();
                        }
}
