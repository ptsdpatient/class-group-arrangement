#include<iostream>
#include<windows.h>
using namespace std;
const int x = 11;
const int y = 7;
int n=1;
int a[x],b[x],c[x],d[x],e[x],f[x],g[x];

void allotStudents2() {
	for (int i = 0; i < 70; i++) {

	}
}
void allotStudents3(int m[11]) {

}
void allotStudents() {
	for (int i = 0; i < 9; i++) {
		switch (rand() % 8) {
		case 1:a[i] = n;
			break;
		case 2:b[i] = n;
			break;
		case 3:c[i] = n;
			break;
		case 4:d[i] = n;
			break;
		case 5:e[i] = n;
			break;
		case 6:f[i] = n;
			break;
		case 7:g[i] = n;
			break;
		default:
			break;

		
		}
		n++;
	}
}
int main() {
	allotStudents();
	for (int i = 0; i < 9; i++) {
		cout<<endl << a[i]<<" "<< b[i] <<" " << c[i] <<" " << d[i] <<" " << e[i] <<" " << f[i] <<" " << g[i];
	    
	}
	return 0;
}