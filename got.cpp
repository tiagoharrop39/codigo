#include <iomanip>
#include <limits>
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <windows.h>
#include <string>
#include <conio.h>

using namespace std;
 bool teleporte, teleporte2;
bool chave;
    bool botao;
    bool porta;
    bool espinho;
    bool fim;
    int vida2 = 3;
    int vida3 = 3;

	////////////////////////////////////////////////////////////////////////////
   ////////////////////////////////////////////////////////////////////////////
// FASE 3

        char map3[75][75];
    char mapP3[75][75];

    int retorno = 0;
    int playerPos3[2] = {37, 37};

    bool gameloop3 = true;
   

    void startMap3()
    {
        for (int i = 0; i < 75; i++)
        {
            for (int j = 0; j < 75; j++)
            {
                map3[i][j] = ' ';
            }
        }
        for (int i = 0; i < 75; i++)
        {
            map3[0][i] = '*';
            map3[74][i] = '*';
        }

        for (int i = 0; i < 75; i++)
        {
            map3[i][0] = '*';
        }
        for (int i = 0; i < 8; i++)
        {
            map3[8][i + 1] = '#';
            map3[i + 1][8] = '#';
            map3[i + 1][64] = '*';
        }
        for (int i = 0; i < 7; i++)
        {
            map3[1][i + 1] = '#';
            map3[i + 1][1] = '#';
            map3[8][i + 64] = '*';
        }

        for (int i = 0; i < 75; i++)
        {
            map3[i][74] = '*';
        }

        //* compartimento superior direito *//
        map3[1][50] = '*';
        map3[2][50] = '*';
        map3[3][50] = '*';
        map3[4][50] = '*';
        map3[5][50] = '*';
        map3[6][50] = '*';
        map3[7][50] = '*';
        map3[8][50] = '*';
        map3[9][50] = '*';
        map3[10][50] = '*';
        map3[11][50] = '*';
        map3[12][50] = '*';
        map3[13][50] = '*';
        map3[14][50] = '*';
        map3[15][50] = '*';
        map3[16][50] = '*';
        map3[17][50] = '*';
        map3[18][50] = '*';
        map3[19][50] = '*';
        map3[20][50] = '*';
        map3[21][50] = '*';
        map3[22][50] = '*';
        map3[23][50] = '*';
        map3[24][50] = '*';
        map3[25][50] = '*';
        map3[25][50] = '*';
        map3[25][51] = '*';
        map3[25][52] = '*';
        map3[25][53] = '*';
        map3[25][54] = '*';
        map3[25][55] = '*';
        map3[25][56] = '*';
        map3[25][57] = '*';
        map3[25][58] = '*';
        map3[25][59] = '*';
        map3[25][60] = '*';
        map3[25][61] = '*';
        map3[25][62] = '*';
        map3[25][63] = '*';
        map3[25][64] = '*';
        map3[25][65] = '*';
        map3[25][66] = '*';
        map3[25][67] = '*';
        map3[25][68] = '*';
        map3[25][69] = '*';
        map3[25][70] = '*';
        map3[25][71] = '*';
        map3[25][72] = '*';
        map3[25][73] = '*';
        map3[8][73] = '*';
        map3[8][72] = '*';
        map3[8][71] = '*';

        //* compartimento superior direito *//

        //* compartimento superior esquerdo *//
        map3[1][25] = '*';
        map3[2][25] = '*';
        map3[3][25] = '*';
        map3[4][25] = '*';
        map3[5][25] = '*';
        map3[6][25] = '*';
        map3[7][25] = '*';
        map3[8][25] = '*';
        map3[9][25] = '*';
        map3[10][25] = '*';
        map3[11][25] = '*';
        map3[12][25] = '*';
        map3[13][25] = '*';
        map3[14][25] = '*';
        map3[15][25] = '*';
        map3[16][25] = '*';
        map3[17][25] = '*';
        map3[18][25] = '*';
        map3[19][25] = '*';
        map3[20][25] = '*';
        map3[21][25] = '*';
        map3[22][25] = '*';
        map3[23][25] = '*';
        map3[24][25] = '*';
        map3[25][25] = '*';
        map3[25][1] = '*';
        map3[25][2] = '*';
        map3[25][3] = '*';
        map3[25][4] = '*';
        map3[25][5] = '*';
        map3[25][6] = '*';
        map3[25][7] = '*';
        map3[25][8] = '*';
        map3[25][9] = '*';
        map3[25][10] = '*';
        map3[25][11] = '*';
        map3[25][12] = '*';
        map3[25][13] = '*';
        map3[25][14] = '*';
        map3[25][15] = '*';
        map3[25][16] = '*';
        map3[25][17] = '*';
        map3[25][18] = '*';
        map3[25][19] = '*';
        map3[25][20] = '*';
        map3[25][21] = '*';
        map3[25][22] = '*';
        map3[25][23] = '*';
        map3[25][24] = '*';

        //* compartimento superior esquerdo *//

        //* compartimento inferior esquerdo *//
        map3[50][25] = '*';
        map3[51][25] = '*';
        map3[52][25] = '*';
        map3[53][25] = '*';
        map3[54][25] = '*';
        map3[55][25] = '*';
        map3[56][25] = '*';
        map3[57][25] = '*';
        map3[58][25] = '*';
        map3[59][25] = '*';
        map3[60][25] = '*';
        map3[61][25] = '*';
        map3[62][25] = '*';
        map3[63][25] = '*';
        map3[64][25] = '*';
        map3[65][25] = '*';
        map3[66][25] = '*';
        map3[67][25] = '*';
        map3[68][25] = '*';
        map3[69][25] = '*';
        map3[70][25] = '*';
        map3[71][25] = '*';
        map3[72][25] = '*';
        map3[73][25] = '*';
        map3[25][25] = '*';
        map3[50][1] = '*';
        map3[50][2] = '*';
        map3[50][3] = '*';
        map3[50][4] = '*';
        map3[50][5] = '*';
        map3[50][6] = '*';
        map3[50][7] = '*';
        map3[50][8] = '*';
        map3[50][9] = '*';
        map3[50][10] = '*';
        map3[50][11] = '*';
        map3[50][12] = '*';
        map3[50][13] = '*';
        map3[50][14] = '*';
        map3[50][15] = '*';
        map3[50][16] = '*';
        map3[50][17] = '*';
        map3[50][18] = '*';
        map3[50][19] = '*';
        map3[50][20] = '*';
        map3[50][21] = '*';
        map3[50][22] = '*';
        map3[50][23] = '*';
        map3[50][24] = '*';

        //* compartimento inferior esquerdo *//

        //* compartimento inferior direito *//
        map3[50][50] = '*';
        map3[51][50] = '*';
        map3[52][50] = '*';
        map3[53][50] = '*';
        map3[54][50] = '*';
        map3[55][50] = '*';
        map3[56][50] = '*';
        map3[57][50] = '*';
        map3[58][50] = '*';
        map3[59][50] = '*';
        map3[60][50] = '*';
        map3[61][50] = '*';
        map3[62][50] = '*';
        map3[63][50] = '*';
        map3[64][50] = '*';
        map3[65][50] = '*';
        map3[66][50] = '*';
        map3[67][50] = '*';
        map3[68][50] = '*';
        map3[69][50] = '*';
        map3[70][50] = '*';
        map3[71][50] = '*';
        map3[72][50] = '*';
        map3[73][50] = '*';
        map3[50][50] = '*';
        map3[50][51] = '*';
        map3[50][52] = '*';
        map3[50][53] = '*';
        map3[50][54] = '*';
        map3[50][55] = '*';
        map3[50][56] = '*';
        map3[50][57] = '*';
        map3[50][58] = '*';
        map3[50][59] = '*';
        map3[50][60] = '*';
        map3[50][61] = '*';
        map3[50][62] = '*';
        map3[50][63] = '*';
        map3[50][64] = '*';
        map3[50][65] = '*';
        map3[50][66] = '*';
        map3[50][67] = '*';
        map3[50][68] = '*';
        map3[50][69] = '*';
        map3[50][70] = '*';
        map3[50][71] = '*';
        map3[50][72] = '*';
        map3[50][73] = '*';

        //* compartimento inferior direito *//

        // map3[19][15] = '>'; dps do vilao
        map3[13][70] = '>'; // Y
        map3[7][6] = '>';   // Y
        map3[17][13] = '<'; // X
        map3[60][13] = '>'; // X
        map3[4][4] = '<';   // seguimento do vilao
        map3[4][70] = '@';
        map3[0][36] = 'D';
        map3[50][13] = 'D';
        map3[8][71] = 'D';
        map3[13][15] = 'C';
        map3[4][57] = 'c';
        map3[50][64] = '=';
        map3[60][62] = 'O';
    }

    void printMap3()
    {
        for (int i = 0; i < 75; i++)
        {
            for (int j = 0; j < 75; j++)
            {
                mapP3[i][j] = map3[i][j];

                if (botao == false and i == 24 and j == 36)
                {
                }

                else if (botao == true and i == 24 and j == 36)
                {
                    map3[i][j] = '=';
                }

                else if (chave == false and i == 2 and j == 10)
                {
                    map3[i][j] = '@';
                }
                else if (chave == true and i == 2 and j == 10)
                {
                    map3[i][j] = ' ';
                }
                else if (chave == false and i == 12 and j == 0)
                {
                    map3[i][j] = 'D';
                }
                else if (chave == true and i == 12 and j == 0)
                {
                    map3[i][j] = '=';
                }
            }
        }
        mapP3[playerPos3[0]][playerPos3[1]] = '&';

        for (int i = 0; i < 75; i++)
        {
            for (int j = 0; j < 75; j++)
            {
                cout << mapP3[i][j] << " ";
            }
            cout << endl;
        }
    }

    void movePlayer3(char input)
    {

        char p;

        switch (input)
        {
        case 'W':
        case 'w':
            if (map3[playerPos3[0] - 1][playerPos3[1]] == '*')
            {
                break;
            }
            if (map3[playerPos3[0] - 1][playerPos3[1]] == 'C')
            {
                system("cls");

                cout << "&: TE GANHEI SEU VERME!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(2000);
                map3[13][15] = ' ';

                map3[19][15] = '>';
            }
            if (map3[playerPos3[0] - 1][playerPos3[1]] == 'c')
            {
                system("cls");
                cout << "&: TE GANHEI SEU LIXO!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(1000);
                map3[4][57] = ' ';
                map3[10][57] = 'O';
            }

            if (chave == false)
            {
                if (map3[playerPos3[0] - 1][playerPos3[1]] == 'D')
                {
                    break;
                }
            }

            if (map3[playerPos3[0] - 1][playerPos3[1]] == '#')
            {
                espinho = true;
                chave = false;
                botao = false;

                cout << "voce tomou dano do espinho" << endl
                     << endl;
                cout << "agora, retornara ao inicio da fase!";
                Sleep(1000);

                playerPos3[0] = 58;
                playerPos3[1] = 36;

                espinho = false;
            }

            if (espinho == false)
            {

                playerPos3[0] -= 1;
            }

            break;

        case 's':
        case 'S':
            if (map3[playerPos3[0] + 1][playerPos3[1]] == '*')
            {
                break;
            }
            if (map3[playerPos3[0] + 1][playerPos3[1]] == 'C')
            {
                system("cls");
                cout << "&: TE GANHEI OTARIO!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(1000);
                map3[13][15] = ' ';

                map3[19][15] = '>';
            }
            if (map3[playerPos3[0] + 1][playerPos3[1]] == 'c')
            {
                system("cls");
                cout << "&: TE GANHEI IMBECIL!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(1000);
                map3[4][57] = ' ';
                map3[10][57] = 'O';
            }
            if (chave == false)
            {
                if (map3[playerPos3[0] + 1][playerPos3[1]] == 'D')
                {
                    break;
                }
            }
            if (map3[playerPos3[0] + 1][playerPos3[1]] == '#')
            {
                espinho = true;
                chave = false;
                botao = false;

                cout << "voce tomou dano do espinho" << endl
                     << endl;
                cout << "agora, retornara ao inicio da fase!";
                Sleep(1000);

                playerPos3[0] = 58;
                playerPos3[1] = 36;

                espinho = false;
            }

            if (espinho == false)
            {

                playerPos3[0] += 1;
            }

            break;

        case 'a':
        case 'A':

            if (map3[playerPos3[0]][playerPos3[1] - 1] == '*')
            {
                break;
            }
            if (map3[playerPos3[0]][playerPos3[1] - 1] == 'C')
            {
                system("cls");
                cout << "&: TE GANHEI OTARIO!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(1000);
                map3[13][15] = ' ';

                map3[19][15] = '>';
            }
            if (map3[playerPos3[0]][playerPos3[1] - 1] == 'c')
            {
                system("cls");
                cout << "&: TE GANHEI IMBECIL!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(1000);
                map3[4][57] = ' ';
                map3[10][57] = 'O';
            }

            if (chave == false)
            {
                if (map3[playerPos3[0]][playerPos3[1] - 1] == 'D')
                {
                    break;
                }
            }
            if (map3[playerPos3[0]][playerPos3[1] - 1] == '#')
            {
                espinho = true;
                chave = false;
                botao = false;
                cout << "voce tomou dano do espinho" << endl
                     << endl;
                cout << "agora, retornara ao inicio da fase!";
                Sleep(1000);

                playerPos3[0] = 58;
                playerPos3[1] = 36;

                espinho = false;
            }

            if (espinho == false)
            {
                playerPos3[1] -= 1;
            }
            break;

        case 'd':
        case 'D':

            if (map3[playerPos3[0]][playerPos3[1] + 1] == '*')
            {
                break;
            }
            if (map3[playerPos3[0]][playerPos3[1] + 1] == 'C')
            {
                system("cls");
                cout << "&: TE GANHEI OTARIO!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(1000);
                map3[13][15] = ' ';

                map3[19][15] = '>';
            }
            if (map3[playerPos3[0]][playerPos3[1] + 1] == 'c')
            {
                system("cls");
                cout << "&: TE GANHEI IMBECIL!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(1000);
                map3[4][57] = ' ';
                map3[10][57] = 'O';
            }
            if (chave == false)
            {
                if (map3[playerPos3[0]][playerPos3[1] + 1] == 'D')
                {
                    break;
                }
            }
            if (map3[playerPos3[0]][playerPos3[1] + 1] == '#')
            {
                espinho = true;
                chave = false;
                botao = false;
                cout << "voce tomou dano do espinho" << endl
                     << endl;
                cout << "agora, retornara ao inicio da fase!";
                Sleep(1000);

                playerPos3[0] = 58;
                playerPos3[1] = 36;

                espinho = false;
            }

            if (espinho == false)
            {
                playerPos3[1] += 1;
            }

            break;

        case 'i':
        case 'I':

            if (map3[playerPos3[0]][playerPos3[1]] == map3[4][70])
            {
            	
                chave = true;
                system("cls");
                cout << "VOCE ENCONTROU A CHAVE!!!!!" << endl;

                map3[0][36] = '=';
                
                map3[4][70] = ' ';
                
    
            }
            if(chave == true and map3[playerPos3[0]][playerPos3[1]]==map3[0][36]){
            	cout << "VOCE PASSOU DE FASE!!!!!" << endl;
                Sleep(1000);
                exit(0);
                
				break;
			}
            if (map3[playerPos3[0]][playerPos3[1]] == map3[60][62])
            {
                botao = true;
                system("cls");
                cout << "VOCE ENCONTROU UM BOTAO!!!!!" << endl;

                cout << "VOCE GANHOU O DIREITO DE ABRIR A PORTA QUE IRA PERMITIR QUE VOCE CHEGUE NO TELEPORTE!!!" << endl;
                
                Sleep(1000);
            }
            if(botao==true){
				map3[50][13] = '=';
			}
			if(botao==false){
				map3[50][13] = 'D';
			}
            if (map3[playerPos3[0]][playerPos3[1]] == map3[10][57])
            {
                botao = true;
                system("cls");
                cout << "PARABENS POR TER VENCIDO O INIMIGO!!!" << endl;
                cout << "VOCE ENCONTROU UM BOTAO!!!!!" << endl;

                cout << "VOCE GANHOU O DIREITO DE ABRIR A PORTA QUE IRA PERMITIR QUE VOCE CHEGUE NA CHAVE!!!" << endl;

                map3[8][71] = '=';
                Sleep(1000);
            }
            //       TELEPORT

            if ((playerPos3[0] == 19 && playerPos3[1] == 15) || (playerPos3[0] == 4 && playerPos3[1] == 4))
            {
                if (retorno == 0)
                {
                    playerPos3[0] = 4;
                    playerPos3[1] = 4;
                    retorno = 1;
                }
                else
                {
                    playerPos3[0] = 19;
                    playerPos3[1] = 15;
                    retorno = 0;
                }
            }

            if ((playerPos3[0] == 60 && playerPos3[1] == 13) || (playerPos3[0] == 17 && playerPos3[1] == 13))
            {
                if (retorno == 0)
                {
                    playerPos3[0] = 17;
                    playerPos3[1] = 13;
                    retorno = 1;
                }
                else
                {
                    playerPos3[0] = 60;
                    playerPos3[1] = 13;
                    retorno = 0;
                }
            }

            if ((playerPos3[0] == 7 && playerPos3[1] == 6) || (playerPos3[0] == 13 && playerPos3[1] == 70))
            {
                if (retorno == 0)
                {
                    playerPos3[0] = 13;
                    playerPos3[1] = 70;
                    retorno = 1;
                }
                else
                {
                    playerPos3[0] = 7;
                    playerPos3[1] = 6;
                    retorno = 0;
                }
            }

            break;
        }
    }

    int START_GAME3()
    {

        char input;
        startMap3();

        while (gameloop3)
        {
            // ESSAS FUNÇÕES REDEFINEM O TAMANHO DO TEXTO

           /* static CONSOLE_FONT_INFOEX fontex;
            fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
            HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
            GetCurrentConsoleFontEx(hOut, 0, &fontex);
            fontex.FontWeight = 12;
            fontex.dwFontSize.X = 10;
            fontex.dwFontSize.Y = 10;
            SetCurrentConsoleFontEx(hOut, NULL, &fontex);
*/
		   int vida3 = 3;
		   
		   if(vida3 = 0){
		   	cout << "VOCE FRACASSOU!" << endl << endl << "TENTE NOVAMENTE!";
		   	
			 
		   }
            printMap3();

            input = getch();

            movePlayer3(input);
            
			inicio2:;
            system("cls");
        }

        return 0;
    }
 //////////////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////////////
