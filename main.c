#include <stdio.h>
int main() {

  FILE *file;

  // Open File
  file = fopen("filename.txt", "r");
  if (file == NULL) {
    printf("Dosya Açılamadı.");
  }

  else {
    printf("Dosya Açıldı. \n");
  }

  int currentCode;
  char currentLine[100];
  char sehir[20];
  int plaka;
  while (1) {
    file = fopen("filename.txt", "r");
    printf("\n\n\n\nPlaka Kodu Giriniz:  ");
    scanf("%d", &currentCode);
    printf("\nGirdiginiz Plaka Kodu : %d\n\n", currentCode);

    int result = 0;

    while (fgets(currentLine, 100, file)) {
      fscanf(file, "%s %d", &sehir, &plaka);
      if (plaka == currentCode) {
        printf("Girmis oldugunuz %d plaka kodlu %s sehri dogu karadeniz "
               "bolgesindedir.",
               plaka, &sehir);
        result = 1;
      }
    }

    if (result == 0) {
      printf("Girdiginiz plaka kodlu sehir doğu karadeniz bolgesinde "
             "bulunmamaktadır.");
    }
  }

  // Close the file
  fclose(file);
}