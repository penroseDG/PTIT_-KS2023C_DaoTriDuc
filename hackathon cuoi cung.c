#include<stdio.h>
#include<stdlib.h>
int main(){
	int numbers[100];
	int currentIndex;
	int size;
	int positiveNumsCount = 0;
	int sum = 0;
	int sumOfPositiveNumbers = 0;
	int k ; 
	do{
		printf("\n*********************MENU********************");
		printf("\n1.Nhap gia tri n phan tu cua mang.");
		printf("\n2.In gia tri cac phan tu trong mang.");
		printf("\n3.Tinh trung binh cac phan tu duong trong mang.");
		printf("\n4.In ra vi tri cac phan tu co gia tri bang k trong mang.");
		printf("\n5.Su dung thuat toan sap xep mang giam dan.");
		printf("\n6.Tinh so luong cac phan tu la so nguyen to trong mang.");
		printf("\n7.Sap xep cac phan tu chan chia het cho 3 o dau mang theo thu tu tang dan, cac phan tu le chia het cho 3 o cuoi mang theo thu tu giam dan, cac phan tu con lai o giua mang theo thu tu tang dan.");
		printf("\n8.Nhap gia tri m tu ban phim, chen gia tri m vao mang dung vi tri");
		printf("\n9.Thoat");
		printf("\nLua chon cua ban la: ");
		int choice;
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap gia tri n phan tu cua mang:");
				scanf("%d", &size);
				for(int i = 0; i < size; i++){
					printf("numbers[%d]= ", currentIndex);
					scanf("%d", &numbers[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				printf("Gia tri cac phan tu trong mang la:\n");
				for(int i = 0; i < currentIndex; i++){
					printf("%d\t", numbers[i]);
				}
				break;
			case 3:
				printf("Cac phan tu duong trong mang la:\n");
				for(int i = 0; i < currentIndex; i++){
					if(numbers[i] > 0){
						printf("%d\t", numbers[i]);
						sum = sum + numbers[i];
						positiveNumsCount++;	
					}
				}
				sumOfPositiveNumbers = sum / positiveNumsCount;
				printf("\nTrung binh cac phan tu duong trong mang la: %d", sumOfPositiveNumbers);
				break;
			case 4:
	            printf("nhap gia tri k trong mang :");
				scanf("%d",&numbers[k]); 
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				exit(0);
			default:
				printf("Vui long chon tu 1-8");								
		}
	}while(1 == 1);
}