// FASE 2

        char map2[50][50];
    char mapP2[50][50];
    int playerPos22[2] = {45, 47};
   

    bool gameloop2 = true;
   

    void startMap2()
    {

        for (int i = 0; i < 50; i++)
        {
            for (int j = 0; j < 50; j++)
            {
                map2[i][j] = ' ';
            }
        }
        for (int i = 0; i < 50; i++)
        {
            map2[0][i] = '*';
        }

        for (int i = 0; i < 50; i++)
        {
            map2[i][0] = '*';
            map2[i][49] = '*';
            map2[i][24] = '*';
        }

        for (int i = 0; i < 50; i++)
        {
            map2[49][i] = '*';
            map2[24][i] = '*';
        }

        map2[12][24] = 'D';
        map2[36][24] = '=';
        map2[24][12] = 'D';
        map2[24][36] = 'D';
        map2[12][0] = 'D';

        map2[43][48] = '#';
        map2[1][10] = '#';
        map2[2][9] = '#';
        map2[3][8] = '#';
        map2[4][7] = '#';
        map2[1][11] = '#';
        map2[2][12] = '#';
        map2[3][13] = '#';
        map2[4][14] = '#';
        map2[5][15] = '#';
        map2[6][6] = '#';
        map2[6][7] = '#';
        map2[6][8] = '#';
        map2[6][9] = '#';
        map2[6][10] = '#';
        map2[6][11] = '#';
        map2[6][12] = '#';
        map2[6][13] = '#';
        map2[6][14] = '#';
        map2[6][15] = '#';

        map2[5][6] = 'v';
        map2[2][35] = 'V';

        map2[38][8] = 'O';

        map2[2][10] = '@';
    }

    void printMap2()
    {

        for (int i = 0; i < 50; i++)
        {
            for (int j = 0; j < 50; j++)
            {
                if (botao == false and i == 24 and j == 36)
                {

                    map2[i][j] = 'D';
                }

                else if (botao == true and i == 24 and j == 36)
                {
                    map2[i][j] = '=';
                }

                else if (chave == false and i == 2 and j == 10)
                {
                    map2[i][j] = '@';
                }
                else if (chave == true and i == 2 and j == 10)
                {
                    map2[i][j] = ' ';
                }
                else if (chave == false and i == 12 and j == 0)
                {
                    map2[i][j] = 'D';
                }
                else if (chave == true and i == 12 and j == 0)
                {
                    map2[i][j] = '=';
                }

                mapP2[i][j] = map2[i][j];
            }
        }
        mapP2[playerPos22[0]][playerPos22[1]] = '&';

        for (int i = 0; i < 50; i++)
        {
            for (int j = 0; j < 50; j++)
            {
                cout << mapP2[i][j] << " ";
            }
            cout << endl;
        }
        cout << vida2 << " vidas restantes!" << endl;
    }

    void movePlayer2(char input)
    {
        if (vida2 == 0)
        {
            system("cls");
            cout << "VOCE PERDEU TODAS AS VIDAS" << endl
                 << "AGORA VOLTARA AO MENU "
                 << "SEU MERDA!!!";
            Sleep(4000);
            system("cls");
            
        }
        else
        {

            char p;

            switch (input)
            {
            case 'W':
            case 'w':
                if (map2[playerPos22[0] - 1][playerPos22[1]] == '*')
                {
                    break;
                }
                if (map2[playerPos22[0] - 1][playerPos22[1]] == 'V')
                {
                    system("cls");

                    cout << "&: TE GANHEI OTARIO!!!!!" << endl;
                    cout << "V: voce lutou bravamente..." << endl;
                    Sleep(2000);
                    map2[2][35] = ' ';

                    map2[18][40] = 'O';
                }
                if (map2[playerPos22[0] - 1][playerPos22[1]] == 'v')
                {
                    system("cls");
                    cout << "&: TE GANHEI IMBECIL!!!!!" << endl;
                    cout << "V: voce lutou bravamente..." << endl;
                    Sleep(1000);
                    map2[5][6] = ' ';
                }
                if (chave == false)
                {
                    if (map2[playerPos22[0] - 1][playerPos22[1]] == 'D')
                    {
                        break;
                    }
                }

                if (map2[playerPos22[0] - 1][playerPos22[1]] == '#')
                {
                    espinho = true;
                    chave = false;
                    botao = false;

                    vida2 = vida2 - 1;
                    cout << "voce tomou dano do espinho" << endl
                         << endl;
                    cout << "agora, retornara ao inicio da fase!";
                    Sleep(1000);

                    playerPos22[0] = 45;
                    playerPos22[1] = 47;

                    espinho = false;
                }

                if (espinho == false)
                {

                    playerPos22[0] -= 1;
                }

                break;

            case 's':
            case 'S':
                if (map2[playerPos22[0] + 1][playerPos22[1]] == '*')
                {
                    break;
                }
                if (map2[playerPos22[0] + 1][playerPos22[1]] == 'V')
                {
                    system("cls");
                    cout << "&: TE GANHEI OTARIO!!!!!" << endl;
                    cout << "V: voce lutou bravamente..." << endl;
                    Sleep(1000);
                    map2[2][35] = ' ';
                    map2[18][40] = 'O';
                }
                if (map2[playerPos22[0] + 1][playerPos22[1]] == 'v')
                {
                    system("cls");
                    cout << "&: TE GANHEI IMBECIL!!!!!" << endl;
                    cout << "V: voce lutou bravamente..." << endl;
                    Sleep(1000);
                    map2[5][6] = ' ';
                }
                if (chave == false)
                {
                    if (map2[playerPos22[0] + 1][playerPos22[1]] == 'D')
                    {
                        break;
                    }
                }
                if (map2[playerPos22[0] + 1][playerPos22[1]] == '#')
                {
                    espinho = true;
                    chave = false;
                    botao = false;

                    vida2 = vida2 - 1;
                    playerPos22[0] = 45;
                    playerPos22[1] = 47;
                    cout << "voce tomou dano do espinho" << endl
                         << endl;
                    cout << "agora, retornara ao inicio da fase!";
                    Sleep(1000);

                    playerPos22[0] = 45;
                    playerPos22[1] = 47;
                    espinho = false;
                }

                if (espinho == false)
                {

                    playerPos22[0] += 1;
                }

                break;

            case 'a':
            case 'A':

                if (map2[playerPos22[0]][playerPos22[1] - 1] == '*')
                {
                    break;
                }
                if (map2[playerPos22[0]][playerPos22[1] - 1] == 'V')
                {
                    system("cls");
                    cout << "&: TE GANHEI OTARIO!!!!!" << endl;
                    cout << "V: voce lutou bravamente..." << endl;
                    Sleep(1000);
                    map2[2][35] = ' ';
                    map2[18][40] = 'O';
                }
                if (map2[playerPos22[0]][playerPos22[1] - 1] == 'v')
                {
                    system("cls");
                    cout << "&: TE GANHEI IMBECIL!!!!!" << endl;
                    cout << "V: voce lutou bravamente..." << endl;
                    Sleep(1000);
                    map2[5][6] = ' ';
                }

                if (chave == false)
                {
                    if (map2[playerPos22[0]][playerPos22[1] - 1] == 'D')
                    {
                        break;
                    }
                }
                if (map2[playerPos22[0]][playerPos22[1] - 1] == '#')
                {
                    espinho = true;
                    chave = false;
                    botao = false;

                    vida2 = vida2 - 1;
                    cout << "voce tomou dano do espinho" << endl
                         << endl;
                    cout << "agora, retornara ao inicio da fase!";
                    Sleep(1000);

                    playerPos22[0] = 45;
                    playerPos22[1] = 47;
                    espinho = false;
                }

                if (espinho == false)
                {
                    playerPos22[1] -= 1;
                }
                break;

            case 'd':
            case 'D':

                if (map2[playerPos22[0]][playerPos22[1] + 1] == '*')
                {
                    break;
                }
                if (map2[playerPos22[0]][playerPos22[1] + 1] == 'V')
                {
                    system("cls");
                    cout << "&: TE GANHEI OTARIO!!!!!" << endl;
                    cout << "V: voce lutou bravamente..." << endl;
                    Sleep(1000);
                    map2[5][6] = ' ';
                    map2[18][40] = 'O';
                }
                if (map2[playerPos22[0]][playerPos22[1] + 1] == 'v')
                {
                    system("cls");
                    cout << "&: TE GANHEI IMBECIL!!!!!" << endl;
                    cout << "V: voce lutou bravamente..." << endl;
                    Sleep(1000);
                    map2[5][6] = ' ';
                }
                if (chave == false)
                {
                    if (map2[playerPos22[0]][playerPos22[1] + 1] == 'D')
                    {
                        break;
                    }
                }
                if (map2[playerPos22[0]][playerPos22[1] + 1] == '#')
                {
                    espinho = true;
                    chave = false;
                    botao = false;

                    vida2 = vida2 - 1;
                    cout << "voce tomou dano do espinho" << endl
                         << endl;
                    cout << "agora, retornara ao inicio da fase!";
                    Sleep(1000);

                    playerPos22[0] = 45;
                    playerPos22[1] = 47;
                    espinho = false;
                }

                if (espinho == false)
                {
                    playerPos22[1] += 1;
                }

                break;

            case 'i':
            case 'I':

                if (map2[playerPos22[0]][playerPos22[1]] == map2[2][10])
                {
                    chave = true;
                    system("cls");
                    cout << "VOCE ENCONTROU A CHAVE!!!!!" << endl;

                    map2[12][0] = '=';
                    cout << "VOCE PASSOU DE FASE!!!!!" << endl;
                    Sleep(1000);
                    map2[2][10] = ' ';
                }
                if (map2[playerPos22[0]][playerPos22[1]] == map2[38][8])
                {
                    botao = true;
                    system("cls");
                    cout << "VOCE ENCONTROU UM BOTAO!!!!!" << endl;

                    cout << "VOCE GANHOU O DIREITO DE ABRIR A PORTA QUE IRA PERMITIR QUE VOCE CHEGUE NO VILAO!!!" << endl;
                    map2[24][36] = '=';
                    Sleep(1000);
                }
                if (map2[playerPos22[0]][playerPos22[1]] == map2[18][40])
                {
                    botao = true;
                    system("cls");
                    cout << "PARABENS POR TER VENCIDO O INIMIGO!!!" << endl;
                    cout << "VOCE ENCONTROU UM BOTAO!!!!!" << endl;
                    map2[12][24] = '=';

                    cout << "VOCE GANHOU O DIREITO DE ABRIR A PORTA QUE IRA PERMITIR QUE VOCE CHEGUE NA CHAVE!!!" << endl;

                    map2[12][24] = '=';
                    Sleep(1000);
                }
            }
        }
    }

    int START_GAME2()
    {
    	int vida2 = 3;
        char input;
        startMap2();

        while (gameloop2 and vida2>0 and vida3>0)
        {
        	
            printMap2();

            input = getch();

            movePlayer2(input);
            
			if(vida2 == 0 or vida3==0){
				exit(0);
				break;
				
			}
            system("cls");
              if (map2[playerPos22[0]][playerPos22[1]] == map2[12][0])
            {
                gameloop2 = false;
                 START_GAME3();
            }
            
        }

        return 0;
    }
   ///////////////////////////////////////////////////////////////////////////////////////
   ///////////////////////////////////////////////////////////////////////////////////////
	// FASE 1

        char map1[25][25];
    char mapP[25][25];

    int playerPos[2] = {23, 12};

    bool gameloop = true;

    int startMap(){

        for (int i = 0; i < 25; i++)
        {
            for (int j = 0; j < 25; j++)
            {
                map1[i][j] = ' ';
            }
        }
        for (int i = 0; i < 25; i++)
        {
            map1[0][i] = '*';
        }

        for (int i = 0; i < 25; i++)
        {
            map1[i][0] = '*';
            map1[i][24] = '*';
            map1[i][9] = '*';
            map1[i][15] = '*';
        }

        for (int i = 0; i < 25; i++)
        {
            map1[24][i] = '*';
        }

        map1[0][12] = 'D';

        map1[8][12] = 'V';

        map1[1][12] = '@';
    }

    void printMap()
    {
        for (int i = 0; i < 25; i++)
        {
            for (int j = 0; j < 25; j++)
            {
                mapP[i][j] = map1[i][j];
            }
        }
        mapP[playerPos[0]][playerPos[1]] = '&';

        for (int i = 0; i < 25; i++)
        {
            for (int j = 0; j < 25; j++)
            {
                cout << mapP[i][j] << " ";
            }
            cout << endl;
        }
    }

    void movePlayer(char input)
    {

        switch (input)
        {
        case 'W':
        case 'w':
            if (map1[playerPos[0] - 1][playerPos[1]] == '*')
            {
                break;
            }
            if (map1[playerPos[0] - 1][playerPos[1]] == 'V')
            {
                system("cls");

                cout << "&: TE GANHEI OTARIO!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(2000);
                map1[8][12] = ' ';
            }

            playerPos[0] -= 1;

            break;

        case 's':
        case 'S':
            if (map1[playerPos[0] + 1][playerPos[1]] == '*')
            {
                break;
            }
            if (map1[playerPos[0] + 1][playerPos[1]] == 'V')
            {
                system("cls");
                cout << "&: TE GANHEI OTARIO!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(1000);
                map1[8][12] = ' ';
            }

            playerPos[0] += 1;

            break;

        case 'a':
        case 'A':

            if (map1[playerPos[0]][playerPos[1] - 1] == '*')
            {
                break;
            }
            if (map1[playerPos[0]][playerPos[1] - 1] == 'V')
            {
                system("cls");
                cout << "&: TE GANHEI OTARIO!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(1000);
                map1[8][12] = ' ';
            }

            playerPos[1] -= 1;

            break;

        case 'd':
        case 'D':

            if (map1[playerPos[0]][playerPos[1] + 1] == '*')
            {
                break;
            }
            if (map1[playerPos[0]][playerPos[1] + 1] == 'V')
            {
                system("cls");
                cout << "&: TE GANHEI OTARIO!!!!!" << endl;
                cout << "V: voce lutou bravamente..." << endl;
                Sleep(1000);
                map1[8][12] = ' ';
            }

            playerPos[1] += 1;

            break;

        case 'I':
        case 'i':

            if (map1[playerPos[0]][playerPos[1]] == map1[1][12])
            {

                system("cls");
                cout << "VOCE ENCONTROU A CHAVE!!!!!" << endl;

                map1[0][12] = '=';
                cout << "VOCE PASSOU DE FASE!!!!!" << endl;
                Sleep(1000);
                map1[1][12] = ' ';
            }
        }
    }

    int principalmap1()
    {
        char input;
        startMap();

        while (gameloop)
        {
            printMap();

            input = getch();

            movePlayer(input);

            system("cls");

            if (map1[playerPos[0]][playerPos[1]] == map1[0][12])
            {
                gameloop = false;
                 START_GAME2();
            }
        }
    }

   

   
    
