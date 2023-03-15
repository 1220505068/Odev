#include <stdio.h>
#include <stdlib.h>

struct ogrenci {

    char ad[50];
    char soyad[50];
    int ogrenci_no;
    char adres[100];
};

int main() {

    int n;

    struct ogrenci ogrenciler[5] = {
    	
        {},
        {"Berzan", "Temel", 2345, "Mus"},
        {"Efe Can", "Donmez", 3456, "Eregli"},
        {"Ali", "Akcan", 4567, "Sanliurfa"},
        {"Harun", "Yakut", 5678, "Diyarbakir"}
    };

    for (n = 1; n <= 4; n++) {
        printf("Ogrenci:%d\n", n);
        printf("Ad: %s\n", ogrenciler[n].ad);
        printf("Soyad: %s\n", ogrenciler[n].soyad);
        printf("No: %d\n", ogrenciler[n].ogrenci_no);
        printf("Adres: %s\n", ogrenciler[n].adres);
        printf("----------------------\n");
    }
	//5 öðrenci tanýmlayýnca hata veriyordu böyle yaptým ben de

    return 0;
}
