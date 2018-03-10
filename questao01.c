#include<stdio.h>  
 
 int main(){  
      
   int cont,valor1,valor2;  
   printf("\nDigite o numero do intervalo 1: \t");  
   scanf("%d",&valor1);  
   printf("Digite o numero do intervalo 2: \t");  
   scanf("%d",&valor2);  
   
   if(valor2<valor1){
   	 cont=valor1;  
     valor1=valor2;  
     valor2=cont;  
   }  
   for(cont=valor1;cont<=valor2;cont++){  
     if(cont%2==0){  
       printf("%d \n",cont);  
     }   
	}
	
   system("pause");
   
   int n,i;  
   printf("\nDigite o total de numeros a comprovar multiplos de 3: \t");  
   scanf("%i", &n);
   i = 1;
   while(i<=n){
	if(i%3==0){
   		printf("%i \n", i);
   	}
	   i++;
	}
	
	system("pause");
	
	return 0;
}  
