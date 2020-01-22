#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

typedef struct{

  int fx,xf,pf,pfl;
  char xc;
  int condx,condp;
  int fxl;

}funcfdx;

typedef struct{

  int gx,xg,pg,pgl;
  char xc;
  int condx,condp;
  int gxl;

}funcgdx;

int main(int argc, char *argv[]) {

int nf,ng;//numero de elementos
int cont;//contador
int op;

//Calcular F(X)
    printf("Quantos elementos possui em f(x)\n");
    scanf("%d",&nf);
   
    funcfdx fdx[nf];
   
    int nfo=(nf-1);
   
    for(cont=0;cont<nf;cont++){

       printf("Digite o %d elemento de f(x)\n",cont+1);
        scanf("%d",&fdx[cont].fx);
        fflush(stdin);
   
        printf("Possui x?(1(sim)/2(nao))\n");
        scanf("%d",&fdx[cont].condx);
        fflush(stdin);
     
        if(fdx[cont].condx==1){
     
           fdx[cont].xf=1;
            fdx[cont].xc='x';
           
        }else if(fdx[cont].condx==2){
     
            fdx[cont].xf=0;
            fdx[cont].xc=' ';
            //fdx[cont].pf=1;
         
        }
       
        printf("Possui potenciação?(1(sim)/2(nao))\n");
        scanf("%d",&fdx[cont].condp);
        fflush(stdin);
     
        if(fdx[cont].condp==1){
       
            printf("E elevado a quanto?\n");
            scanf("%d",&fdx[cont].pf);
            fflush(stdin);
             
        }else if(fdx[cont].condp==2){
       
               fdx[cont].pf=1;
     
    }
                 
  }
 
     printf("\n");
     
     //Calcular Derivada F(X)
     
    for(cont=0;cont<nf;cont++){

       fdx[cont].fxl=(fdx[cont].fx*fdx[cont].pf);
     fdx[cont].pfl=fdx[cont].pf-1;
         
       if(fdx[cont].pfl==0){
     
         fdx[cont].xf==0;
         fdx[cont].xc=' ';
         
       }
     
       if(fdx[cont].xf==0){
       
         fdx[cont].fxl=0;
       
      }
         
  }
     
         
    //Calcular G(X)
   
    printf("Quantos elementos possui em g(x)\n");
    scanf("%d",&ng);
     
    funcgdx gdx[ng];
     
    int ngo=(ng-1);
   
   
   
    for(cont=0;cont<ng;cont++){
 
    printf("Digite o %d elemento de g(x)\n",cont+1);
        scanf("%d",&gdx[cont].gx);
        fflush(stdin);
   
        printf("Possui x?(1(sim)/2(nao))\n");
        scanf("%d",&gdx[cont].condx);
        fflush(stdin);
     
        if(gdx[cont].condx==1){
     
           gdx[cont].xg=1;
            gdx[cont].xc='x';
     
           
     
        }else if(gdx[cont].condx==2){
     
            gdx[cont].xg=0;
            gdx[cont].xc=' ';
            //gdx[cont].pg=1;
         
        }
       
        printf("Possui potenciação?(1(sim)/2(nao))\n");
     scanf("%d",&gdx[cont].condp);
        fflush(stdin);
     
        if(gdx[cont].condp==1){
       
            printf("E elevado a quanto?\n");
            scanf("%d",&gdx[cont].pg);
            fflush(stdin);
             
        }else if(gdx[cont].condp==2){
       
            gdx[cont].pg=1;
     
        }
       
    }
     
    printf("\n");
     
     //Calcular Derivada G(X)
     
    for(cont=0;cont<ng;cont++){

       gdx[cont].gxl=(gdx[cont].gx*gdx[cont].pg);
     gdx[cont].pgl=gdx[cont].pg-1;
         
       if(gdx[cont].pgl==0){
     
        gdx[cont].xg==0;
        gdx[cont].xc=' ';
         
       }
     
       if(gdx[cont].xg==0){
       
         gdx[cont].gxl=0;
         
      }
       
  }
   
//Printar
//f(x)
void printfx(){
 
   for(cont=0;cont<nf;cont++){
 
     printf("%d%c^%d",fdx[cont].fx,fdx[cont].xc,fdx[cont].pf);
     
     if(cont<nfo){
 
      printf("+");
 
     }  
 
   }
 
}    
    //flinha
void printfxl(){
 
   for(cont=0;cont<nf;cont++){
 
     printf("%d%c^%d",fdx[cont].fxl,fdx[cont].xc,fdx[cont].pfl);
     
     if(cont<nfo){
 
      printf("+");
 
     }
 
   }
 
}

//g(x)
void printgx(){
 
   for(cont=0;cont<ng;cont++){

     printf("%d%c^%d",gdx[cont].gx,gdx[cont].xc,gdx[cont].pg);

     if(cont<ngo){
 
       printf("+");
 
     }
 
   }
 
}

//glinha
void printgxl(){
 
   for(cont=0;cont<ng;cont++){

     printf("%d%c^%d",gdx[cont].gxl,gdx[cont].xc,gdx[cont].pgl);

     if(cont<ngo){
 
       printf("+");
 
     }
 
   }
 
}
/*
printfx();
printfxl();
printgx();
printgxl();
 */
while(1){
 
 printf("Derivadas em C\n");
 printf("Digite 1 para regra 4\n");
 printf("Digite 2 para regra 5\n");
 printf("Digite 3 para regra 6\n");
 printf("Digite 0 para SAIR\n");
 scanf("%d",&op);

    switch(op){
 
      case 1:
          //printando funcao
          printf("h(x)=(");
          //f(x)
           printfx();
          printf(")*(");
       //g(x)
        printgx();
        printf(")\n\n");
 
      //printando funcao resolvida
 
      printf("h(x)=(");
           printfxl();
      printf(")*((");
        printgx();
      printf(")+(");
        printfx();
      printf("))*(");
        printgxl();
         printf(")");
         
         printf(")\n\n");
   
      break;

      case 2:
     
        //printando funcao
             printf("h(x)=(");
           printfx();
      printf(")*(");
        printgx();
      printf(")\n\n");
 
      //printando funcao resolvida
 
      printf("h(x)=(");
           printfxl();
      printf(")*((");
        printgx();
      printf(")-(");
        printfx();
      printf("))*(");
        printgxl();
         printf(")/(");
           printgx();
         printf(")^2");
         
         printf(")\n\n");
   
      break;

      case 3:
     
        //printando funcao
             printf("h(x)=(");
           printfx();
      printf(")*(");
        printgx();
      printf(")\n\n");
 
      //printando funcao resolvida
 
      printf("h(x)=(");
           printfxl();
      printf(")*(");
        printgx();
      printf(")*(");
        printgxl();
         printf(")");
         
         printf(")\n\n");
           
      break;

      case 0:
   
         exit(1);
     
       break;
 
      default:
 
        printf("Comando invalido\n");
 
      break;

    }

}

system("pause");
return 0;

}
