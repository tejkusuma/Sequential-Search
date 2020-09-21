#include <stdio.h>
#include <stdbool.h>

int main(){
	//inisialisasi
	int data[100];
	int i,n,j,k,tmp,angkadicari,x;
	bool ditemukan=false;

	
	printf("------------------------------------------------- \n");
	printf("|   PROGRAM MENCARI ANGKA DENGAN SEQUENSIAL     | \n");
    printf("------------------------------------------------- \n\n");
    
    //memasukkan jumlah data oleh pengguna
    printf("Masukkan banyak data : "); scanf("%d", &n);
	
	//memasukkan angka 
    for(i=0; i<n; i++)
    {
        printf("Data %d = ", i); scanf("%d", &data[i]);
    }
	
	printf("--- Data Sebelum Diurutkan --- \n");
	for(i=0;i<n;i++){
		printf("%d", data[i]);
		printf("\n");
	}
	
	
	printf("\n");
	printf("\n");
	printf("--- Data Setelah Diurutkan --- \n");
	
	//sorting
	for(i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if(data[i]>data[j])
			{
				tmp=data[i];
				data[i]=data[j];
				data[j]=tmp;
			}
		}
	}
		
	//print data setelah diurutkan	
	for(i=0;i<n;i++){
		printf("%d \n", data[i]);
	}
	
	//memasukkan angka yang ingin dicari
	printf("Masukkan angka yang dicari : "); scanf("%d", &angkadicari);
	
	//searching data urutan
	for(i=0;i<n;i++){
		if(data[i]==angkadicari){
			ditemukan=true;
			x=i;
			break;
		}
	}
	
	if(ditemukan){
		printf("Angka %d ditemukan diurutan ke-%d \n",angkadicari,x);
	}else {
		printf("Angka tidak ditemukan");
	}
		
	return 0;	
}
