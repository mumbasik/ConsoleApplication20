#include <iostream>
using namespace std;

int main()
{
    int answer;
    cout << "Choice a figure: \n";
    cout << "1) \n";
    cout << "2) \n";
    cout << "3) \n";
    cout << "4) \n";
    cout << "5) \n";
    cout << "6) \n";
    cout << "7) \n";
    cout << "8) \n";
    cout << "9) \n";
    cout << "10) \n";
    cout << "Exit (0) \n";
    cin >> answer;
    do {
        switch (answer) {
        case 1: {
            int N = 7;
            for (int i = 1; i < N; i++)
            {
                for (int j = 1; j < N; j++) {
                    if (j >= i) {
                        cout << "#";
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << "\n";
            }
        }break;
        case 2: {
            int K = 9;
            for (int i = 1; i < K; i++)
            {
                for (int j = 1; j < K; j++) {
                    if (j <= i) {

                        cout << "#";
                    }
                    else {

                        cout << " ";
                    }

                }
                cout << "\n";
            }
        } break;

        case 3: {
            int Y = 10;



            for (int i = 1; i < Y + 3; i++)
            {
                for (int j = 1; j < Y - i; j++) {



                    if (j >= i + 2) {

                        cout << "#";
                    }
                    else {

                        cout << " ";
                    }

                }
                cout << "\n";
            }

        } break;
        case 4: {
            int P = 11;
            for (int i = 1; i <= P; i++) {

                for (int j = 1; j <= P - i; j++) {
                    cout << " ";
                }


                for (int k = 1; k <= i * 2 - 1; k++) {
                    cout << "*";
                }


                cout << "\n";
            }cout << "\n";

        } break;
        case 5: {
            int X = 10;
            for (int i = 0; i < X; i++) {
                for (int j = 0; j < X; j++) {
                    if (j >= i && j < X - 1 && j >= i && j < X - 1) {
                        cout << "#";
                    }
                    else {
                        cout << " ";
                    }
                } cout << "\n";
            }


        }break;
        case 7: {
            int O = 8;
            for (int i = 1; i <= O; i++) {
                for (int j = 1; j <= O - 3; j++) {
                    if (j >= i) {
                        cout << "#";
                    }
                    else {
                        cout << " ";
                    }


                }cout << "\n";
            }
        }break;
        case 8: {
            int L = 8;
            for (int i = 1; i <= L; i++) {
                for (int j = 1; j <= L; j++) {
                    cout << "#";
                }
                for (int i = L - 1; i >= 1; i--) {
                    for (int j = 1; j <= L; j++) {
                        if (i <= j) {
                            cout << "#";
                        }
                        else {
                            cout << " ";
                        }
                    }
                }
                cout << "\n";
                break;
            }
        }
        case 9: {
            for (int i = 5; i >= 1; i--) {
                for (int j = 1; j <= 5; j++) {
                    if (j >= i) {
                        cout << "#";
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << "\n";
            }
        } break;
        case 10: {
            for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                    if (j >= i) {
                        cout << "#";
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << "\n";
            }
        }
        }
    } while (answer != 0);
 
}
