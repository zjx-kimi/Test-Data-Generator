#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;
void sleep (int x = 100) {
	for (int i = 1; i <= 3; i++) {
		Sleep (x);
		cout << '.';
	}
	return;
}
int n, c, t;
void slow() {
	cout << "请确保 g++.exe 已添加到环境变量\n";
	cout << "请确保已将标程写入 std.cpp 中\n";
	cout << "请确保已将数据生成器写入 gen.cpp 中\n";
	system ("pause");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在删除文件";
	sleep();
	system ("del std.exe & del gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在编译标程代码";
	sleep();
	system ("g++.exe std.cpp -o std.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在编译数据生成器";
	sleep();
	system ("g++.exe gen.cpp -o gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "请输入数据组数:";
	cin >> n;
	system ("cls");
	for (int i = 1; i <= n; i++) {
		cout << "正在生成 Data" << i << ".in/out ";
		sleep();
		char Path_in[1000], Path_out[1000];
		sprintf (Path_in, "gen.exe >Data%d.in", i);
		sprintf (Path_out, "std.exe <Data%d.in >Data%d.out", i, i);
		system (Path_in);
		system (Path_out);
		system ("cls");
	}
}
void fast() {
	cout << "请确保 g++.exe 已添加到环境变量\n";
	cout << "请确保已将标程写入 std.cpp 中\n";
	cout << "请确保已将数据生成器写入 gen.cpp 中\n";
	system ("pause");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在删除文件";
	sleep (10);
	system ("del std.exe & del gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在编译标程代码";
	sleep (10);
	system ("g++.exe std.cpp -o std.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在编译数据生成器";
	sleep (10);
	system ("g++.exe gen.cpp -o gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "请输入数据组数:";
	cin >> n;
	system ("cls");
	for (int i = 1; i <= n; i++) {
		cout << "正在生成 Data" << i << ".in/out ";
		sleep (10);
		char Path_in[1000], Path_out[1000];
		sprintf (Path_in, "gen.exe >Data%d.in", i);
		sprintf (Path_out, "std.exe <Data%d.in >Data%d.out", i, i);
		system (Path_in);
		system (Path_out);
		system ("cls");
	}
}
void user (int x) {
	cout << "请确保 g++.exe 已添加到环境变量\n";
	cout << "请确保已将标程写入 std.cpp 中\n";
	cout << "请确保已将数据生成器写入 gen.cpp 中\n";
	system ("pause");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在删除文件";
	sleep (x);
	system ("del std.exe & del gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在编译标程代码";
	sleep (x);
	system ("g++.exe std.cpp -o std.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "正在编译数据生成器";
	sleep (x);
	system ("g++.exe gen.cpp -o gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "请输入数据组数:";
	cin >> n;
	system ("cls");
	for (int i = 1; i <= n; i++) {
		cout << "正在生成 Data" << i << ".in/out ";
		sleep (x);
		char Path_in[1000], Path_out[1000];
		sprintf (Path_in, "gen.exe >Data%d.in", i);
		sprintf (Path_out, "std.exe <Data%d.in >Data%d.out", i, i);
		system (Path_in);
		system (Path_out);
		system ("cls");
	}
}
int main() {
	cout << "请输入你要使用的方案\n";
	cout << "1. 慢速模式、质量好\n";
	cout << "2. 快速模式、质量差\n";
	cout << "3. 自定义模式\n";
	cin >> n;
	if (n == 1) {
		slow();
	} else if (n == 2) {
		fast();
	} else {
		cout << "输入的数为 x,那么使用时间为 x ×测试点数，质量 x 越大越好。\n请输入x:";
		int x;
		cin >> x;
		user (x);
	}
	return 0;
}
