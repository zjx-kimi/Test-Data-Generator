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
int n, m[1000000], c, t;
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
	cout << "Please enter the number of Subtask groups:";
	cin >> n;
	cout << "Please enter the number of data per subtask, separated by spaces:";
	for (int i = 1; i <= n; i++) cin >> m[i];
	system ("cls");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m[i]; j++) {
			cout << "Generating Data" << i << "-" << j << ".in/out ";
			sleep (x);
			char Path_in[1000], Path_out[1000], Rand[100];
			sprintf(Rand, "echo %d %d > rand.txt", i, j);
			sprintf (Path_in, "gen.exe <rand.txt >Data%d-%d.in", i, j);
			sprintf (Path_out, "std.exe <Data%d-%d.in >Data%d-%d.out", i, j, i, j);
			system (Rand);
			system (Path_in);
			system (Path_out);
			system ("cls");
		}
	}
}
int main() {
	srand(time(0) + rand());
	cout << "Please enter the scheme you want to use\n";
	cout << "1. Slow mode, good quality\n";
	cout << "2. Fast mode, poor quality\n";
	cout << "3. Custom mode\n";
	cin >> n;
	if (n == 1) {
		user (100);
	} else if (n == 2) {
		user (10);
	} else {
		cout << "If the input number is x, then the usage time is x × test points, and the larger the x, the better the quality. \nPlease enter x:";
		int x;
		cin >> x;
		user (x);
	}
	return 0;
}
