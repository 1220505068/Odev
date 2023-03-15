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


 /* Bu kod parçasý verilen bir dizi içinde, istenen elemanýn bulunup bulunmadýðýný kontrol edip 
ve varsa elemaný , yoksa -1 deðerini döndürür.


	a) En iyi durum demek, aranacak öðenin dizinin ilk elemaný olarak kabul edilmesi demektir .
Burda döngü sadece bir kez çalýþýr ve istenen eleman bulunur.
Bu nedenle, en iyi durumda çalýþma zamaný O(1) 'dir.

	b) Ortalama durum demek, öðe dizi içinde rastgele bir konumda olabilir. 
Bu nedenle, ortalama olarak, öðenin dizinin yarýsýnda bulunduðu varsayýlýr. 
Bu durumda, ortalama çalýþma zamaný O(n/2) 'dir, yani O(n)'dir demektir.

    c) En kötü durum demek, aranacak öðenin dizinin son elemaný olduðu durumu ele alalým demektir.
Bu durumda, döngü dizinin tüm elemanlarýný kontrol etmek zorunda kalýr ve öðe sonunda bulunur. 
Bu nedenle, en kötü durumda çalýþma zamaný O(n) 'dir.

*/
