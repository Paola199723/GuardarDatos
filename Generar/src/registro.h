/*
 * registro.h
 *
 *  Created on: 6 sep. 2022
 *      Author: WPOSS
 */

#ifndef REGISTRO_H_
#define REGISTRO_H_

#include <iostream>
#include <string>
using namespace std;

class registro{
private:
	string id;
	int numRegisros;
	int i;
	string temporalList [1000];

public:
	registro();
	void* data(int j, string *lista);
	string get_uuid();

};



#endif /* REGISTRO_H_ */
