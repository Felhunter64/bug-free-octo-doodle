/*
 * TRIEDA.hpp
 *
 *  Created on: Jul 16, 2016
 *      Author: chronos
 */

#ifndef TRIEDA_HPP_
#define TRIEDA_HPP_



class Kocka
{
public:
	Kocka(int iniCislo);
	Kocka();
	~Kocka();
	void NastavCislo(int x);
	int ZiskajCislo() const{ return Cislo; }
	void operator++() { ++Cislo; }
private:
	int Cislo;
};


#endif /* TRIEDA_HPP_ */
