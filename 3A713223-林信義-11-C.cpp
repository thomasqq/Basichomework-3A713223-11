#include <stdio.h> 
#include <stdlib.h> 

int main(){
 
    int x,y,z; 
    int max,among,min; 

    printf("�п�J3�Ӽƭ�:\n"); 
    printf("�ƭ� x="); scanf("%d",&x); 
    printf("�ƭ� y="); scanf("%d",&y); 
    printf("�ƭ� z="); scanf("%d",&z); 

    x > y ? (max = x, min = y) : (max = y, min = x); 
    z > max ? (among = max, max = z) : 
    z > min ? among = z : (among = min, min = z); 

    printf("max:%d among:%d min:%d\n", max, among, min); 

    system("PAUSE"); 
    return 0; 
} 
