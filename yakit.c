#include<stdio.h>
#include<locale.h>
void mal();
int main(){
	setlocale(LC_ALL,"Turkish");
printf("\t\t--Aracinizin km basina kac tl yaktýgýný ogrenrenme programi--\n\n");
	float benzin=27.42,motorin=27.62,litre,tutar,tutar1;
	int secim;
	printf("Aracinizin 100km'de ortalama kac litre yaktigini yaziniz = ");
	scanf("%f",&litre);
	printf("Aracinizin yakit tipini seciniz\n[1] Motorin\n[2] Benzin\n");
	scanf("%d",&secim);
	switch(secim){
		case 1:
			tutar1=(litre*motorin)/(100);
			printf("Dizel motora sahip araciniz km basina %.2f TL yakmaktadir",tutar1);
			break;
		default:
			tutar=(litre*benzin)/(100);
			printf("Benzinli motora sahip araciniz km basina %.2f TL yakmaktadir",tutar);
	}
}
void mal(){
	
}
