#include <stdio.h>
#include <stdlib.h>
#define MAX 50

/* Estrutura Deputado */
typedef struct D
{
    int codigo;
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
    char pais[MAX];
    tPartidos partidos;
} tParlamento;

void mostrarpartid(tParlamento x,int np){
    printf("\nMostrar Partidos:");
    int i, j;
    for (i=0;i<np;i++){
        printf("\n%s - %s - %d deputados:\n\n",x.partidos[i].sigla, x.partidos[i].nome,x.partidos[i].qtd);
    for (j=0;j<(x.partidos[i].qtd);j++){
        printf("%d - %s - %c - %s\n",x.partidos[i].deputados[j].codigo,x.partidos[i].deputados[j].nome,x.partidos[i].deputados[j].genero,x.partidos[i].deputados[j].circulo);
    }
    }
}

void inserirdep(tParlamento *x, int np)
{
    char str[15];
    int ret,i,cont=0;
    printf("Qual a sigla do partido?\n");
    gets(str);
    for (i=0;i<np;i++){
        ret=strcmp((*x).partidos[i].sigla,str);
        if(ret==0){
            printf("Qual o nome do deputado??\n");
            gets((*x).partidos[cont].deputados[((*x).partidos[cont].qtd)].nome);
            printf("Qual o circulo eleitoral do deputado??\n");
            gets((*x).partidos[cont].deputados[((*x).partidos[cont].qtd)].circulo);
            printf("Qual o genero do deputado??\n");
            scanf("%c",&((*x).partidos[cont].deputados[((*x).partidos[cont].qtd)].genero));
            printf("Qual o codigo do deputado??\n");
            scanf("%d",&((*x).partidos[cont].deputados[((*x).partidos[cont].qtd)].codigo));
            ((*x).partidos[cont].qtd)++;
        }
        else
            cont++;
    }

}

void inserirpart(tParlamento *x, int *np){
    printf("Qual a sigla do novo partido?\n");
    gets((*x).partidos[(*np)].sigla);
    printf("Qual o nome do partido?\n");
    gets((*x).partidos[(*np)].nome);
    (*x).partidos[(*np)].qtd=0;
    (*np)++;
}

void eliminardep(){

}

/*MAIN*/
int main()
{
    int np=3;

    /* Vetor inicial: Registo do País, os partidos do seu parlamento assim como os deputados que o compõem */
    tParlamento pt= {"Portugal",{{"PS","Partido Socialista",4,{{1321,"Alexandre Tiedtke Quintanilha",'M',"Porto"},
                    {1456,"Antonio Paulo Jacinto Eusebio",'M',"Faro"},{1789,"Ana Catarina Veiga Santos Mendonca Mendes",'F',"Setubal"},
                    {1309,"Wanda Olavo Correa D'azevedo Guimaraes",'F',"Lisboa"}
                }
            },{"PSD","Partido Social Democrata",5,
                {{2045, "Pedro Manuel Mamede Passos Coelho",'M',"Lisboa"},{2778,"Luis Filipe Montenegro Cardoso de Morais Esteves",'M',"Aveiro"},{2356,"Maria Manuela Pereira Tender",'F',"Vila Real"},{2932,"Sara Martins Marques dos Santos Madruga da Costa",'F',"Madeira"},{2467,"Isaura Leonor Marques de Figueiredo Silva Pedro",'F',"Viseu"}}
            },{"BE","Bloco de Esquerda",3,{{3567,"Joana Rodrigues Mortagua",'F',"Setubal"},{3876,"Joao Manuel Duarte Vasconcelos",'M',"Faro"},{3004,"Catarina Soares Martins",'F',"Porto"}}}
        }
    };
    inserirpart(&pt,&np);
    inserirdep(&pt,np);
    mostrarpartid(pt,np);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define MAX 50

/* Estrutura Deputado */
typedef struct D
{
    int codigo;
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
    char pais[MAX];
    tPartidos partidos;
} tParlamento;

void mostrarpartid(tParlamento x,int np){
    printf("\nMostrar Partidos:");
    int i, j;
    for (i=0;i<np;i++){
        printf("\n%s - %s - %d deputados:\n\n",x.partidos[i].sigla, x.partidos[i].nome,x.partidos[i].qtd);
    for (j=0;j<(x.partidos[i].qtd);j++){
        printf("%d - %s - %c - %s\n",x.partidos[i].deputados[j].codigo,x.partidos[i].deputados[j].nome,x.partidos[i].deputados[j].genero,x.partidos[i].deputados[j].circulo);
    }
    }
}

void inserirdep(tParlamento *x, int np)
{
    char str[15];
    int ret,i,cont=0;
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

}

void inserirpart(tParlamento *x, int *np){
    printf("Qual a sigla do novo partido?\n");
    gets((*x).partidos[(*np)].sigla);
    printf("Qual o nome do partido?\n");
    gets((*x).partidos[(*np)].nome);
    (*x).partidos[(*np)].qtd=0;
    (*np)++;
}

void eliminardep(tParlamento *x, int np){
    char str[15];
    int cod;
    int ret,i,j,k,cont1=0,cont2=0;

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
}

/*MAIN*/
int main()
{
    int np=3;

    /* Vetor inicial: Registo do País, os partidos do seu parlamento assim como os deputados que o compõem */
    tParlamento pt= {"Portugal",{{"PS","Partido Socialista",4,{{1321,"Alexandre Tiedtke Quintanilha",'M',"Porto"},
                    {1456,"Antonio Paulo Jacinto Eusebio",'M',"Faro"},{1789,"Ana Catarina Veiga Santos Mendonca Mendes",'F',"Setubal"},
                    {1309,"Wanda Olavo Correa D'azevedo Guimaraes",'F',"Lisboa"}
                }
            },{"PSD","Partido Social Democrata",5,
                {{2045, "Pedro Manuel Mamede Passos Coelho",'M',"Lisboa"},{2778,"Luis Filipe Montenegro Cardoso de Morais Esteves",'M',"Aveiro"},{2356,"Maria Manuela Pereira Tender",'F',"Vila Real"},{2932,"Sara Martins Marques dos Santos Madruga da Costa",'F',"Madeira"},{2467,"Isaura Leonor Marques de Figueiredo Silva Pedro",'F',"Viseu"}}
            },{"BE","Bloco de Esquerda",3,{{3567,"Joana Rodrigues Mortagua",'F',"Setubal"},{3876,"Joao Manuel Duarte Vasconcelos",'M',"Faro"},{3004,"Catarina Soares Martins",'F',"Porto"}}}
        }
    };
    inserirpart(&pt,&np);
    inserirdep(&pt,np);
    mostrarpartid(pt,np);
    eliminardep(&pt,np);
    mostrarpartid(pt,np);
    return 0;
}
