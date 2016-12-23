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
}
