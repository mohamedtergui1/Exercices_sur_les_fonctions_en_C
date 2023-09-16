#include <stdio.h>
#include <stdlib.h>
#include<math.h>
float addition(float a,float b);
float substraction(float a,float b);
float multi(float a,float b);
float division(float a,float b);
float powee(float a,float b);
float sqart(float a,float b);



int menu4(  int n ,int tab[n] );
int max(int n,int tab[n]);
int min(int n,int tab[n]);
int moyen(int n,int tab[n]);


int main()
{
int  main();
 menu1();
}

void menu1(){
    int n;
 printf("1-entrer dans calculatrisse \n");
 printf("2-entrer pour choisir une tableux \n");scanf("%d",&n);
 if (n==1)menu2();
 else if(n==2)menu3();
 else {printf("qutter le program");
     return 0;
 }

}
void menu3(){
   int n;
     printf("entrer le nomber de element  de tableux : ");scanf("%d",&n);
      int tab[n];
      for (int i=0 ;i<n;i++){
        printf("entrer   tab[%d]:",i+1);scanf("%d", &tab[i]);
      }

    printf("1-trouver le max\n");
    printf("2-trouver le min\n");
    printf("3-trouver le moyenne\n");
    printf("Entrez votre choix : ");
    scanf("%d", &n);
    int result;

    if (n == 1)
        result = max(n, tab[n]);
    else if (n == 2)
        result = min(n, tab[n]);
    else if (n == 3)
        result = moyen(n, tab[n]);
    else
        printf("Choix invalide!!!\n");

    printf("Le r�sultat est : %d\n", result);
    menu1();
}





int max(int n,int tab[n]){
    int max =tab[0];
     for (int i=1;i<n;i++){
        if (tab[i]>max)
            max=tab[i];
     }
     return max ;
}






int min(int n,int tab[n]){
    int  min = tab[0];
     for (int i=1;i<n;i++){

        if (tab[i]<min)
            min=tab[i];
     }
     return min ;
}


int moyen(int n, int tab[n]){
  int   moyn=0;
     for (int i=0;i<n;i++){

       moyn+=tab[i];
     }
     return moyn/n ;

}







void menu2(){
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
