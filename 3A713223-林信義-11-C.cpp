#include <stdio.h> 
#include <stdlib.h> 

int main(){
 
    int x,y,z; 
    int max,among,min; 

    printf("請輸入3個數值:\n"); 
    printf("數值 x="); scanf("%d",&x); 
    printf("數值 y="); scanf("%d",&y); 
    printf("數值 z="); scanf("%d",&z); 

    x > y ? (max = x, min = y) : (max = y, min = x); 
    z > max ? (among = max, max = z) : 
    z > min ? among = z : (among = min, min = z); 

    printf("max:%d among:%d min:%d\n", max, among, min); 

    system("PAUSE"); 
    return 0; 
} 
