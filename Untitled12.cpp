/*Kayýt giriþ-ekleme *//*Kayit Listeleme*/
#include"stdio.h"
#include"conio.h"
struct kayit_alani{
	char ad[25];
	char soyad[25];
	char adres[40];
	char tel[11];
	char satir='\n';
	}

kayit;
FILE *dosya;
main(){
	int secenek;
	int i,ks;
printf("Kayit yapmak icin 1 i tuslayiniz\n");
printf("Kayitlari listelemek icin 2 yi tuslayiniz: ");
scanf("%d",&secenek);
if (secenek==1){

	dosya=fopen ("REHBER.txt","a+");
	printf("ADI: ");
	scanf("%s",&kayit.ad);
	printf("SOYADI: ");
	scanf("%s",&kayit.soyad);
	printf("Adresi: ");
	scanf("%s",&kayit.adres);
	printf("Telefon numarasi: ");
	scanf("%s",&kayit.tel);
	printf("\n");
	&kayit.satir;
	fwrite(&kayit,sizeof(kayit),1,dosya);
	fclose(dosya);
	getch();
	return 0;
}
else if (secenek==2){
	dosya=fopen("REHBER.txt","r");
		fseek(dosya,0,2);
	    ks=ftell(dosya)/sizeof(kayit);
		for(i=0;i<ks;i++){
			fseek(dosya,i*101,0);
			fread(kayit.ad,25,1,dosya);
			fread(kayit.soyad,25,1,dosya);
			fread(kayit.adres,40,1,dosya);
			fread(kayit.tel,11,1,dosya);
			printf("%s %s %s %s\n",kayit.ad,kayit.soyad,kayit.adres,kayit.tel);
		}
		fclose(dosya);
		getch();
		return 0;
}
}



