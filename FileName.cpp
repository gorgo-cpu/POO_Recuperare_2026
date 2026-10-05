#include <stdio.h>
#include <malloc.h>

//fct care returneaza/calcucleaza suma elem din v
int suma(int v[5], int n) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += v[i];
	}
	return s;
}

void suma(int v[5], int n, int& s) {
	s = 0;
	for (int i = 0; i < n; i++) {
		s += v[i];
	}

}

int main() {
	int v[10];
	int x;// daca il delimitam in blocul lui, pentru ca este pe stiva,  va exista doar in blocul in care este declarat 
	int* v2; //(4 sau 8 octeti) -> PE STIVA !! doar pointerii sunt pe heap 
	v2 = (int*)malloc(5 * sizeof(int)); // heap se aloca doar prin malloc sau prin "new" in C++ ; malloc returneaza adresa 
	for (int i = 0; i < 5; i++) {
		v2[i] = i + 10;
	}
	free(v2); //no memory leaks 
	v2 = NULL; // no dangling pointers 
	return 0;
}


// conversii implicite ; conversii explicite 
// cu free dezaloc doar pe heap 
// 