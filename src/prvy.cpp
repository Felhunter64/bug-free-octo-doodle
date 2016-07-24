//============================================================================
// Name        : prvy.cpp
// Author      : Martin Sulaj
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "TRIEDA.hpp"

using namespace std;


//git branch

class ProstaKruznica {
public:
	ProstaKruznica();
	ProstaKruznica(int polomer);
	~ProstaKruznica();
	ProstaKruznica(const ProstaKruznica &);
	const ProstaKruznica & operator++();
	const ProstaKruznica operator++(int priznak);
	ProstaKruznica& operator=(const ProstaKruznica &);
	void NastavPolomer(int polomer){ *polomerKruznice = polomer;}
	int ZiskajPolomer () const { return (*polomerKruznice); }
private:
	int *polomerKruznice;
};

ProstaKruznica::~ProstaKruznica(){}

inline ProstaKruznica::ProstaKruznica(){ polomerKruznice = new int(5); }

inline ProstaKruznica::ProstaKruznica(int polomer){ polomerKruznice = new int(polomer); }

ProstaKruznica::ProstaKruznica(const ProstaKruznica & ptr){
	polomerKruznice = new int(ptr.ZiskajPolomer());
}

const ProstaKruznica & ProstaKruznica::operator++(){
	++(*polomerKruznice);
	return *this;
}

const ProstaKruznica ProstaKruznica::operator++(int priznak){
	ProstaKruznica pom(*this);
	++(*polomerKruznice);
	return pom;
}

ProstaKruznica& ProstaKruznica::operator=(const ProstaKruznica & ptr){
	if(this == &ptr)
		return *this;
	delete polomerKruznice;
	polomerKruznice = new int;
	*polomerKruznice = ptr.ZiskajPolomer();
	return *this;
}

int main() {

	ProstaKruznica kruh1(6);
	ProstaKruznica kruh2 = kruh1++;
	kruh2 = kruh1++;
	kruh1 = kruh2;
	cout << "kruh1: " << kruh1.ZiskajPolomer() << " kruh2: " << kruh2.ZiskajPolomer() << endl;


	return 0;
}

