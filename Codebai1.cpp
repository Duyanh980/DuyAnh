#include <stdio.h>
int main(){
	int a;
	printf("Nhap ngay a = ");
	scanf("%d",&a);

	if(a>=2){
		if(a<=7){
			printf("Thu 2 - 7");

		}else{
			if(a==8){
				printf("Ngay chu nhat");

			}else{
				printf("Khong phai ngay trong tuan");

			}

		}

	}else{
		printf("Khong phai ngay trong tuan");


	}
}