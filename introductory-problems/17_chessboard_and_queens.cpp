#include <iostream>
using namespace std;
#define N 8

int ways = 0;
int board[N][N];

void print_board() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << board[i][j] << " ";
		}
		cout << '\n';
	}
	cout << '\n';
}

void backtrack(int row, int i, int x) {
	for (int j = 0; j < N; j++)
		board[row][j] += x;
	for (int j = 0; j < N; j++)
		board[j][i] += x;
	for (int j = row, k = i; k < N && j < N && k >= 0 && j >= 0; j--, k++)
		board[j][k] += x;
	for (int j = row, k = i; k < N && j < N && k >= 0 && j >= 0; j++, k--)
		board[j][k] += x;
	for (int j = row, k = i; k < N && j < N && k >= 0 && j >= 0; j++, k++)
		board[j][k] += x;
	for (int j = row, k = i; k < N && j < N && k >= 0 && j >= 0; j--, k--)
		board[j][k] += x;
}

void search(int row) {
	// cout << row << '\n';
	// print_board();
	if (row == N) {
		ways++;
		return;
	}

	for (int i = 0; i < N; i++) {
		if (board[row][i] != 0)
			continue;
		backtrack(row, i, 1);
		search(row + 1);
		backtrack(row, i, -1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	char c;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> c;
			board[i][j] = c == '*' ? 999999 : 0;
		}
	}
	search(0);
	cout << ways << '\n';
}
