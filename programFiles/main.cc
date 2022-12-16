#include<iostream>
#include<fstream>
using namespace std;

void logo(){
	cout<<endl;
	cout<<"  #####                          #######                    ######                                            "<<endl;
	cout<<" #     #   ##   #    # ######    #       # #      ######    #     # #####   ####   ####  #####    ##   #    # "<<endl;
	cout<<" #        #  #  #    # #         #       # #      #         #     # #    # #    # #    # #    #  #  #  ##  ## "<<endl;
	cout<<"  #####  #    # #    # #####     #####   # #      #####     ######  #    # #    # #      #    # #    # # ## # "<<endl;
	cout<<"       # ###### #    # #         #       # #      #         #       #####  #    # #  ### #####  ###### #    # "<<endl;
	cout<<" #     # #    #  #  #  #         #       # #      #         #       #   #  #    # #    # #   #  #    # #    # "<<endl;
	cout<<"  #####  #    #   ##   ######    #       # ###### ######    #       #    #  ####   ####  #    # #    # #    # "<<endl;
	cout<<endl;
}

void showMenu(){
	cout<<"1. Save saveFile"<<endl;
	cout<<"2. Download saveFile"<<endl;
	cout<<"3. List saved saveFiles"<<endl;
	cout<<"4. Check drive API"<<endl;
	cout<<"5. Change drive API"<<endl;
	cout<<"6. CLOSE"<<endl;
}

int main(){
	ifstream fichero("programFiles/drive_api.ini");
	string lineaEntera;
	string api;
	char option;
	if(fichero.is_open()){
		getline(fichero,lineaEntera);
		bool igualEncontrado=false;
		for(unsigned int i=0;i<lineaEntera.length();i++){
			if(lineaEntera[i]=='=')
				igualEncontrado=true;
			if(igualEncontrado && lineaEntera[i]!='=')
				api+=lineaEntera[i];
		}
		logo();
		do{
			cout<<endl;
			showMenu();
			cout<<"Elige un opción: ";
			cin>>option;
		}while(option!='6');
		
	}
	return 0;
}
