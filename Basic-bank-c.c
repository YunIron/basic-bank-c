#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

char isim[10];
char sifre[10];
int bakiye = 10;
int girisYap(){
    printf("Kullanici adi giriniz: "); 
    scanf("%s", &isim);
    printf("\nSifre giriniz: ");
    scanf("%s", &sifre);
    return 0;
}

int parayatir(){
    int yatiralacakkmiktar;
    printf("Bakiyeniz: %d\nYatiralacak miktari giriniz: ", bakiye);
    scanf("%d", &yatiralacakkmiktar);
    bakiye = (bakiye+yatiralacakkmiktar);
}
int paracek(){
    int cekilecekmiktar;
    while (1) {
      printf("Bakiyeniz: %d\nCekilecek miktari giriniz: ", bakiye);
      scanf("%d", &cekilecekmiktar);
      if (bakiye < cekilecekmiktar){
        printf("Bakiyeniz yetersiz. Tekrar giriniz.");
        Sleep(2000);
        system("cls");
      } else {
      bakiye = (bakiye-cekilecekmiktar);
      break;
      }
    }
}

int bankInterface(){
    int choice;
    while (1) {
      system("cls");
      printf("[1] Para Yatir\n[2] Para Cek\n[3] Bakiye Goster\n[4] Cikis\n");
      scanf("%d",&choice);
      if (choice==1){
        system("cls");
        parayatir();
      } else if (choice==2){
        system("cls");
        paracek();
      } else if (choice==3){
        system("cls");
        printf("Bakiyeniz: %d", bakiye);
        Sleep(2000);
      } else if (choice==4){
        system("cls");
        printf("Cikis yapiliyor...");
        Sleep(1500);
        break;
      } else {
        system("cls");
        printf("Yanlis deger girdiniz tekrar yaziniz.");
        Sleep(2000);
      }
    }
    return 0;
}

int main(){

  char nickname[] = "deneme";
  char password[] = "12345";
  system("cls");
  girisYap();
  if (strcmp(nickname, isim) == 0 && strcmp(sifre, password) == 0){
    printf("\nGiris yapiliyor...\n");
    bankInterface();
  } else {
    printf("\nKullanici adiniz ve sifreniz yanlis. Tekrar deneyiniz.\n");
    Sleep(2000);
    main();
  }
  return 0;
}

