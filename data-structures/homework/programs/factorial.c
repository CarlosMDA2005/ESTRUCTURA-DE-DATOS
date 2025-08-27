#include<stdio.h>
#include<stdlib.h>

int factorial(int n){
if(n==0||n==1){
    return 1;
  }else{
        return n*factorial(n-1);
    }
}

int main(int argc, char *argv[]){
     if(argc<2){
        fprintf(stderr,"error debe ingresar un numero como argumento");
        return 1;
     }
        int n=atoi(argv[1]);
        long resultado=factorial(n);
         fprintf(stdout,"el factorial de %d es %d\n",n,resultado);
         return 0;

}
