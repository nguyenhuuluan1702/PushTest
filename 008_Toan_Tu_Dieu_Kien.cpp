/*008. Toan tu dieu kien

Cau truc: bieu_thuc_1 ? bieu_thuc_2 : bieu_thuc_3; */

// BT kiem tra so chan hay le
// Cach 1:

#include <stdio.h>
	int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printf("%d la so %s", n, (n%2==0)?"chan":"le");
}


//Cach 2:
/*#include <stdio.h>
 int main()
 {
 	int n;
 	printf("Nhap n: "); scanf("%d", &n);
 	
 	if(n%2==0)
 	printf("n vua nhap la so chan");
 	else
 	printf("n vua nhap la so le");
 }*/

