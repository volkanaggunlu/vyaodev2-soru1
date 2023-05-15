#include <stdio.h>
#include <stdlib.h>

	int main() {
    int dizi_boyutu, i; // dizi boyutu burada eleman sayýsýný temsil eder. i ise for döngüsünde kullanýlacaktýr.

    printf("Lutfen dizinin boyutunu girin: ");	// Burada dizinin boyutunu yanmi eleman sayýsý kullanýcýdan istenmekte. Scanf ile elaman sayýsý kullanýcý tarafýndan belirlenir.
    scanf("%d", &dizi_boyutu);
    printf("Dizi %d boyutludur.\n", dizi_boyutu);
    int dizi[dizi_boyutu];// eleman sayýsý dizi boyutu kadar olan bir int tipinde dizi tanýmlandý.

    for (i = 0; i < dizi_boyutu; i++) {// Bu döngü ile kullanýcýdan dizinin elemanlarýnýn her bir deðeri alýnacak.
        printf("Dizinin %d. elemanini giriniz: ", i + 1); 
        scanf("%d", &dizi[i]);
    }

    int a;// a deðiþkeni aranacak olan elemaný bulmak için kullanýlmak üzere yazýldý.
    printf("Lutfen dizide aranacak elemanin degerini girin: ");// Burada kullanýcýdan aranacak olan eleman deðeri alýnacak.
    scanf("%d", &a);

    
    for (i = 0; i < dizi_boyutu; i++) {// Burada aranacak olan eleman dizinin hangi indisinde bulunuyorsa o indise ulaþana kadar devam edecek bir döngü bulunmaktadýr.
        if (dizi[i] == a) {
            printf("Aranan deðer %d. indisinde bulunuyor.\n", i + 1);
            
            break;
        }
    }

    if (dizi_boyutu=!a) { // Eðer aranan eleman dizi içerisinde bulunmuyorsa özel bir uyarý mesajý oluþmasý için bir koþul kontrolü oluþturuldu.
        printf("Aranan eleman dizi içerisinde bulunmamaktadýr.\n");
    }

    return 0;
}
	
	
	
	
	
	
	

