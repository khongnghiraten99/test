#include <stdio.h>
#include <stdlib.h>
    struct Diem
    {
        float x;
        float y;
    };
int main (){  
    struct Diem A;
    A.x = 5;
    A.y = 4;
    printf ("diem A: %f, %f\n", A.x, A.y); 

    int num;
   FILE *fptr;
   fptr = fopen("num.txt","r");
 
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
 
   printf("Enter num: ");
   scanf("%d",&num);
 
   fprintf(fptr,"%d",num);
   fclose(fptr);
 
   return 0;
}