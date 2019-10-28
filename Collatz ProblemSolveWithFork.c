#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


//Collatz Problemi Fork ile çözümü
/*
Bu problemi tüm pozitif tam sayılar için çözen C programını fork() sistem çağrısını kullanarak child process de çözünüz. PArent process child görev bitmeden çıkmasını engelleyiniz. Komut satırından integer bir sayı girilmesini sağlayınız. 
Programını Githuba yükleyerek linki gönderim ekle alanından yapıştırınız. 
*/

int main(){
    int numara = 0;
    pid_t sayiNumId;
 
    printf("Numara yaz: ");
    scanf("%d", &numara);
 
    if(numara < 0){
        printf("Numara gir 0 dan büyük olsun: ");
        scanf("%d", &numara);
    }
 
    sayiNumId = fork();
 
    if(sayiNumId < 0){
      printf("Gorev olusturma basarisiz.(Child)");");
      exit(-1);
    }
 C
    else if(numaraNumId == 0){
        do{
        if(numara % 2 != 0)
          numara = (numara * 3) + 1;
         
        else if(numara % 2 == 0)
          numara = numara / 2;
 
        printf("%d\n", numara);
        }
        while(numara != 1);
    }
 
    else{
        printf("pid %d \n", sayiNumId);
        printf("Child gorev bekleniyor.\n");
        wait(NULL);
    }
    
    return EXIT_SUCCESS;   
}
