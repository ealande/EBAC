#include<stdio.h>
#include <stdlib.h>
#include <string.h>

void si (int n);


int main() {
    printf ("Type the number of lines the triangle in mario game gonna have:\n");
    int n;
    scanf ("%i", &n);
    si(n);
    return 0;
    }

void si (int n){
    for (int i = 0; i < n; i++){

            for (int j = 0; j < i + 1; j++){
                printf ("#");
            }
            printf("\n");

        }
      
  }


    