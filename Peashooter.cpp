#include <iostream>
#include "Peashooter.h"
using namespace std;

int main()
{
//Planta
	peashooter *planta1=new peashooter(1);
	peashooter *planta2=new peashooter(2);
	peashooter *planta3=new peashooter(3);
	
	planta1->setvivo(1);
	
		if(planta1->getvivo()){
		cout <<"Planta viva!"<< endl;
	}else{
		cout <<"Planta morta!"<< endl;
	}
	
	planta1->imprimir();
	planta2->imprimir();
	planta3->imprimir();
	
cout << " " << std::endl;
cout << "  " << std::endl;
// Zombie

	zombie *zombie1=new zombie(1);
	zombie *zombie2=new zombie(2);
	zombie *zombie3=new zombie(3);
	
	zombie1->setvivo(1);
	
		if(zombie1->getvivo()){
		cout <<"Zombie vivo!"<< endl;
	}else{
		cout <<"Zombie morto!"<< endl;
	}
	
	zombie1->imprimir();
	zombie2->imprimir();
	zombie3->imprimir();
	

	return 0;
}

