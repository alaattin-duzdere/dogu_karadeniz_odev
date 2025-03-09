#include <stdio.h>
int main()
{

  FILE *file;

  // Create a file
  file = fopen("filename.txt", "r");
  if(file == NULL) {
    printf("Dosya Açılamadı.");
  }

  else {
    printf("Dosya Açıldı. \n");
  }
  ////////////////////////////////////////

  int girilenplaka = 0;
  printf("\nPlaka Kodu Giriniz:  ");
  scanf("%d",&girilenplaka);
  printf("\nGirdiginiz Plaka Kodu : %d\n\n",girilenplaka);

  char myString[100];
  char sehir[20];
  int plaka;
  int result = 0;
  
  while(fgets(myString ,100 , file)) {
    fscanf(file,"%s %d", &sehir, &plaka);
    //printf("\n%s %d ",&sehir, plaka);
    if(plaka == girilenplaka ){
      printf("Girmis oldugunuz %d plaka kodlu %s sehri dogu karadeniz bolgesindedir.",plaka,&sehir);
      result = 1;
      }
  }

  if(result == 0){
    printf("Girdiginiz plaka kodlu sehir doğu karadeniz bolgesinde bulunmamaktadır.");
  }
  

  // Close the file
  fclose(file);
}