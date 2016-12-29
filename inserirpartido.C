#include <stdio.h>
#include <stdlib.h>
#define MAX 50

/* Estrutura Deputado */
typedef struct D{
int codigo;
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
char pais[MAX];
tPartidos partidos;
}tParlamento;

void mostrarpartid(tParlamento x,int np){
    printf("\nMostrar Partidos:");
    int i, j;
    for (i=0;i<np;i++){
        printf("\n%s - %s - %d deputados:\n\n",x.partidos[i].sigla, x.partidos[i].nome,x.partidos[i].qtd);
    for (j=0;j<(x.partidos[i].qtd);j++){
        printf("%s\n", x.partidos[i].deputados[j].nome);
    }
    }
}

int inserirpart(tParlamento *x, int np){
    printf("Qual a sigla do novo partido?\n");
    gets((*x).partidos[np+1].sigla);
    printf("Qual o nome do partido?\n");
    gets((*x).partidos[np+1].nome);
    np=np+1;
    return np;
}


/*MAIN*/
int main()
{
    int np=3;

    /* Vetor inicial: Registo do País, os partidos do seu parlamento assim como os deputados que o compõem */
   tParlamento pt={"Portugal",{{"PS","Partido Socialista",4,{{1321,"Alexandre Tiedtke Quintanilha",'M',"Porto"},
   {1456,"Antonio Paulo Jacinto Eusebio",'M',"Faro"},{1789,"Ana Catarina Veiga Santos Mendonca Mendes",'F',"Setubal"},
   {1309,"Wanda Olavo Correa D'azevedo Guimaraes",'F',"Lisboa"}}},{"PSD","Partido Social Democrata",5,
   {{2045, "Pedro Manuel Mamede Passos Coelho",'M',"Lisboa"},{2778,"Luis Filipe Montenegro Cardoso de Morais Esteves",'M',"Aveiro"},{2356,"Maria Manuela Pereira Tender",'F',"Vila Real"},{2932,"Sara Martins Marques dos Santos Madruga da Costa",'F',"Madeira"},{2467,"Isaura Leonor Marques de Figueiredo Silva Pedro",'F',"Viseu"}}},{"BE","Bloco de Esquerda",3,{{3567,"Joana Rodrigues Mortagua",'F',"Setubal"},{3876,"Joao Manuel Duarte Vasconcelos",'M',"Faro"},{3004,"Catarina Soares Martins",'F',"Porto"}}}}};
   np=inserirpart(&pt, np);
   mostrarpartid(pt,np);
   return 0;
}
