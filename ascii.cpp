#include <iostream>
#include <cstdlib>
#include "random.cpp"
// Esta es la funcion para practicar
int startPractice(){
	std::cout<<"\n\tComenzando la practica\n";
	
	int trainType=random(1,2);
	if(trainType==1){
		// Entrenamiento de letras
		int letterType=random(1,2);
		if(letterType==1){
			//Letras mayusculas
			int ascii=random(65,90);
			std::cout<<"Di el caracter corespondiente para el codigo "<<ascii<<'\n';
			char User;
			std::cin>>User;
			if(static_cast<int>(User)==ascii){
				std::cout<<"\vFELICIDADES\n";
			}
			else{
				std::cout<<"Incorrecto\n";
			}
		}
		else{
			//letras minusculas
			int ascii=random(97,122);
			std::cout<<"Di el caracter corespondiente para el codigo "<<ascii<<'\n';
			char User;
			std::cin>>User;
			if(static_cast<int>(User)==ascii){
				std::cout<<"\vFELICIDADES\n";
			}	
			else{
				std::cout<<"Incorrecto\n";
			}
		}
	}
	else if(trainType==2){
		//Entrenamiento de caracteres
		int charType=random(1,3);
		if(charType==1){
			int ascii=random(33,47);
			std::cout<<"Di el caracter corespondiente para el codigo "<<ascii<<'\n';
			char User;
			std::cin>>User;
			if(static_cast<int>(User)==ascii){
				std::cout<<"\vFELICIDADES\n";
			}	
			else{
				std::cout<<"Incorrecto\n";
			}
		}
		else if(charType==2){
			int ascii=random(58,64);
			std::cout<<"Di el caracter corespondiente para el codigo "<<ascii<<'\n';
			char User;
			std::cin>>User;
			if(static_cast<int>(User)==ascii){
				std::cout<<"\vFELICIDADES\n";
			}	
			else{
				std::cout<<"Incorrecto\n";
			}
		}
		else{
			int ascii=random(91,96);
			std::cout<<"Di el caracter corespondiente para el codigo "<<ascii<<'\n';
			char User;
			std::cin>>User;
			if(static_cast<int>(User)==ascii){
				std::cout<<"\vFELICIDADES\n";
			}	
			else{
				std::cout<<"Incorrecto\n";
			}
		}
	}

	return 0;
}
// Esta funcion Muestra todas las letras A-Z y a-z con su respectivo codigo ASCII
int showAsciiLetters(){
	std::cout<<"Code\tCharacter\n";
	for(int i=65;i<=90;i++){
		std::cout<<i<<"\t"<<static_cast<char>(i)<<"\n";
	}
	for(int i=97;i<=122;i++){
		std::cout<<i<<"\t"<<static_cast<char>(i)<<"\n";
	}

	return 0;
}

// Esta funcion Muestra los caracteres especiales con su respectivo codigo ASCII
int showAsciiSpecChars(){
	std::cout<<"Code\tCharacter\n";

	for(int i=33;i<=47;i++){
		std::cout<<i<<"\t"<<static_cast<char>(i)<<"\n";
	}
	for(int i=58;i<=64;i++){
	 	std::cout<<i<<"\t"<<static_cast<char>(i)<<"\n";
	}
	for(int i=91;i<=96;i++){
		std::cout<<i<<"\t"<<static_cast<char>(i)<<"\n";
	}

	return 0;
}

int main(){
	std::cout<<"\n\t\tBienvenido al ASCII Learner\n";
	std::cout<<"Estas son las opciones disponibles:\n";
	std::cout<<"\t1-Salir\n\t2-Mostrar las Letras\n\t3-Mostrar caract. espec.\n\t4-Mostrar Todo\n";
	std::cout<<"\t5-Practicar\n\t6-Limpiar la pantalla(No Salir)\n";
	std::cout<<"Introduzca el numero correspondiente a la opcion deseada:";
	while(true){
		int option;
		std::cin>>option;
		if(option==1){
			std::cout<<"\n\tHatsa la Vista";
			break;
		}
		else if(option==2){
			showAsciiLetters();
		}
		else if(option==3){
			showAsciiSpecChars();
		}
		else if(option==4){
			showAsciiLetters();
			showAsciiSpecChars();
		}
		else if(option==5){
			startPractice();
		}
		else if(option==6){
			system("clear");
		}
		else{
			std::cout<<"\vOPCION NO RECONOCIDA\n";
			std::cout<<"Estas son las opciones disponibles:\n";
			std::cout<<"\t1-Salir\n\t2-Mostrar las Letras\n\t3-Mostrar caract. espec.\n\t4-Mostrar Todo\n";
			std::cout<<"\t5-Practicar\n\t6-Limpiar la pantalla(No Salir)\n";
		}

		std::cout<<"Siguiente Comando:";
	}


	return 0;
}
