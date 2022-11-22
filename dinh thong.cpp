#include <stdio.h>

//so tien moi don hang la x
//tong tien = so luong sach * 500 * so tien giam gia
#define t 500

int main() {
	int  y, z;
	
	// y la tong so tien cua 10 cuon so tay
	
	// z la so tien giam gia 20% nhan ngay 20-11
	
	y = t * 10;
	
	z = y * 20 / 100;
	
	printf ("tong so tien cua 10 cuon so tay la %d", z);

}
