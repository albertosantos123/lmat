/*MAIN*/
int main()
{
    int np=3,n;
    tParlamento pt= {"Portugal",{{"PS","Partido Socialista",4,{{1321,"Alexandre Tiedtke Quintanilha",'M',"Porto"},{1456,"Antonio Paulo Jacinto Eusebio",'M',"Faro"},{1789,"Ana Catarina Veiga Santos Mendonca Mendes",'F',"Setubal"},{1309,"Wanda Olavo Correa D'azevedo Guimaraes",'F',"Lisboa"}}},{"PSD","Partido Social Democrata",5,{{2045, "Pedro Manuel Mamede Passos Coelho",'M',"Lisboa"},{2778,"Luís Filipe Montenegro Cardoso de Morais Esteves",'M',"Aveiro"},{2356,"Maria Manuela Pereira Tender",'F',"Vila Real"},{2932,"Sara Martins Marques dos Santos Madruga da Costa",'F',"Madeira"},{2467,"Isaura Leonor Marques de Figueiredo Silva Pedro",'F',"Viseu"}}},{"BE","Bloco de Esquerda",3,{{3567,"Joana Rodrigues Mortagua",'F',"Setubal"},{3876,"Joao Manuel Duarte Vasconcelos",'M',"Faro"},{3004,"Catarina Soares Martins",'F',"Porto"}}}}};
    n=menu0();
    do{
            switch(n)
            {
                case 1:
                    {
                        n=menu1();
                        switch (n){
                            case 1:
                                {
                                    n=menu11();
                                }
                            case 2:
                                {
                                    n=menu12();
                                }
                            case 3:
                                {
                                    n=menu13();
                                }
                            case 0:
                                {
                                    n=menu1();
                                }
                            default:
                                {
                                    printf("Invalido. Introduza novamente:\n");
                                    getch();
                                    fflush(stdin);
                                }
                        }
                    }
                case 2:
                    {
                        n=menu2();
                        switch(n){
                            case 1:
                                {
                                    menu21();
                                }
                            case 2:
                                {
                                    menu22();
                                }
                            case 3:
                                {
                                    menu23();
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
                case 3:
                    {
                        n=menu3();
                        switch (n){
                            case 1:
                                {
                                    menu31();
                                }
                            case 2:
                                {
                                    menu32();
                                }
                            case 3:
                                {
                                    menu33();
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
                case 4:
                    {
                        menu4();
                    }
                case 5:
                    {
                        menu5();
                    }
                case 6:
                    {
                        menu6();
                    }
                case 7:
                    {
                        menu7();
                    }
                case 8:
                    {
                        menu8();
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
    }while (n!=0);
}
