#include <stdio.h>
#include <stdlib.h>

	int main() {
    int dizi_boyutu, i; // dizi boyutu burada eleman say�s�n� temsil eder. i ise for d�ng�s�nde kullan�lacakt�r.

    printf("Lutfen dizinin boyutunu girin: ");	// Burada dizinin boyutunu yanmi eleman say�s� kullan�c�dan istenmekte. Scanf ile elaman say�s� kullan�c� taraf�ndan belirlenir.
    scanf("%d", &dizi_boyutu);
    printf("Dizi %d boyutludur.\n", dizi_boyutu);
    int dizi[dizi_boyutu];// eleman say�s� dizi boyutu kadar olan bir int tipinde dizi tan�mland�.

    for (i = 0; i < dizi_boyutu; i++) {// Bu d�ng� ile kullan�c�dan dizinin elemanlar�n�n her bir de�eri al�nacak.
        printf("Dizinin %d. elemanini giriniz: ", i + 1); 
        scanf("%d", &dizi[i]);
    }

    int a;// a de�i�keni aranacak olan eleman� bulmak i�in kullan�lmak �zere yaz�ld�.
    printf("Lutfen dizide aranacak elemanin degerini girin: ");// Burada kullan�c�dan aranacak olan eleman de�eri al�nacak.
    scanf("%d", &a);

    
    for (i = 0; i < dizi_boyutu; i++) {// Burada aranacak olan eleman dizinin hangi indisinde bulunuyorsa o indise ula�ana kadar devam edecek bir d�ng� bulunmaktad�r.
        if (dizi[i] == a) {
            printf("Aranan de�er %d. indisinde bulunuyor.\n", i + 1);
            
            break;
        }
    }

    if (dizi_boyutu=!a) { // E�er aranan eleman dizi i�erisinde bulunmuyorsa �zel bir uyar� mesaj� olu�mas� i�in bir ko�ul kontrol� olu�turuldu.
        printf("Aranan eleman dizi i�erisinde bulunmamaktad�r.\n");
    }

    return 0;
}
	
	
	
	
	
	
	

