#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

class peashooter{
	public:
		std::string tipo;
		peashooter(int tp);
		void imprimir();
		
		int getdano();
		bool getvivo();
		int getvida();
		
		void setvivo(int v);
		
	private:
		void setdano(int dn);
		void setvida(int vd);
		int dano;
		bool vivo;
		int vida;
};

class zombie{
	public:
		std::string tipo;
		zombie(int tp);
		void imprimir();
		
		int getdano();
		bool getvivo();
		int getvida();
		
		void setvivo(int v);
		
	private:
		void setdano(int dn);
		void setvida(int vd);
		int dano;
		bool vivo;
		int vida;
};

//Planta
void peashooter::setvivo(int v){
	if(v==1){
		vivo=true;
	}else if(v==0){
		vivo=false;
	}
}

bool peashooter::getvivo(){
	return vivo;
}
int peashooter::getdano(){
	return dano;
}
int peashooter::getvida(){
	return vida;
}

void peashooter::setdano(int dn){
	dano = dn;
}

void peashooter::setvida(int vd){
	vida = vd;
}
peashooter::peashooter(int tp){// 1=broto, 2=mutante, 3=monstro
	if (tp == 1){
		tipo = "Broto";
		setdano(1);
		setvida(10);
	}else if(tp == 2){
		tipo = "Mutante";
		setdano(2);
		setvida(20);
	}else if(tp == 3){
		tipo ="Monstro";
		setdano(4);
		setvida(30);
	}
}

void peashooter::imprimir(){
std::cout << "Tipo: " << tipo << std::endl;
std::cout << "Dano: " << dano << std::endl;
std::cout << "Vida: " << vida << std::endl;
std::cout << "--------- " << std::endl;
}

//Zombie
zombie::zombie(int tp){// 1=Corpo, 2=Mumia, 3=lord
	if (tp == 1){
		tipo = "Corpo";
		setdano(1);
		setvida(10);
	}else if(tp == 2){
		tipo = "Mumia";
		setdano(2);
		setvida(20);
	}else if(tp == 3){
		tipo ="Lord";
		setdano(3);
		setvida(30);
	}
}

void zombie::setvivo(int v){
	if(v==1){
		vivo=true;
	}else if(v==0){
		vivo=false;
	}
}

bool zombie::getvivo(){
	return vivo;
}

int zombie::getdano(){
	return dano;
}

void zombie::setdano(int dn){
	dano = dn;
}

int zombie::getvida(){
	return vida;
}

void zombie::setvida(int vd){
	vida = vd;
}

void zombie::imprimir(){
std::cout << "Tipo: " << tipo << std::endl;
std::cout << "Dano: " << dano << std::endl;
std::cout << "Vida: " << vida << std::endl;
std::cout << "--------- " << std::endl;
}

#endif

