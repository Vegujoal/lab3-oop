/*
 * Course: COEN 2220 - Programming 2
 * Name: [Your Name]
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Student class - exercise with TODOs
 * Due date: [Date]
 */

#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        int    id;
        double gpa;

    public:
        // ===== Resuelve estos TODO ahora (Parte C) =====

        // TODO (Parte C): Default constructor.
        // Inicializa name a "", id a 0, gpa a 0.0
        Student(){
            name = "";
            id = 0;
            gpa = 0.0;
        }
        
        // TODO (Parte C): setName(string n)
        // Solo asigna si n no esta vacio.
        void setName(string n){
            if(!n.empty())
            name = n;
        }
        // TODO (Parte C): setGpa(double g)
        // Solo asigna si g esta entre 0.0 y 4.0 (inclusive).
        // Si no es valido, imprime un mensaje de error y no cambia el valor.
        void setGpa(double g){
            if(g >= 0.0 && g <= 4.0){
                gpa = g;
            }
            else{
                cout << "Error: GPA must be between 0.0 and 4.0.\n";
            }
        }
        void setID(int i){
            id = i;
        }
        // TODO (Parte C): Getters con const: getName(), getId(), getGpa()
        string getName() const {return name;}
        int getId() const {return id;}
        double getGpa() const {return gpa;}

        // TODO (Parte C): printInfo() const
        // Imprime name, id, y gpa con formato similar a Book::printInfo()
        void printInfo() const {
            cout << "Name: " << name << "\n"
                 << "ID: " << id << "\n"
                 << "GPA: " << gpa << "\n";
        }

        // ===== No los toques todavia - les toca mas adelante =====

        // TODO (Parte D): Constructor with parameters (name, id, gpa).

        // TODO (Parte E): Destructor.
        // Imprime un mensaje indicando que el objeto Student con ese 'name' fue destruido.
};

int main() {
    // ===== Resuelve estos TODO ahora (Parte C) =====

    // TODO (Parte C): Crea un Student usando el constructor default,
    // asigna valores con los setters, e imprime con printInfo().
    Student s1;
    cout << "------------Initial Info-----------\n";
    //s1.printInfo();
    s1.setName("Abelardo");
    s1.setID(1234);
    s1.setGpa(4.1);
    s1.printInfo();



    // TODO (Parte C): Prueba setGpa() con un valor invalido (ej. 5.0)
    // y confirma que el mensaje de error aparece y el gpa no cambia.

    // ===== No lo toques todavia - le toca mas adelante =====

    // TODO (Parte D): Crea un segundo Student usando el constructor con
    // parametros, con datos dummy (ej. "Alice Smith", 1001, 3.7).

    return 0;
}