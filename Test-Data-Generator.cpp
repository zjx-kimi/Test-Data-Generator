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
	cout << "Please ensure that g++. exe has been added to the environment variable.\n";
	cout << "Please ensure that the scale has been written to std.cpp.\n";
	cout << "Please ensure that the data generator has been written to gen.cpp.\n";
	system ("pause");
	system ("cls");
	/*-----------------------------------*/
	cout << "Deleting files";
	sleep();
	system ("del std.exe & del gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Compiling standard range code";
	sleep();
	system ("g++.exe std.cpp -o std.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Compiling data generator";
	sleep();
	system ("g++.exe gen.cpp -o gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Please enter the number of data groups:";
	cin >> n;
	system ("cls");
	for (int i = 1; i <= n; i++) {
		cout << "Generating Data" << i << ".in/out ";
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
	cout << "Please ensure that g++. exe has been added to the environment variable.\n";
	cout << "Please ensure that the scale has been written to std.cpp.\n";
	cout << "Please ensure that the data generator has been written to gen.cpp.\n";
	system ("pause");
	system ("cls");
	/*-----------------------------------*/
	cout << "Deleting files";
	sleep (10);
	system ("del std.exe & del gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Compiling standard range code";
	sleep (10);
	system ("g++.exe std.cpp -o std.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Compiling data generator";
	sleep (10);
	system ("g++.exe gen.cpp -o gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Please enter the number of data groups:";
	cin >> n;
	system ("cls");
	for (int i = 1; i <= n; i++) {
		cout << "Generating Data" << i << ".in/out ";
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
	cout << "Please ensure that g++. exe has been added to the environment variable.\n";
	cout << "Please ensure that the scale has been written to std.cpp.\n";
	cout << "Please ensure that the data generator has been written to gen.cpp.\n";
	system ("pause");
	system ("cls");
	/*-----------------------------------*/
	cout << "Deleting files";
	sleep (x);
	system ("del std.exe & del gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Compiling standard range code";
	sleep (x);
	system ("g++.exe std.cpp -o std.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Compiling data generator";
	sleep (x);
	system ("g++.exe gen.cpp -o gen.exe");
	system ("cls");
	/*-----------------------------------*/
	cout << "Please enter the number of data groups:";
	cin >> n;
	system ("cls");
	for (int i = 1; i <= n; i++) {
		cout << "Generating Data" << i << ".in/out ";
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
	cout << "Please enter the scheme you want to use\n";
	cout << "1. Slow mode, good quality\n";
	cout << "2. Fast mode, poor quality\n";
	cout << "3. Custom mode\n";
	cin >> n;
	if (n == 1) {
		slow();
	} else if (n == 2) {
		fast();
	} else {
		cout << "If the input number is x, then the usage time is x × test points, and the larger the x, the better the quality. \nPlease enter x:";
		int x;
		cin >> x;
		user (x);
	}
	return 0;
}
