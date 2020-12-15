#include <stdio.h> 
 
int a[365], v = 0, n; 

int main() 
{ 
    // citire date 
	printf("Numarul de zile : "); 
	scanf("%d", &n); 
	for (int i = 1; i < n+1; i++) 
	            { 
	                printf("Ziua %d : ", i); 
	                scanf("%d", &a[i]); 
	            } 
    // parcurgere tablou, calculare venitului 
	for (int i = 1; i < n+1; i++) 
	    v += a[i];  
	
   // afisare rezultat 
    printf("Venitul magazinul timp de %d zile este %d lei.",n,v); 
    
    return 0;
}