int main()
{
    int escolha;
    
    inicio:
    Sleep(2000);
	system("cls");
    cout << "WELCOME TO GAME OF THRONE!" << endl;
    cout << "the rpg game for with many challenges for the player. With the open world map." << endl;
    cout << "Now it's time to start your own adventure.Good luck!";
    system("cls");

    cout << "---------------MENU PRINCIPAL---------------" << endl;
    cout << "1-tutorial\n2-jogar\n3-sair";
    cin >> escolha;

    switch (escolha){

    case 1:
        //tutorial
                cout
            << "Para jogar nosso RPG, precisa saber como jogar." << endl
            << endl;
        cout << " W para ir para frente / nS para ir para tras / nA para ir para esquerda / nD para ir para direita ";

                    break;

    case 2:
        	//jogar
			principalmap1();
			
			//Fim de jogo nivel 1
			if(vida2==0){
					cout << "VOCE PERDEU";
				   goto inicio;	
			}
			//Inicio da fase 2
			START_GAME2();
			//Fim de jogo nivel 2
			if(vida2==0){
				
					cout << "VOCE PERDEU";
				   goto inicio;	
			}
			//Inicio da fase 3
			START_GAME3();
			//Fim de jogo nivel 3
			if(vida3==0){
				
				cout << "VOCE PERDEU";
				   goto inicio;	
				   
			}
			
			
			goto inicio;
            break;
        

    case 3:

        cout << "Ate a proxima, guerreiro.";
        break;
        default:;
    }
}
