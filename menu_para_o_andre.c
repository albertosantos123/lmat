#include <stdio.h>
#include <stdlib.h>
#define MAX 50

void menu1();

/* Estrutura Deputado */
typedef struct D
{
    char codigo[MAX];
    char nome [MAX];
    char genero;
    char circulo[MAX];
} tDeputado;

/* Estrutura Deputados */
typedef tDeputado tDeputados[MAX];

/* Estrutura Partido */
typedef struct P
{
    char sigla[MAX];
    char nome[MAX];
    int qtd;
    tDeputados deputados;
} tPartido;

/* Estrutura Partidos */
typedef tPartido tPartidos[MAX];

/* Estrutura Parlamento */
typedef struct Pa
{
    char pais;
    tPartidos partidos;
} tParlamento;

/*MAIN*/
int main()
{
    int np=3;
    tParlamento pt= {"Portugal",{{"PS","Partido Socialista",4,{{1321,"Alexandre Tiedtke Quintanilha",'M',"Porto"},{1456,"Antonio Paulo Jacinto Eusebio",'M',"Faro"},{1789,"Ana Catarina Veiga Santos Mendonca Mendes",'F',"Setubal"},{1309,"Wanda Olavo Correa D'azevedo Guimaraes",'F',"Lisboa"}}},{"PSD","Partido Social Democrata",5,{{2045, "Pedro Manuel Mamede Passos Coelho",'M',"Lisboa"},{2778,"Luís Filipe Montenegro Cardoso de Morais Esteves",'M',"Aveiro"},{2356,"Maria Manuela Pereira Tender",'F',"Vila Real"},{2932,"Sara Martins Marques dos Santos Madruga da Costa",'F',"Madeira"},{2467,"Isaura Leonor Marques de Figueiredo Silva Pedro",'F',"Viseu"}}},{"BE","Bloco de Esquerda",3,{{3567,"Joana Rodrigues Mortagua",'F',"Setubal"},{3876,"Joao Manuel Duarte Vasconcelos",'M',"Faro"},{3004,"Catarina Soares Martins",'F',"Porto"}}}}};
    menu0();
}
void menu0()
{
    int n;
    do
    {
        system("cls");
        printf("Selecione uma opcao:\n\n");
        printf("1. Inserir, mostrar ou eliminar informacao do parlamento\n");
        printf("2. Inserir, mostrar ou eliminar informacao dos partidos\n");
        printf("3. Inserir, mostrar ou eliminar informacao dos deputados\n");
        printf("4. Total de partidos do parlamento\n");
        printf("5. Total e media de deputados do sexo feminino\n");
        printf("6. Percentagem de deputados de um partido\n");
        printf("7. Partido mais e menos votado\n");
        printf("8. Informacoes do programa\n");
        printf("0. Sair do programa\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
        {
            menu1();
            break;
        }
        case 2:
        {
            menu2();
            break;
        }
        case 3:
        {
            menu3();
            break;
        }
        case 4:
        {
            menu4();
            break;
        }
        case 5:
        {
            menu5();
            break;
        }
        case 6:
        {
            menu6();
            break;
        }
        case 7:
        {
            menu7();
            break;
        }
        case 8:
        {
            menu8();
            break;
        }
        case 0:
        {
            printf("\nFIM");
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
void menu1()
{
    int n;
    do
    {
        system("cls");
        printf("%d\n",MAX);
        printf("Parlamento:\n");
        printf("Selecione uma opcao:\n");
        printf("1. Inserir dados\n");
        printf("2. Mostrar dados\n");
        printf("3. Eliminar dados\n");
        printf("0. Voltar atras\n");
        scanf("%d",&n);

        switch(n)
        {
        case 1:
        {
            menu11();
            break;
        }
        case 2:
        {
            menu12();
            break;
        }
        case 3:
        {
            menu13();
            break;
        }
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}

/*Inserir*/
void menu11()
{
    int n;
    system("cls");
    printf("Inserir\n\n");



    int teste;
    printf("Qual o valor de teste?: ");
    scanf("%d",&teste);
    #define MAX 90
    printf("%d\n",MAX);


    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
void menu12()
{
    int n,i;
    system("cls");
    printf("Mostrar\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
void menu13()
{
    int n;
    system("cls");
    printf("Eliminar\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
void menu2()
{
    int n;
    do
    {
        system("cls");
        printf("Partidos:\n");
        printf("Selecione uma opcao:\n");
        printf("1. Inserir dados\n");
        printf("2. Mostrar dados\n");
        printf("3. Eliminar dados\n");
        printf("0. Voltar atras\n");
        scanf("%d",&n);

        switch(n)
        {
        case 1:
        {
            menu21();
            break;
        }
        case 2:
        {
            menu22();
            break;
        }
        case 3:
        {
            menu23();
            break;
        }
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}

void menu21()
{
    int n;
    system("cls");
    printf("Inserir\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
void menu22()
{
    int n;
    system("cls");
    printf("Mostrar\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}

void menu23()
{
    int n;
    system("cls");
    printf("Eliminar\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
void menu3()
{
    int n;
    do
    {
        system("cls");
        printf("Deputados:\n");
        printf("Selecione uma opcao:\n");
        printf("1. Inserir dados\n");
        printf("2. Mostrar dados\n");
        printf("3. Eliminar dados\n");
        printf("0. Voltar atras\n");
        scanf("%d",&n);

        switch(n)
        {
        case 1:
        {
            menu31();
            break;
        }
        case 2:
        {
            menu32();
            break;
        }
        case 3:
        {
            menu33();
            break;
        }
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}

void menu31()
{
    int n;
    system("cls");
    printf("Inserir\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
void menu32()
{
    int n;
    system("cls");
    printf("Mostrar\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}

void menu33()
{
    int n;
    system("cls");
    printf("Eliminar\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
void menu4()
{
    int n;
    system("cls");
    printf("Total de partidos:\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
void menu5()
{
    int n;
    system("cls");
    printf("Total e media de deputados do sexo feminino:\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}

void menu6()
{
    int n;
    system("cls");
    printf("Percentagem de deputados do partido:\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
void menu7()
{
    int n;
    system("cls");
    printf("Partido mais votado:\n");
    printf("Partido menos votado:\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
void menu8()
{
    int n;
    system("cls");
    printf("Trabalho pratico de APROG\n\n");
    printf("Ano letivo 2016-2017\n\n");
    printf("Autores:\n");
    printf("- Andre Moura\n");
    printf("- Alberto Santos\n");
    printf("- Miguel Mestre\n\n");
    do
    {
        printf("0. Voltar atras\n");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
        {
            break;
        }
        default:
        {
            printf("Invalido. Introduza novamente:\n");
            getch();
            fflush(stdin);
        }
        }
    }
    while (n!=0);
}
