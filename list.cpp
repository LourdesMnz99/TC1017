#include <iostream>
#include <math.h>
using namespace std;

float A, B;

float promedio(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j){
  A=((a+b+c+d+e+f+g+h+i+j)/10);
  return A;
}

float desviacion(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j){
  B=sqrt(  (pow((a-A),2) + pow((b-A),2) + pow((c-A),2) + pow((d-A),2) + pow((e-A),2) + pow((f-A),2) + pow((g-A),2) + pow((h-A),2) + pow((i-A),2) + pow((j-A),2))/9  );
  return B;
}

int main(){
  float a, b, c, d, e, f, g, h, i, j;
  cout<<"ingresa 10 números y te diré su promedio y su desviación estándar"<<endl;
  cout<<"ingresa el primero"<<endl;
  cin>>a;
  cout<<"ingresa el segundo"<<endl;
  cin>>b;
  cout<<"ingresa el tercero"<<endl;
  cin>>c;
  cout<<"ingresa el cuarto"<<endl;
  cin>>d;
  cout<<"ingresa el quinto"<<endl;
  cin>>e;
  cout<<"ingresa el sexto"<<endl;
  cin>>f;
  cout<<"ingresa el séptimo"<<endl;
  cin>>g;
  cout<<"ingresa el octavo"<<endl;
  cin>>h;
  cout<<"ingresa el noveno"<<endl;
  cin>>i;
  cout<<"ingresa el décimo"<<endl;
  cin>>j;

  cout<<"El pomedio de esos números es: "<<promedio(a,b,c,d,e,f,g,h,i,j)<<endl;
  cout<<"Y su desviación estándar es: "<<desviacion(a,b,c,d,e,f,g,h,i,j)<<endl;

  return 0;
}
