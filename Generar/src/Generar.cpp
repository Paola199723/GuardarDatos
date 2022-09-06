//============================================================================
// Name        : Generar.cpp
// Author      : Paola Casadiegos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "registro.h"
#include <pthread.h>
#include <time.h>
#include <stdio.h>

using namespace std;
string lista [1000];
unsigned int i =0, j=0;
registro registrar;

void* Proceso(void *arg) {

	registrar.data(i, lista);


	return 0;
}


int main(int argc, char** argv) {

	pthread_t Proc_hilo;
	double time_spent = 0.0;

	clock_t begin = clock();

	for(i=0; i<=10;i++){
		pthread_create(&Proc_hilo, NULL, Proceso, NULL);
		pthread_join (Proc_hilo, NULL );

	}

	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	printf("tiempo de ejecuccion es: %f segundos\n", time_spent);

	 for(i=0; i<=1000;i++){
		 cout <<"Order["<< lista[i] <<"] "<<i+1<< endl;
	 }

	return 0;
}
