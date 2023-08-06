#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;
void sleep() { for (int i = 1; i <= 3; i++) { Sleep(100); cout << '.'; } return; }
int n;
int main() {
    cout << "请确保 g++.exe 已添加到环境变量\n";
    cout << "请确保已将标程写入 std.cpp 中\n";
    cout << "请确保已将数据生成器写入 gen.cpp 中\n";
    system("pause");
    system("cls");
    /*-----------------------------------*/
    cout << "正在删除文件";
    sleep();
    system("del std.exe & del gen.exe");
    system("cls");
    /*-----------------------------------*/
    cout << "正在编译标程代码";
    sleep();
    system("g++.exe std.cpp -o std.exe");
    system("cls");
    /*-----------------------------------*/
    cout << "正在编译数据生成器";
    sleep();
    system("g++.exe gen.cpp -o gen.exe");
    system("cls");
    /*-----------------------------------*/
    cout << "请输入数据组数:";
    cin >> n;
    system("cls");
    for (int i = 1; i <= n; i++) {
        cout << "正在生成 Data" << i << ".in/out ";
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
