
#include <iostream>

using namespace std;

//protoripos
void pin (int, int &ind);	//pin
void caja (int, int, int);	//caja

int
main ()
{

  int Marta = 2020;
  int Vicente = 0101;
  int inp, inp2;		//input - pin, ancho, altura
  int ind = 0;			//user index
  float precio;

  cout << "Servicio de empaquetado de bombones." << endl <<
    "Introduzca un pin de 4 digitos. Finalize con '.'" << endl;

  cin >> inp;

  pin (inp, ind);
  inp = +0;


  cin >> inp >> inp2;

  caja (inp, inp2, ind);

  float inpf = inp;
  float inp2f = inp2;

  precio = (inpf * inp2f) / 2;

  if (ind == 0)
    {
      cout << endl << "Marta, el total del servicio asciende a:" << " " <<
	precio << " " << "euros";
    }
  else if (ind == 1)
    {
      cout << endl << "Marta, el total del servicio asciende a:" << " " <<
	precio << " " << "euros";
    }


  return 0;
}


//pin function
void
pin (int i, int &ind)
{



  if (i == 2020)
    {
      cout << "Hola Marta" << endl;
      cout << "Marta introduzca ancho y el alto separados por espacios: " <<
	endl;
      ind = +0;
    }
  else if (i == 101)
    {
      cout << "Hola Vicente" << endl;
      cout << "Vicente introduzca ancho y el alto separados por espacios: " <<
	endl;
      ind = +1;
    }

}

//caja function
void
caja (int an, int al, int ind)
{
  if (ind == 0)
    {
      cout << "Marta, aqui tiene su caja" << endl;
    }
  else if (ind == 1)
    {
      cout << "Vicente, aqui tiene su caja" << endl;
    }

  int i = 0;

  for (i; i != an + 2; i++)
    {
      cout << "*";
    }

  i = +0;
  int i2 = 0;

  while (i2 != al)
    {
      cout << endl << "*";

      for (i; i != an; i++)
	{
	  cout << "0";
	  if (i == an - 1)
	    {
	      cout << "*";
	    }


	}
      i = +0;
      i2++;
    }

  cout << endl;
  for (i; i != an + 2; i++)
    {
      cout << "*";
    }

}
