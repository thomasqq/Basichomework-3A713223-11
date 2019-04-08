#include <stdio.h> 
#include <stdlib.h> 

int main(){
 
    int x,y,z; 
    int max,among,min; 

    printf("叫块3计:\n"); 
    printf("计 x="); scanf("%d",&x); 
    printf("计 y="); scanf("%d",&y); 
    printf("计 z="); scanf("%d",&z); 

    x > y ? (max = x, min = y) : (max = y, min = x); 
    z > max ? (among = max, max = z) : 
    z > min ? among = z : (among = min, min = z); 

    printf("max:%d among:%d min:%d\n", max, among, min); 

    system("PAUSE"); 
    return 0; 
} 
