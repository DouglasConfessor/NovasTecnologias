#include <stdio.h>
#include <locale.h>

int main() {
  int a, b, c,      
      aux;          
		setlocale(LC_ALL,"Portuguese");
  printf("\n\tDigite tres numeros naturais: \n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c); 

  
  if (b > a){
    aux = a;
    a = b;
    b = aux;
  }
  if (c > a){
    aux = a;
    a = c;
    c = aux;
  }
  
  
  if (a * a == b * b + c * c)
    printf("O triangulo é retangulo\n");
  else 
    printf("O triangulo não é retangulo\n");
  system("pause");
  return 0;
}

