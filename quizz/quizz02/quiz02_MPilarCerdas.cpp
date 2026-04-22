#include <iostream>
#include <string>
using namespace std;
/// Vagones del tren

void Vagones(int vagones[], int numVagones){
  for (int i = 0; i <= numVagones; i++){
    vagones[i] = 0; // los vagones inician en 0
  }
}
void carga(int vagones[, int r, int v]){
  for(int i=1; 1 <= r, i++){
    vagones[x] += v; // agregarle la carga al vagón
  }
}
void operaciones(int vagones[], int numVagones){
  int numOperaciones;
  cin >> numOperaciones;
  for ( i = 0; i < numOperaciones; i++){
    strig operacion;
    cout << "C o A, solo mayusculas"
    cin >> operacion;
    if (operacion == "A"){
      int v,r;
      cout << "Ingrese los valores " << 
      cin >> v >> r;
      carga(vagones,v,r);  
     }
     if(operacion == "C"){
      int r;
      cin >> r;
      cout << vagones[r] << endl;
     }
  }
}

int main{
  int numVagones;
  cin >> numVagones;
  int vagones[numVagones + 1];
  Vagones(vagones,numVagones);
  operaciones(vagones, numVagones);
  return 0;
}