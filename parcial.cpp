#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

string read(string message);
int menu();
void subjectsValidation(int numberOfSubjects);
void gradesBySubject(int numberOfSubjects);
double gradesValidation(double grade);
void percentageValidation();

int main(){
int op;
int numberOfSubjects;

    do{
        op = menu();
        switch (op)
        {
        case 1:
            cout << "\n Calcula nota \n";
             numberOfSubjects = stoi(read("Digite numero de materias a evaluar: "));
             subjectsValidation(numberOfSubjects);
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

void subjectsValidation(int numberOfSubjects){

    if(numberOfSubjects > 0 && numberOfSubjects < 6){
        gradesBySubject(numberOfSubjects);
        
    }else{
        do{
        cout << "El numero de materias debe estar entre 1 y 5 \n";
        numberOfSubjects = stoi(read("Digite numero de materias a evaluar: "));
        
    }while(numberOfSubjects < 0 & numberOfSubjects >5);
    }

    gradesBySubject(numberOfSubjects);


}

void gradesBySubject(int numberOfSubjects){
    double grade, gradeAccumulator;
    int i = 0;
    
    for(int i = 1; i < numberOfSubjects; i++){
        grade = stod(read("Digite nota de la materia: "));
        gradeAccumulator += gradesValidation(grade);


    }    

    

    }

    double gradesValidation(double grade){
        if(grade > 0.0 && grade < 5.1){

            return grade;


        }else{
            do{cout << "El numero de materias debe estar entre 1 y 5 \n";
        grade = stoi(read("Digite numero de materias a evaluar: "));}
        while(grade < 0.0 && grade > 5.0);}
        return grade; 

    }

    void percentageValidation(){
        int percentageSubject1, percentageSubject2
        percentageSubject1 = stoi(read("Digite porcentaje de la materia 1: "))

    }

