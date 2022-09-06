/*
 * registro.cpp
 *
 *  Created on: 6 sep. 2022
 *      Author: WPOSS
 */

#include "registro.h"
#include <iostream>
#include <string>
#include <string.h>
#include <random>


using namespace std;

	registro::registro(){

		this->i = 0;
		this->numRegisros = 0;


	}

	void* registro::data(int j,string *lista){
		int k =0;
		this->i = lista->size()/sizeof(lista[0][0]);
		for(k = this->i; k<j*100;k++){
			lista[k]= get_uuid();
			//cout <<"Order["<< lista[k] <<"] \n"<<k<< endl; // prints !!!Hello World!!!
			//cout <<"Order["<< lista[k] <<"] \n"<<k+1<< endl;

		}

		cout <<"------------>Total orders executed:"<< k <<"/"<<1000<< endl; // prints !!!Hello World!!!


		return 0;
	}

	string registro::get_uuid() {
		static random_device dev;
		    static mt19937 rng(dev());

		    uniform_int_distribution<int> dist(0, 15);

		    const char *v = "0123456789abcdef";
		    const bool dash[] = { 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0 };

		    string res;
		    for (int i = 0; i < 16; i++) {
		        if (dash[i]) res += "-";
		        res += v[dist(rng)];
		        res += v[dist(rng)];
		    }
		    return res;
	}
