#include <iostream>

using namespace std;

//Creditos de la Tarea
//Tome ayuda de lo mostrado en la clase de Programacion2 Java impartida por el Ing. Ricardo el trimestre pasado
//Vimos un ejemplo de Herencia algo similar al de esta tarea.

//Tambien estuve leyendo y tomando idea del codigo que sale en el manual de POO de C++ de la pagina Web:
//http://jamj.webcindario.com/educacion/poo/poo.pdf


//Creamos una clase publica llamada "Animal"
class Animal {
    public:
        //Definimos 2 variables una "string" y otra "int"
        //Atributos
        string nombre;
        int edad;

        //Funciones
        // Creamos 2 para asignar los atributos
        // this-> pasamos el valor a la varieble miembro de los objetos
        // "nombre" , "edad"
        void setNombre (string nombre) {this->nombre = nombre;}
        void setEdad   (int edad     ) {this->edad = edad;    }

        //Definimos 2 get para retornar los valores
        string getNombre() {return nombre; }
        int getEdad()      {return edad;   }
};

// Clase Perro que hereda las funciones y atributos de la Clase Animal
class Perro : public Animal {
    public:
        //Utilizamos el valor que pasaramos por el main a la clase Perro
        Perro(string nom, int ed)
        {
            this->nombre = nom;
            this->edad = ed;
        }
        //creamos una funcion vacia de tipo string para devolver el sonido del animal Perro
        string ladrar()
        {
            return "Guuuf Guuuf!!!";
        }
};

// Clase Gato que hereda las funciones y atributos de la Clase Animal
class Gato : public Animal {
    public:
        //Utilizamos el valor que pasaramos por el main a la clase Gato
        Gato(string nomb, int e)
        {
            this->nombre = nomb;
            this->edad = e;
        }
        //creamos una funcion vacia de tipo string para devolver el sonido del animal Gato
        string maullar()
        {
            return "Miauu Miauu!!!";
        }
};

int main()
{
    //Creamos el objeto "per" tipo Perro y le pasamos los parametros heredados
    Perro per = Perro("Neron",5);
          //Hacemos el llamado de las funciones heredadas para mostrarlas por pantalla:
          cout << "Mi perro se llama: " << per.getNombre() << endl;
          cout << "Tiene: " << per.getEdad() << " años de edad" << endl;
          //Funcion ladrar definida en la clase Perro
          cout << "Su sonido es: " << per.ladrar() << endl;
          cout << endl;

    //Creamos el objeto "gat" tipo Gato y le pasamos los parametros heredados
    Gato gat = Gato("Tom",6);
          //Hacemos el llamado de las funciones heredadas para mostrarlas por pantalla:
          cout << "Mi gato se llama: " << gat.getNombre() << endl;
          cout << "Tiene: " << gat.getEdad() << " años de edad" << endl;
          //Funcion maullar definida en la clase Gato
          cout << "Su sonido es: " << gat.maullar() << endl;


    return 0;
}
