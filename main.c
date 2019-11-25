#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<unistd.h>

int main(int argc, char *argv[]) {

    int cod_menu, cod_peca, cod_dia, num_polt, soma_ent, volta, total_ent, total_val, confirm, sair;
    int i, j, k;
    int valor50 = 50;
    int valor55 = 55;
    int peca1_disp = 30, peca2_disp = 30, peca3_disp = 30, peca4_disp = 30, peca5_disp = 30, peca6_disp = 30;
    int total_int = 0, total_meia = 0, total_gra = 0, total_pub = 0, pretotali = 0, pretotalm = 0, pretotalg = 0, pretotalp = 0;

    // vetores
    char vetorx[30];
    char vetora[30];
    char vetorb[30];
    char vetorc[30];
    char vetord[30];
    char vetore[30];
    char vetorf[30];

    for (i = 0; i<30; i++) {
        vetorx[i] = 'O';
        vetora[i] = 'O';
        vetorb[i] = 'O';
        vetorc[i] = 'O';
        vetord[i] = 'O';
        vetore[i] = 'O';
        vetorf[i] = 'O';
    }

    voltar:

    printf("****************************************************\n");
    printf("********************TEATRO UNIP*********************\n");
    printf("****************************************************\n");
    printf("*                                                  *\n");
    printf("* SELECIONE UMA OPCAO ABAIXO:                      *\n");
    printf("*                                                  *\n");
    printf("* 1 - TABELA DE PRECOS                             *\n");
    printf("* 2 - FECHAMENTO DE CAIXA                          *\n");
    printf("* 3 - SAIR                                         *\n");
    printf("****************************************************\n");

    scanf("%d", &cod_menu);
    system("cls");

    int pecax_disp = 0, soma_disp = 0, entrada_int = 0, entrada_meia = 0, entrada_gra = 0, entrada_pub = 0, valorx = 0, meiax = 0, pre_compra = 0;

    int ticket_polt[30][2];

    if (cod_menu == 1) {
        printf("****************************************************\n");
        printf("* 1-SEG  2-TER  3-QUA  4=QUI  5-SEX  6-SAB  7-DOM  *\n");
        printf("* INFORME O DIA DA SEMANA:                         *\n");
        printf("****************************************************\n");

        scanf("%d", &cod_dia);
        system("cls");

        peca:
        printf("****************************************************\n");
        printf("*            TABELA DE PECAS DE TEATRO             *\n");
        printf("****************************************************\n");
        printf("\n");
        printf("|---------------------------------------------------|\n");
        printf("|CODIGO: 1                                          |\n");
        printf("|PECA: A BELA E A FERA                              |\n");
        printf("|VALOR: R$%d,00  HORARIO: 15:00  LUGARES: %0.2d     |\n", valor50, peca1_disp);
        printf("|---------------------------------------------------|\n");
        printf("|CODIGO: 2                                          |\n");
        printf("|PECA: A DIVINA COMEDIA                             |\n");
        printf("|VALOR: R$%d,00  HORARIO: 18:00  LUGARES: %0.2d     |\n", valor50, peca2_disp);
        printf("|---------------------------------------------------|\n");
        printf("|CODIGO: 3                                          |\n");
        printf("|PECA: O CORTICO                                    |\n");
        printf("|VALOR: R$%d,00  HORARIO: 18:00  LUGARES: %0.2d     |\n", valor50, peca3_disp);
        printf("|---------------------------------------------------|\n");
        printf("|CODIGO: 4                                          |\n");
        printf("|PECA: BABY SHARK                                   |\n");
        printf("|VALOR: R$%d,00  HORARIO: 12:00  LUGARES: %0.2d     |\n", valor50, peca4_disp);
        printf("|---------------------------------------------------|\n");

        if (cod_dia == 2) {
            printf("*****************************************************\n");
            printf("*PARA AS CRIANCAS DA REDE PUBLICA AS TERCAS-FERIAS  *\n");
            printf("*****************************************************\n");
            printf("\n");
            printf("|---------------------------------------------------|\n");
            printf("|CODIGO: 5                                          |\n");
            printf("|PECA: O REI LEAO                                   |\n");
            printf("|VALOR: GRATIS  HORARIO: 15:00  LUGARES: %0.2d      |\n", peca5_disp);
            printf("|---------------------------------------------------|\n");
            printf("|CODIGO: 2                                          |\n");
            printf("|PECA: A DIVINA COMEDIA                             |\n");
            printf("|VALOR: GRATIS  HORARIO: 18:00  LUGARES: %0.2d      |\n", peca6_disp);
            printf("|---------------------------------------------------|\n");
        }

        printf("*******************************************************\n");
        printf("* INFORME O CODIGO DA PECA:                           *\n");
        printf("*******************************************************\n");

        scanf("%d", &cod_peca);
        system("cls");

        // PASSA VALORES DE CADA PEÇA PARA O VETOR GENÉRICO
        switch(cod_peca) {
            case 1:
                valorx = valor50;
                meiax = valorx/2;
                pecax_disp = peca1_disp;
                for(j=0; j<30; j++) {
                    vetorx[j] = vetora[j];
                }
                break;
            case 2:
                valorx = valor50;
                meiax = valorx/2;
                pecax_disp = peca2_disp;
                for(j=0; j<30; j++) {
                    vetorx[j] = vetorb[j];
                }
                break;
            case 3:
                valorx = valor50;
                meiax = valorx/2;
                pecax_disp = peca3_disp;
                for(j=0; j<30; j++) {
                    vetorx[j] = vetorc[j];
                }
                break;
            case 4:
                valorx = valor50;
                meiax = valorx/2;
                pecax_disp = peca4_disp;
                for(j=0; j<30; j++) {
                    vetorx[j] = vetord[j];
                }
                break;
            case 5:
                valorx = valor50;
                meiax = valorx/2;
                pecax_disp = peca5_disp;
                for(j=0; j<30; j++) {
                    vetorx[j] = vetore[j];
                }
                break;
            case 6:
                valorx = valor50;
                meiax = valorx/2;
                pecax_disp = peca5_disp;
                for(j=0; j<30; j++) {
                    vetorx[j] = vetorf[j];
                }
                break;
            default: return 0;
        }

        if (cod_peca > 4 && cod_dia != 2) {
            printf("*******************************************************\n");
            printf("* CODIGO INVALIDO OU NAO ENCONTRADO                   *\n");
            printf("*******************************************************\n");
            sleep(5);
            system("cls");
            goto peca; 
        }

        if (pecax_disp == 0) {
            system("cls");
            printf("*******************************************************\n");
            printf("* INGRESSOS ESGOTADOS, SELECIONE OUTRA PECA           *\n"); 
            printf("*******************************************************\n");
            sleep(5);
            system("cls");
            goto peca; 
        }

        ingresso:
        if (cod_peca <= 4) {
            printf("********************************************************\n");
            printf("* INFORME AS QTD DE ENTRADAS: INTEIRAS, MEIAS E ISENTAS*\n"); 
            printf("********************************************************\n");
            printf("* INTEIRAS:"); 
            scanf("%d", &entrada_int);
            printf("\n* MEIAS:"); 
            scanf("%d", &entrada_meia);
            printf("\n* ISENTAS:"); 
            scanf("%d", &entrada_gra); 
        } else if (cod_peca <=6 && cod_dia == 2) {
            printf("********************************************************\n");
            printf("* INFORME A QTD DE ENTRADAS GRATIS                     *\n"); 
            printf("********************************************************\n");
            scanf("%d", &entrada_pub); 
        }

        // verifica disp de lugares
        soma_disp = entrada_int + entrada_meia + entrada_gra + entrada_pub;

        if (soma_disp > pecax_disp) {
            system("cls");
            printf("*******************************************************\n");
            printf("* PECA POSSUI APENAS %0.2d LUGARES DISPONIVEIS        *\n", pecax_disp); 
            printf("*******************************************************\n");
            sleep(5);
            system("cls");
            goto ingresso; 
        }

        // tipos de entrada 1 inteira, 2 meia, 3 idosos, 4 publica
        soma_ent = entrada_int;
        for(k=0; k<soma_ent; k++) {
            ticket_polt[k][i] = 1;
        }

        soma_ent += entrada_meia;
        for(k; k<soma_ent; k++) {
            ticket_polt[k][1] = 2;
        }

        soma_ent += entrada_gra;
        for(k; k<soma_ent; k++) {
            ticket_polt[k][1] = 3;
        }

        soma_ent += entrada_pub;
        for(k; k<soma_ent; k++) {
            ticket_polt[k][1] = 4;
        }

        system("cls");
        for(k=0; k<soma_ent; k++) {
            poltrona:
            printf("\n\n");
            printf("*******************************************************************************************\n");
            printf("* %0.2d - POLTRONAS                                                                           *\n", k+1); 
            printf("*******************************************************************************************\n");
            printf("|-----------------------------------------------------------------------------------------|\n");
            printf("| 01 [%c] | 02 [%c] | 03 [%c] | 04 [%c] | 05 [%c] | 06 [%c] | 07 [%c] | 08 [%c] | 09 [%c] | 10 [%c] |\n", vetorx[0], vetorx[1], vetorx[2], vetorx[3], vetorx[4], vetorx[5], vetorx[6], vetorx[7], vetorx[8], vetorx[9]);
            printf("|-----------------------------------------------------------------------------------------|\n");
            printf("| 11 [%c] | 12 [%c] | 13 [%c] | 14 [%c] | 15 [%c] | 16 [%c] | 17 [%c] | 18 [%c] | 19 [%c] | 20 [%c] |\n", vetorx[10], vetorx[11], vetorx[12], vetorx[13], vetorx[14], vetorx[15], vetorx[16], vetorx[17], vetorx[18], vetorx[19]);
            printf("|-----------------------------------------------------------------------------------------|\n");
            printf("| 21 [%c] | 22 [%c] | 23 [%c] | 24 [%c] | 25 [%c] | 26 [%c] | 27 [%c] | 28 [%c] | 29 [%c] | 30 [%c] |\n", vetorx[20], vetorx[21], vetorx[22], vetorx[23], vetorx[24], vetorx[25], vetorx[26], vetorx[27], vetorx[28], vetorx[29]);
            printf("|-----------------------------------------------------------------------------------------|\n");
            printf("*******************************************************************************************\n");
            printf("* TELA                                                                                    *\n"); 
            printf("* [X] OCUPADO   [O] VAGO    [+] SELECIONADO                                               *\n"); 
            printf("*******************************************************************************************\n");
            printf("* ESCOLHA O NUM. DA POLTRONA DESEJADA:"); 
            scanf("%d", &num_polt);
            printf("\n*******************************************************************************************\n");

            if (num_polt < 1 || num_polt > 30) {
                system("cls");
                printf("*******************************************************\n");
                printf("* NUM. DE POLTRONA ESCOLHIDO NAO EXISTE               *\n"); 
                printf("*******************************************************\n");
                sleep(2);
                system("cls");
                goto poltrona; 
            }

            // adiciona o num na matriz para mostrar no ticket
            ticket_polt[k][0] = num_polt;
            num_polt = num_polt - 1;

            // caso o lugar escolhido ja estaja com (X)
            if (vetorx[num_polt] == 'X') {
                system("cls");
                printf("*******************************************************\n");
                printf("* LUGAR INDISPONIVEL                                  *\n"); 
                printf("*******************************************************\n");
                sleep(2);
                system("cls");
                goto poltrona;
            }

            // caso o lugar escolhido ja estaja com (+)
            if (vetorx[num_polt] == '+') {
                system("cls");
                printf("*******************************************************\n");
                printf("* LUGAR JA SELECIONADO                                *\n"); 
                printf("*******************************************************\n");
                sleep(2);
                system("cls");
                goto poltrona;
            }

            vetorx[num_polt] = '+';
            system("cls");
        }

        // confirmacao de compra
        pre_compra = entrada_int * valorx + entrada_meia * meiax;
        printf("*******************************************************\n");
        printf("* DESEJA CONCLUIR SUA COMPRA? (1 PARA SIM, 0 PARA NAO)*\n"); 
        printf("* TOTAL DA COMPRA: R$%d,00                            *\n", pre_compra); 
        printf("*******************************************************\n");
        scanf("%d", &confirm);
        system("cls");

        if (confirm == 0) {
            printf("*******************************************************\n");
            printf("* COMPRA CANCELADA                                    *\n"); 
            printf("*******************************************************\n");
            sleep(3);
            system("cls");
            goto voltar;
        }

        printf("*******************************************************\n");
        printf("* IMPRESSAO DOS TICKETS                               *\n"); 
        printf("*******************************************************\n");
        printf("\n\n");
        printf("*******************************************************\n");
        printf("* TEATRO UNIP        DATA: %s HORA: %s *\n", __DATE__, __TIME__); 
        printf("*******************************************************\n");
        printf("*******************************************************\n");

        for(k=0; k<soma_ent; k++) {
            printf("|-----------------------------------------------------|\n"); 

            switch(cod_peca) {
                case 1:
                    printf("|PECA: A BELA E A FERA           HORARIO: 13:00       |\n"); 
                    printf("|POLTRONA: %0.2d                                         |\n", ticket_polt[k][0]); 
                    break;
                case 2:
                    printf("|PECA: A DIVINA COMEDIA          HORARIO: 18:00       |\n"); 
                    printf("|POLTRONA: %0.2d                                         |\n", ticket_polt[k][0]); 
                    break;
                case 3:
                    printf("|PECA: O CORTICO                 HORARIO: 18:00       |\n"); 
                    printf("|POLTRONA: %0.2d                                         |\n", ticket_polt[k][0]); 
                    break;
                case 4:
                    printf("|PECA: BABY SHARK                HORARIO: 12:00       |\n"); 
                    printf("|POLTRONA: %0.2d                                         |\n", ticket_polt[k][0]); 
                    break;
                case 5:
                    printf("|PECA: O REI LEAO                HORARIO: 13:00       |\n"); 
                    printf("|POLTRONA: %0.2d                                        |\n", ticket_polt[k][0]); 
                    break;
                case 6:
                    printf("|PECA: A DIVINA COMEDIA          HORARIO: 18:00       |\n"); 
                    printf("|POLTRONA: %0.2d                                         |\n", ticket_polt[k][0]); 
                    break;
            }

            printf("|-----------------------------------------------------|\n"); 

            // alterada pelo tipo de ingresso
            switch(ticket_polt[k][1]) {
                case 1:
                    printf("|PRECO: R$ %0.2d,00                           INTEIRA |\n", valorx); 
                    printf("|-----------------------------------------------------|\n"); 
                    break;
                case 2:
                    printf("|PRECO: R$ %0.2d,00                         MEIA ENTRADA |\n", meiax); 
                    printf("|-----------------------------------------------------|\n"); 
                    break;
                case 3:
                    printf("|PRECO: ISENTO                                 ISENTO |\n"); 
                    printf("|-----------------------------------------------------|\n"); 
                    break;
                case 4:
                    printf("|PRECO: GRATIS                                 GRATIS |\n"); 
                    printf("|-----------------------------------------------------|\n"); 
                    break;
            }
        }

        // transforma os lugares escolhidos na compra em ocupados
        for (j=0; j<30; j++) {
            if (vetorx[j] == '+') {
                vetorx[j] = 'X';
            }
        }

        // ingressos disponiveis
        pecax_disp = pecax_disp - soma_disp;
        // passa os valores do vetor generico para os vect de cada peca
        switch(cod_peca) {
            case 1:
                peca1_disp = pecax_disp;
                for(j=0; j<30; j++) {
                    vetora[j] = vetorx[j];
                }
                break;
            case 2:
                peca2_disp = pecax_disp;
                for(j=0; j<30; j++) {
                    vetorb[j] = vetorx[j];
                }
                break;
            case 3:
                peca3_disp = pecax_disp;
                for(j=0; j<30; j++) {
                    vetorc[j] = vetorx[j];
                }
                break;
            case 4:
                peca4_disp = pecax_disp;
                for(j=0; j<30; j++) {
                    vetord[j] = vetorx[j];
                }
                break;
            case 5:
                peca5_disp = pecax_disp;
                for(j=0; j<30; j++) {
                    vetore[j] = vetorx[j];
                }
                break;
            case 6:
                peca6_disp = pecax_disp;
                for(j=0; j<30; j++) {
                    vetorf[j] = vetorx[j];
                }
                break;
        }

        // somatorias
        pretotali = pretotali + entrada_int * valorx;
        pretotalm = pretotalm + entrada_meia * meiax;
        pretotalg = pretotalg + entrada_gra * 0;
        pretotalp = pretotalp + entrada_pub * 0;
        total_int = entrada_int + total_int;
        total_meia = entrada_meia + total_meia;
        total_gra = entrada_gra + total_gra;
        total_pub = entrada_pub + total_pub;
        total_ent = total_int + total_meia + total_gra + total_pub;
        total_val = pretotali + pretotalm + pretotalg + pretotalp;

        printf("\n\n");
        printf("*******************************************************\n");
        printf("* DIGITE 0 PARA VOLTAR AO MENU PRINCIPAL              *\n"); 
        printf("*******************************************************\n");
        scanf("%d", &volta);
        system("cls");
        goto voltar;

    } else if (cod_menu == 2) {
        // atualiza os numeros a cada compra
        printf("*******************************************************\n");
        printf("* FECHAMENTO DE CAIXA                                 *\n"); 
        printf("|-----------------------------------------------------|\n");
        printf("| INGRESSOS                    |     VALOR ARRECADADO |\n"); 
        printf("|-----------------------------------------------------|\n");
        printf("| INTEIRAS                %0.3d | R$%0.4d,00             |\n", total_int, pretotali); 
        printf("| MEIAS                   %0.3d | R$%0.4d,00             |\n", total_meia, pretotalm); 
        printf("| ISENTO                  %0.3d | R$%0.4d,00             |\n", total_gra, pretotalg); 
        printf("| GRATIS                  %0.3d | R$%0.4d,00             |\n", total_pub, pretotalp); 
        printf("|-----------------------------------------------------|\n");
        printf("|                  TOTAL: %0.3d | R$%0.4d,00             |\n", total_ent, total_val); 
        printf("|-----------------------------------------------------|\n\n");

        printf("*******************************************************\n");
        printf("* DIGITE 0 PARA VOLTAR AO MENU PRINCIPAL              *\n"); 
        printf("*******************************************************\n");
        scanf("%d", &volta);
        system("cls");
        goto voltar;

    } else {
        printf("*******************************************************\n");
        printf("* DESEJA SAIR DO PROGRAMA? (1 PARA SIM, 0 PARA NAO)         *\n"); 
        printf("*******************************************************\n");
        scanf("%c", &sair);

        if (sair == 1) {
            exit(0);
        }

        system("cls");
        goto voltar;
    }

    getch();
    return 0;
}
