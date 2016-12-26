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

/*MAIN*/
int main()
{
    int a;
    tParlamento pt;
    /* Vetor inicial: Registo do País, os partidos do seu parlamento assim como os deputados que o compõem */
    //pt={"Portugal",{{"PS","Partido Socialista",86,{{1321,"Alexandre Tiedtke Quintanilha",'M',"Porto"},{1456,"Antonio Paulo Jacinto Eusebio",'M',"Faro"},{1789,"Ana Catarina Veiga Santos Mendonca Mendes",'F',"Setubal"},{1309,"Wanda Olavo Correa D'azevedo Guimaraes",'F',"Lisboa"}}},{"PSD","Partido Social Democrata",89,{{2045, "Pedro Manuel Mamede Passos Coelho",'M',"Lisboa"},{2778,"Luís Filipe Montenegro Cardoso de Morais Esteves",'M',"Aveiro"},{2356,"Maria Manuela Pereira Tender",'F',"Vila Real"},{2932,"Sara Martins Marques dos Santos Madruga da Costa",'F',"Madeira"},{2467,"Isaura Leonor Marques de Figueiredo Silva Pedro",'F',"Viseu"}}},{"BE","Bloco de Esquerda",19,{{3567,"Joana Rodrigues Mortagua",'F',"Setubal"},{3876,"Joao Manuel Duarte Vasconcelos",'M',"Faro"},{3004,"Catarina Soares Martins",'F',"Porto"}}}}};
    a=5;
    menu0(&a);
}

/*Menu Inicial*/
void menu0(int*a){
    int n,b;
    b=*a;
    system("cls");
    printf("Selecione uma opcao (utilize minusculas):\n\n");
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
    while(n!=0&&n!=1&&n!=2&&n!=3&&n!=4&&n!=5&&n!=6&&n!=7&&n!=8){
        system("cls");
        printf("Invalido. Selecione novamente a opcao:\n\n");
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
    }
    if(n==1)
        menu1(&b);
    else
        if(n==2)
            menu2();
            else
                if(n==3)
                    menu3();
                    else
                        if(n==4)
                            menu4();
                            else
                                if(n==5)
                                    menu5();
                                    else
                                        if(n==6)
                                            menu6();
                                            else
                                                if(n==7)
                                                    menu7();
                                                    else
                                                        if(n==8)
                                                            menu8();
}


/*Menu Parlamento: inserir, mostrar ou eliminar informacao do parlamento*/
void menu1(int*b){
    int n;
    system("cls");
    printf("%d",*b);
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
        menu11();
    }
    else
        if(n==2){
            system("cls");
            menu12();
        }
            else
                if(n==3){
                    system("cls");
                    menu13();
                }
                    else
                        if(n==0){
                            system("cls");
                            //menu0();
                        }
}
/*Inserir*/
void menu11(){
    int n;
    printf("Inserir\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Inserir\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    //menu1();
}
/*Mostrar*/
void menu12(){
    int n;
    printf("Mostrar\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Mostrar\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    //menu1();
}
/*Eliminar*/
void menu13(){
    int n;
    printf("Eliminar\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Eliminar\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    //menu1();
}


/*Menu Partidos: inserir, mostrar ou eliminar informacao do partido*/
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
        menu21();
    }
    else
        if(n==2){
            system("cls");
            menu22();
        }
            else
                if(n==3){
                    system("cls");
                    menu23();
                }
                    else
                        if(n==0){
                            //menu0();
                        }
}
/*Inserir*/
void menu21(){
    int n;
    printf("Inserir\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Inserir\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    menu2();
}
/*Mostrar*/
void menu22(){
    int n;
    printf("Mostrar\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Mostrar\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    menu2();
}
/*Eliminar*/
void menu23(){
    int n;
    printf("Eliminar\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Eliminar\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    menu2();
}


/*Menu Deputados: inserir, mostrar ou eliminar informacao do deputado*/
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
        menu31();
    }
    else
        if(n==2){
            system("cls");
            menu32();
        }
            else
                if(n==3){
                    system("cls");
                    menu33();
                }
                    else
                        if(n==0){
                            //menu0();
                        }
}
/*Inserir*/
void menu31(){
    int n;
    printf("Inserir\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Inserir\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    menu3();
}
/*Mostrar*/
void menu32(){
    int n;
    printf("Mostrar\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Mostrar\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    menu3();
}
/*Eliminar*/
void menu33(){
    int n;
    printf("Eliminar\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Eliminar\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    menu3();
}

/*Total de Partidos*/
void menu4(){
    int n;
    system("cls");
    printf("Total de partidos:\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Total de partidos:\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    //menu0();
}

/*Total e média de deputados do sexo feminino*/
void menu5(){
    int n;
    system("cls");
    printf("Total e media de deputados do sexo feminino:\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Total e media de deputados do sexo feminino:\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    //menu0();
}

/*Percentagem de deputados que um partido tem*/
void menu6(){
    int n;
    system("cls");
    printf("Percentagem de deputados do partido:\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Percentagem de deputados do partido:\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    //menu0();
}

/*Partido mais e menos votado*/
void menu7(){
    int n;
    system("cls");
    printf("Partido mais votado:\n");
    printf("Partido menos votado:\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
        system("cls");
        printf("Partido mais votado:\n");
        printf("Partido menos votado:\n\n");
        printf("Invalido. Pressione 0 para voltar\n");
        scanf("%d",&n);
    }
    //menu0();
}

/*Informações sobre o trabalho*/
void menu8(){system("cls");
    int n;
    printf("Trabalho pratico de APROG\n\n");
    printf("Ano letivo 2016-2017\n\n");
    printf("Autores:\n");
    printf("- Andre Moura\n");
    printf("- Alberto Santos\n");
    printf("- Miguel Mestre\n\n");
    printf("Pressione 0 para voltar\n");
    scanf("%d",&n);
    while(n!=0){
       system("cls");
       printf("Trabalho pratico de APROG\n\n");
       printf("Ano letivo 2016-2017\n\n");
       printf("Autores:\n");
       printf("- Andre Moura\n");
       printf("- Alberto Santos\n");
       printf("- Miguel Mestre\n\n");
       printf("Invalido. Pressione 0 para voltar\n");
       scanf("%d",&n);
   }
   //menu0();
}
