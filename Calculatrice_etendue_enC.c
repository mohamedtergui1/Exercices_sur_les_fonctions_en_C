#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float addition(float a,float b);
float substraction(float a,float b);
float multi(float a,float b);
float division(float a,float b);
float powee(float a,float b);
float sqart(float a,float b);
int main()
{
menu();
void menu();
}
void menu(){
    float a,b,result;
    char s;
     printf("               !!!!!  adtion '+'\n ......\n                    !!!!  sqrt '#2'\nentrer  operateur ce =>  a  oper b  =>     ");scanf("%f%c%f",&a,&s,&b);
     switch (s){
     case '+': result=addition(a,b);break;
     case '-': result=substraction(a,b);break;
     case '*': result=multi(a,b);break;
     case '/':result= division(a,b);break;
     case '^':result= powee(a,b);break;
     case '#': result =sqart(a,b);break;
     default : result= printf("eroorr!!!!");
     }
     if (s!='#')
     printf("%0.2f%c%0.2f=%0.2f",a,s,b,result);
     else    printf("\_|%0.2f=%0.2f",a,result);

}

  float addition(float a,float b){
      return a+b;
  }
   float substraction(float a, float b ){
      return a-b;
  }
   float multi(float a,float b){
      return a*b;
  }
   float division(float a,float b){
       if (b==0)printf("error!!!!!!");
       else{
      return a/b;}
  }
   float powee(float a,float b){
      return a*a;
  }
   float sqart(float a,float b){
       if(a<0) printf("error!!!!!!");
     else { return sqrt(a);}
  }
