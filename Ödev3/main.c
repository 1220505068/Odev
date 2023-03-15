#include <stdlib.h>
#include <stdio.h>


int search(int D[], int N, int sayi){

    int i = 0;                                 
    while(i<N){                               
    if(D[i]==sayi) break;                  
    i++;                                   
    }
    if(i<N) return i;                                         
    else return -1;                                 

    /* 1. = 1
       2. = n+1
       3. = 1
       4. = 1
       5. = 1
       6. = 1
       toplam = n+6 T(n)=O(n) */
}


 /* Bu kod par�as� verilen bir dizi i�inde, istenen eleman�n bulunup bulunmad���n� kontrol edip 
ve varsa eleman� , yoksa -1 de�erini d�nd�r�r.


	a) En iyi durum demek, aranacak ��enin dizinin ilk eleman� olarak kabul edilmesi demektir .
Burda d�ng� sadece bir kez �al���r ve istenen eleman bulunur.
Bu nedenle, en iyi durumda �al��ma zaman� O(1) 'dir.

	b) Ortalama durum demek, ��e dizi i�inde rastgele bir konumda olabilir. 
Bu nedenle, ortalama olarak, ��enin dizinin yar�s�nda bulundu�u varsay�l�r. 
Bu durumda, ortalama �al��ma zaman� O(n/2) 'dir, yani O(n)'dir demektir.

    c) En k�t� durum demek, aranacak ��enin dizinin son eleman� oldu�u durumu ele alal�m demektir.
Bu durumda, d�ng� dizinin t�m elemanlar�n� kontrol etmek zorunda kal�r ve ��e sonunda bulunur. 
Bu nedenle, en k�t� durumda �al��ma zaman� O(n) 'dir.

*/
