#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int matriz[100][100];
    int tamanomapa = 5;
    string name;
    char opc;
    int px = 0, py = 0, sx = 0, sy = 0;

    cout<< "Position of player: \n";
    cin>>py>>px;
    cout << "Username: " << endl;
    cin >> name;

    sx = (rand() % 5) + 1;
    sy = (rand() % 5) + 1;

    do {
        for(int i = tamanomapa; i > 0 ; i--) {
            for(int j = 1; j <= tamanomapa; j++) {
                matriz[i][j] = 0;
                if(i == py && j == px) {
                    matriz[i][j] = 1;
                } else if(i == sy && j == sx) {
                    matriz[i][j] = 8;
                }
            }
        }

        for(int i = tamanomapa; i > 0 ; i--) {
            for(int j = 1; j <= tamanomapa; j++) {
                cout<< matriz[i][j] << " ";
            }
            cout<< endl;
        }

        cout << endl;
        cout << "     |W.|\n";
        cout << "|A.|";
        cout << " |S.|";
        cout << " |D.|\n";
        cin >> opc;

        if (opc == 'w' || opc == 'W')
        {
            py += 1;
        }
        else if (opc == 'a' || opc == 'A')
        {
            px -= 1;
        }
        else if (opc == 's' || opc == 'S')
        {
            py -= 1;
        }
        else if (opc == 'd' || opc == 'D')
        {
            px += 1;
        }
        else {
            cout<< "no es una opc de movimiento";
        }

        int lifenemy = 100, atacar, danio = 0;
        string barralife = "████████████████████";

        if(px == sx + 1 && py == sy || px == sx - 1 && py == sy || py == sy + 1 && px == sx || py == sy - 1 && px == sx) {
            int x = (rand() % 3) + 1;
            char p;
            cout << "Desea abandonar la pelea?" << endl;
            cout << "s/n: ";
            cin >> p;

            if(p == 's') {
                if(x == 2 ||x == 3) {
                    cout << "No fue posible abandonar" << endl;

                    system ("clear");

                    do {

                        if(lifenemy == 100) {
                            barralife = "████████████████████";
                        } else if(lifenemy == 90) {
                            barralife = "██████████████████░░";
                        } else if(lifenemy == 80) {
                            barralife = "████████████████░░░░";
                        } else if(lifenemy == 70) {
                            barralife = "██████████████░░░░░░";
                        } else if(lifenemy == 60) {
                            barralife = "████████████░░░░░░░░";
                        } else if(lifenemy == 50) {
                            barralife = "██████████░░░░░░░░░░";
                        } else if(lifenemy == 40) {
                            barralife = "████████░░░░░░░░░░░░";
                        } else if(lifenemy == 30) {
                            barralife = "██████░░░░░░░░░░░░░░";
                        } else if(lifenemy == 20) {
                            barralife = "████░░░░░░░░░░░░░░░░";
                        } else if(lifenemy == 10) {
                            barralife = "██░░░░░░░░░░░░░░░░░░";
                        }

                        cout << "Ｏ(≧∇≦)Ｏ" << endl;
                        cout << barralife << " " << lifenemy << endl;

                        for(int i = 0; i < 4; i++) {
                            cout << endl;
                        }

                        cout << name << endl;
                        cout << "life" << endl;
                        cout << "Atacar. 1" << endl;
                        cin >> atacar;

                        if(atacar == 1) {
                            danio = (rand() % 2) + 1;
                            if(danio == 0 ||danio == 1) {
                                cout << "-10" << endl;
                                lifenemy -= 10;
                            } else if(danio == 2) {
                                cout << "Critico -20" << endl;
                                lifenemy -= 20;
                            }

                        }
                    
                    system("clear");

                    } while(lifenemy != 0);
                    
                    break;

                } else if(x == 1 ||x == 0) {
                    cout << "Abandono la pelea!!" << endl;
                }

            } else if(p == 'n') {
                cout << "A pelear" << endl;
                system ("clear");

                    do {

                        if(lifenemy == 100) {
                            barralife = "████████████████████";
                        } else if(lifenemy == 90) {
                            barralife = "██████████████████░░";
                        } else if(lifenemy == 80) {
                            barralife = "████████████████░░░░";
                        } else if(lifenemy == 70) {
                            barralife = "██████████████░░░░░░";
                        } else if(lifenemy == 60) {
                            barralife = "████████████░░░░░░░░";
                        } else if(lifenemy == 50) {
                            barralife = "██████████░░░░░░░░░░";
                        } else if(lifenemy == 40) {
                            barralife = "████████░░░░░░░░░░░░";
                        } else if(lifenemy == 30) {
                            barralife = "██████░░░░░░░░░░░░░░";
                        } else if(lifenemy == 20) {
                            barralife = "████░░░░░░░░░░░░░░░░";
                        } else if(lifenemy == 10) {
                            barralife = "██░░░░░░░░░░░░░░░░░░";
                        }

                        cout << "Ｏ(≧∇≦)Ｏ" << endl;
                        cout << barralife << " " << lifenemy << endl;

                        for(int i = 0; i < 4; i++) {
                            cout << endl;
                        }

                        cout << name << endl;
                        cout << "life" << endl;
                        cout << "Atacar. 1" << endl;
                        cin >> atacar;

                        if(atacar == 1) {
                            danio = (rand() % 2) + 1;
                            if(danio == 0 ||danio == 1) {
                                cout << "-10" << endl;
                                lifenemy -= 10;
                            } else if(danio == 2) {
                                cout << "Critico -20" << endl;
                                lifenemy -= 20;
                            }

                        }

                    system("clear");
                    
                    } while(lifenemy != 0);
            }

        }

        system("clear");

    }
    while (py != sy || px != sx);

    return 0;
}
