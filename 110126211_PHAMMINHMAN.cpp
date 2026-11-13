#include <stdio.h>
              //Buoi 1 bai 4
int main()
{
	float Tong, Hieu, Tich, Thuong,  a, b;
	
	printf("Tinh Tong, Hieu, Tich, Thuong\n");
	
	printf("Nhap a  = ");
	scanf("%f", &a);
	
	printf("Nhap b = ");
	scanf("%f", &b);
	
	    	Tong = a+b;
	
	printf("\nTong a+b = %.2f", Tong);
	
        	Hieu = a-b;
	
	printf("\nHieu a-b = %.2f", Hieu);
	
        	Tich = a*b;
	
	printf("\nTich a*b = %.2f", Tich);
	
	        Thuong = (a*1.0)/b;
	
	printf("\nThuong a:b = %1.2f", Thuong);
	
	return 0;
}	
	
