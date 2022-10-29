#include <iostream>
#include "gfx.h" // librería con las funciones gráficas
#include <cmath>
using namespace std;

void center(){
  //pixel
gfx_line(120,120,120,120);

}


void tri_draw(double Xc, double Yc, int radio, double alpha, int lados){
    double x, y, temp_x, temp_y;

    x = Xc + radio*cos(alpha);
    y = Yc + radio*sin(alpha);

 /*gfx_color(100,0,0); // red
 gfx_line(Xc,Yc,x,y);
 gfx_color(0,0,100); // blue
gfx_line(Xc,Yc,Xc + radio,Yc);
 gfx_color(0,100,0); // green
 gfx_line(x,y,Xc + radio,Yc);
*/
 temp_x = x;
 temp_y = y;


 for(int i = 0; i <= lados+1; i++){ //
 gfx_color(100,0,0); // red
 gfx_line(Xc, Yc, x, y);

 gfx_color(0,100,0); // green
 gfx_line(x,y,temp_x,temp_y);
 cout << "x " << x << " temp_x " << temp_x << endl;

 temp_x = x; // shifting  them to radius
 temp_y = y;

 x = Xc + radio * cos(alpha*i);
 y = Yc + radio * sin(alpha*i);
}

}

int main() {
 char c;
double center_x;
double center_y;
double pi = 3.14159265358979323846;
double angle_a; // no es angulos es radianos
int radio, lados;

cout << "Introduce las coordenadas del centro (x, y) :";
cin >> center_x >> center_y;
cout << endl << "Introduce el radio :";
cin >> radio;
cout << endl << "Introduce el numero de lados :";
cin >> lados;

angle_a = (360.0/lados)*(pi/180);

 gfx_open(center_x+center_x, center_y+center_x, "figura");
 gfx_color(0,200,100);


//center();
tri_draw(center_x, center_y, radio, angle_a, lados);


 // esperar hasta que se presione una tecla o botón
 c = gfx_wait();
}
