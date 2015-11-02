#include<stdio.h>// libreria E/S
int a,b,c,d,e,f,g,h,i,j;
float s;
float v;
char r;
int main()
{
	do
	{
		prinft("programa que calcule el promedio \n\n");
		printf("dame los diez numeros \n");
		scanf("%d",&a);	
		scanf("%d",&b);
		scanf("%d",&c);
		scanf("%d",&d);
		scanf("%d",&f);
		scanf("%d",&g);
		scanf("%d",&h);
		scanf("%d",&j);
		s=a+b+c+d+e+f+g+h+i+j;
		d=s/10;
		prinft("el promedio es:",d);
		prinft("¿quieres realizar otra operacion?\n 1)SI\n 2)NO\n");
		scanf("%d",r);
	}
	while(r==1);
 } 

