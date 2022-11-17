#include <iostream>

using namespace std;

void menu(); // prototipo de menu
void max_divisor(); // prototipo de divisor comun maximo
void max_multiplo(); // prototipo de multiplo comun maximo
int salir(); //prototipo salir


int main(){
    
    menu();
    return 0;
}

void menu(){
    
    int opcion = -1;
    
    for(int i = 0; i != 36; i++){
        cout << "*";
    } // 36 asteriscos linea alta
    
    cout << endl << "OPCIONES DE PROGRAMA" << endl;
    
    for(int i = 0; i != 36; i++){
        cout << "*";
    } // 36 asteriscos linea baja
    cout << endl << "1 - Calcular el maximo comun divisor de dos numeros" << endl
    << "2 - Calcular el minimo comun divisor de dos numeros" << endl
    << "0 - Salir" 
    <<  endl << "Elige opcion: ";
    
    cin >> opcion;
    
    switch(opcion){
        
        case 1: max_divisor();
        break;
        
        case 2: max_multiplo();
        break;
        
        case 0: salir();
        break; // salir
        
        default: cout << "Opcion no correcta";
        break;
    }
    
}

void max_divisor(){
int num1, num2, temp;
    
    cout << "Introduce un numero mayor que 0: ";
    cin >> num1;
    
    cout << "Introduce un numero mayor que 0: ";
    cin >> num2;
    
    if(num2 > num1){ //swap, numero que mayor es primero
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    temp = num2;
    
    do{
        

   if(num1 % temp == 0 and num2% temp == 0){
       cout << "El mcd de los dos numeros es: "<< temp;
       break;
       
}
else{
    temp--;
}
        int i = 0;
    }while(temp > 0);
}

void max_multiplo(){
    int num1, num2, temp;
   cout << "Introduce un numero mayor que 0: ";
    cin >> num1;
    
    cout << "Introduce un numero mayor que 0: ";
    cin >> num2;
    
    if(num2 > num1){ //swap, numero que mayor es primero
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    temp = num2;
    
    do{
        

   if(num1 % temp == 0 and num2% temp == 0){
       cout << "El mcm de los dos numeros es: "<< num1/temp*num2;
       break;
       
}
else{
    temp--;
}
        int i = 0;
    }while(temp > 0);
    
    
}


int salir(){
    return 0;
}
