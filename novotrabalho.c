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

void menu0()
{
    tParlamento pt= {"Portugal",{{"PS","Partido Socialista",4,{{1321,"Alexandre Tiedtke Quintanilha",'M',"Porto"},{1456,"Antonio Paulo Jacinto Eusebio",'M',"Faro"},{1789,"Ana Catarina Veiga Santos Mendonca Mendes",'F',"Setubal"},{1309,"Wanda Olavo Correa D'azevedo Guimaraes",'F',"Lisboa"}}},{"PSD","Partido Social Democrata",5,{{2045, "Pedro Manuel Mamede Passos Coelho",'M',"Lisboa"},{2778,"Luís Filipe Montenegro Cardoso de Morais Esteves",'M',"Aveiro"},{2356,"Maria Manuela Pereira Tender",'F',"Vila Real"},{2932,"Sara Martins Marques dos Santos Madruga da Costa",'F',"Madeira"},{2467,"Isaura Leonor Marques de Figueiredo Silva Pedro",'F',"Viseu"}}},{"BE","Bloco de Esquerda",3,{{3567,"Joana Rodrigues Mortagua",'F',"Setubal"},{3876,"Joao Manuel Duarte Vasconcelos",'M',"Faro"},{3004,"Catarina Soares Martins",'F',"Porto"}}}}};
    int n, np=3, nf=7;
    do
    {
        system("cls");
        printf("Selecione uma opcao:\n\n");
        printf("1. Mostrar Parlamento\n");
        printf("2. Mostrar Partidos\n");
        printf("3. Mostrar Deputados\n");
        printf("4. Mudar nome do Parlamento\n");
        printf("5. Adicionar Partido\n");
        printf("6. Eliminar Partido\n");
        printf("7. Adicionar Deputado\n");
        printf("8. Eliminar Deputado\n");
        printf("9. Total e média de Deputados do sexo feminino\n");
        printf("10. Presença no Parlamento\n");
        printf("0. Sair do programa\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
        {
            menu1(pt,np);
            break;
        }
        case 2:
        {
            menu2(pt,np);
            break;
        }
        case 3:
        {
            menu3(pt,np);
            break;
        }
        case 4:
        {
            menu4(&pt);
            break;
        }
        case 5:
        {
            menu5(&pt,&np);
            break;
        }
        case 6:
        {
            menu6(&pt,&np);
            break;
        }
        case 7:
        {
            menu7(&pt,np);
            break;
        }
        case 8:
        {
            menu8(&pt,np);
            break;
        }
        case 9:
        {
            menu9(&pt,np);
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
void menu1(tParlamento x, int np)
{
    int n,i;
    system("cls");
    printf("%d\n",MAX);
    printf("Parlamento:\n");
    printf("\n%s :\n",x.pais);
    for (i=0;i<np;i++){
        printf("%s - %s \n", x.partidos[i].sigla, x.partidos[i].nome);
    }
}

void menu9()
{
    int n;
    system("cls");

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
void menu2(tParlamento x, int np)
{
    int n,i,j;
    system("cls");
    printf("Partidos:\n");
    printf("\nMostrar Partidos:");
    for (i=0;i<np;i++){
        printf("\n%s - %s - %d deputados:\n\n",x.partidos[i].sigla, x.partidos[i].nome,x.partidos[i].qtd);
        for (j=0;j<(x.partidos[i].qtd);j++){
            printf("%s\n", x.partidos[i].deputados[j].nome);
        }
    }
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
void menu3(tParlamento x, int np)
{
    int n;
    do
    {
        system("cls");
        printf("Deputados:\n");
        int i,j;
        for(i=0;i<np;i++){
            printf("\n");
            printf("%s :\n",x.partidos[i].sigla);
            for(j=0;j<(x.partidos[i].qtd);j++){
                    printf("%d - %s - %c - %s\n", x.partidos[i].deputados[j].codigo, x.partidos[i].deputados[j].nome, x.partidos[i].deputados[j].genero, x.partidos[i].deputados[j].circulo);
            }
        }
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
void menu4(tParlamento *x, int np)
{
    int n,i;
    system("cls");
    printf("Por favor, insira o nome do pais (sem acentuacao e sem cedilhas):\n");
    gets((*x).pais);
    printf("\n%s :\n",(*x).pais);
    for (i=0;i<np;i++){
        printf("%s - %s \n", (*x).partidos[i].sigla, (*x).partidos[i].nome);
    }
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

void menu5(tParlamento *x, int *np)
{
    int n;
    system("cls");
    printf("Qual a sigla do novo partido?\n");
    gets((*x).partidos[(*np)].sigla);
    printf("Qual o nome do partido?\n");
    gets((*x).partidos[(*np)].nome);
    (*x).partidos[(*np)].qtd=0;
    (*np)++;
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

void menu6(tParlamento *x, int *np)
{
    system("cls");
    int n,cod,ret,i,j,cont=0;
    char str[15];
    printf("\nQue partido quer eliminar?\n");
    gets(str);
    for (i=0;i<(*np);i++){
        ret=strcmp((*x).partidos[i].sigla,str);
        if(ret==0){
            for(j=cont;j<(*np);j++){
                (*x).partidos[j]=(*x).partidos[j+1];
            }
            (*np)--;
        }
        else
            cont++;
    }
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

void menu7(tParlamento *x, int np)
{
    int n,ret,i,cont=0;
    system("cls");
    char str[15];
    printf("Em que partido quer adicionar o deputado?\n");
    gets(str);
    for (i=0;i<np;i++){
        ret=strcmp((*x).partidos[i].sigla,str);
        if(ret==0){
            printf("Qual o nome do deputado a adicionar??\n");
            gets((*x).partidos[cont].deputados[((*x).partidos[cont].qtd)].nome);
            fflush(stdin);
            printf("Qual o circulo eleitoral do deputado a adicionar??\n");
            gets((*x).partidos[cont].deputados[((*x).partidos[cont].qtd)].circulo);
            fflush(stdin);
            printf("Qual o genero do deputado a adicionar??\n");
            scanf("%c",&((*x).partidos[cont].deputados[((*x).partidos[cont].qtd)].genero));
            fflush(stdin);
            printf("Qual o codigo do deputado a adicionar??\n");
            scanf("%d",&((*x).partidos[cont].deputados[((*x).partidos[cont].qtd)].codigo));
            fflush(stdin);
            ((*x).partidos[cont].qtd)++;
        }
        else
            cont++;
    }
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

void menu8(tParlamento *x, int np)
{
    system("cls");
    char str[15];
    int n,cod,ret,i,j,k,cont1=0,cont2=0;
    printf("\nEm que partido quer eliminar o deputado?\n");
    gets(str);
    for (i=0;i<np;i++){
        ret=strcmp((*x).partidos[i].sigla,str);
        if(ret==0){
            printf("Qual o codigo do deputado a eliminar?\n");
            scanf("%d",&cod);
            fflush(stdin);
            for (j=0;j<((*x).partidos[cont1].qtd);j++){
                if(cod==((*x).partidos[cont1].deputados[j].codigo)){
                    for(k=cont2;k<((*x).partidos[cont1].qtd);k++){
                    (*x).partidos[cont1].deputados[k]=(*x).partidos[cont1].deputados[k+1];
                    }
                    ((*x).partidos[cont1].qtd)--;
                }
                else
                    cont2++;
            }
        }
        else
            cont1++;
    }
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

/*MAIN*/
int main()
{
    menu0();
}
