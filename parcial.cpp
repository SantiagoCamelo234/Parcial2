#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

string read(string message);
int menu();

int main(){
int op;

    do{
        op = menu();
        switch (op)
        {
        case 1:
            cout << "Calcula nota";
            break;
        case 0: 
            cout << "Salida";
            break;        
        default:
            cout << "Opcion invalida";
            break;
        }


    }while(op!=0);

    return 0;
}







string read(string message){
    string answer;
    cout << message;
    cin >> answer;
    return answer;

}

int menu(){

    int option;
    cout << "\n[1] Calcular notas \n [0] Salir ";
    option = stoi(read("Digite opcion: "));
    return option;
}
    

