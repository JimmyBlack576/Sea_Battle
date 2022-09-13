#include <iostream>
#include <Windows.h>

using namespace std;

void hand(int a) {
    HANDLE h;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, (((1 << 4) | 15)));
}

void hand1(int a) {
    HANDLE h;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, (((15 << 4) | 1)));
}

int main()
{
    HANDLE h;
    h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, (((15 << 4) | 1)));
    //SetConsoleTextAttribute(h, 14);
    //cout << "Hello World!\n";
    for (int i = 0; i < 20; i++) {




        for (int j = 0; j < 20; j++) {
           // if (j < 1) {
                //hand(j);
              //  break;
            //}
            //else {
              //  hand1(1);
                cout << " 0 ";
                Sleep(10);
           // }
        }
        cout << endl;
    }

}

