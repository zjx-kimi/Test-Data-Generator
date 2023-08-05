#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;
void sleep() { for (int i = 1; i <= 3; i++) { Sleep(100); cout << '.'; } return; }
int n;
int main() {
    cout << "Please ensure that g++. exe has been added to the environment variable.\n";
    cout << "Please ensure that the scale has been written to std.cpp.\n";
    cout << "Please ensure that the data generator has been written to gen.cpp.\n";
    system("pause");
    system("cls");
    /*-----------------------------------*/
    cout << "Deleting files";
    sleep();
    system("del std.exe & del gen.exe");
    system("cls");
    /*-----------------------------------*/
    cout << "Compiling standard range code";
    sleep();
    system("g++.exe std.cpp -o std.exe");
    system("cls");
    /*-----------------------------------*/
    cout << "Compiling data generator";
    sleep();
    system("g++.exe gen.cpp -o gen.exe");
    system("cls");
    /*-----------------------------------*/
    cout << "Please enter the number of data groups:";
    cin >> n;
    system("cls");
    for (int i = 1; i <= n; i++) {
            cout << "Generating Data" << i << ".in/out ";
        sleep();
        char Path_in[1000], Path_out[1000];
        sprintf(Path_in , "gen.exe >Data%d.in", i); 
        sprintf(Path_out, "std.exe <Data%d.in >Data%d.out", i,i); 
        system(Path_in);
        system(Path_out);
        system("cls");
    }
    return 0;
}
