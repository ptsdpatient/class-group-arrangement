#include <iostream>
#include<ctime>


int list[7][10];
int value = 70;
int genrand(int lessThan) {
	
	int random=7;
	random = rand() % lessThan;
		return random;
}
void printlist() {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 10; j++) { std::cout << list[i][j] << ", "; }
		std::cout << std::endl;
	}
}
void initialize() {
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 10; j++) { 
			list[i][j] = 0;
		}
}
}
void assigngroup() {
	srand(time(NULL));
	int x, y;
	while (value > 0) {
		do { x = genrand(7); y = genrand(10); } while (!(list[x][y] == 0));
		
		list[x][y] = value;
		std::cout << x << "," << y << "\t" << list[x][y] << "\n";
		value--;
	}
}
int main() {
	initialize();
	assigngroup();
	printlist();
	return 0;
}
