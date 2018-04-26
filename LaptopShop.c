#include <stdio.h>
#include <stdlib.h>

int pilihan;
int tipe;
int jenis;
int unit;

int pc1=100;  int pc2=100;  int pc3=100;
int imac1=30;    int imac2=30;    int imac3=30;
int laptop1=30;  int laptop2=30;  int laptop3=30;
int lapgame1=20;    int lapgame2=20;    int lapgame3=20;
int macpro1=15;    int macpro2=15;    int macpro3=15;

int hpc1=750;  int hpc2=1000;  int hpc3=1100;
int himac1=2300;    int himac2=1800;    int himac3=1650;
int hlaptop1=750;  int hlaptop2=500;  int hlaptop3=300;
int hlapgame1=1000;    int hlapgame2=1500;    int hlapgame3=2000;
int hmacpro1=1900;    int hmacpro2=1650;    int hmacpro3=1550;

int bpc[3]={0, 0, 0, 0};
int bimac[3]={0, 0, 0, 0};
int blaptop[3]={0, 0, 0, 0};
int blapgame[3]={0, 0, 0, 0};
int bmacpro[3]={0, 0, 0, 0};

int kpc1;  int kpc2;  int kpc3;
int kimac1;    int kimac2;    int kimac3;
int klaptop1;  int klaptop2;  int klaptop3;
int klapgame1;    int klapgame2;    int klapgame3;
int kmacpro1;    int kmacpro2;    int kmacpro3;

int cicil1=0;  int cicil2=0;  int cicil3=0;
int langsung=0;
int no=1;
long jumlah=0;
long jumlahtambahan;
long jumlahcicil;
long pajak;
long bunga;
long DP;
long DPMIN;
long cicilan;

int array []= { 8, 4, 6,   6, 8, 4,   7, 5, 8,   5, 8, 7,   7, 8, 3};

int main(){
	printf ("\n  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf ("  ::                                                                      ::\n");
	printf ("  ::                          TECHNIQUE COMPUTER                          ::\n");
	printf ("  ::                            Computer Store                            ::\n");
	printf ("  ::                                                                      ::\n");
	printf ("  ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf ("  ==========================================================================\n");
	printf ("  ||                                                                      ||\n");
	printf ("  ||      1. Katalog Komputer                        4. Bantuan           ||\n");
	printf ("  ||                                                                      ||\n");
	printf ("  ||      2. Pembelian Komputer                      5. World's Favorite  ||\n");
	printf ("  ||                                                                      ||\n");
	printf ("  ||      3. Kuitansi Pembelian                      6. Keluar            ||\n");
	printf ("  ||                                                                      ||\n");
	printf ("  ||                                                                      ||\n");
	printf ("  ==========================================================================\n\n");
	printf ("  Note : Gunakan input angka bukan huruf\n\n\n");
	printf ("  =====================================\n");
	printf ("  Silahkan masukkan pilihan anda: "); scanf ("%d",&pilihan);
	
	switch (pilihan){
		case 1: {
			system("cls");
			daftar();
			break;
		}
		case 2: {
			system("cls");
			beli();
			break;
		}
		case 3: {
			system("cls");
			kwitansi();
			break;
		}
		case 4: {
			system("cls");
			bantuan();
			break;
		}
		case 5: {
			system("cls");
			favorit();
			break;
		}
		case 6: {
			system("cls");
			keluar();
			break;
		}
		default: {
		while(pilihan!=1&&pilihan!=2){
				printf("\n\n\n\tInput tidak dikenali.\n\tSilahkan tekan 1 untuk memasukkan kembali perintah anda.\n\tAtau tekan 2 untuk keluar\n\t");
				scanf("%d",&pilihan);
		}
			if(pilihan==1){
				system("cls");
				main();
			}
			else return 0;
			break;
		}
	}
}

int beli(){
	if(langsung==1||cicil1==1||cicil2==1||cicil3==1){
		printf("*CAUTION\t: Data Pembelian Sebelumnya Akan Terhapus\n");
		printf("\t\t Tekan 1 Untuk Melanjutkan, Tekan 0 Untuk Batal");scanf ("%d",&pilihan);
		if (pilihan==1){
			bpc[3];
			bimac[3];
			blaptop[3];
			blapgame[3];
			bmacpro[3];
			cicil1=0; cicil2=0; cicil3=0;
			langsung=0;
			no=1;
			jumlah=0;
			system("cls");
			beli();
		} else if (pilihan==0){
			system ("cls");
			main();
		} else {
			printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
			system("PAUSE");
			beli();
		}
	}
	printf ("\n ##########################################################################\n");
	printf (" ##                                                                      ##\n");
	printf (" ##                  Pembelian Perangkat Elektronik                      ##\n");
	printf (" ##                                                                      ##\n");
	printf (" ##########################################################################\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  Tipe :                                                              ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. Desktop PC                                                       ||\n");
	printf (" ||  2. iMac                                                             ||\n");
	printf (" ||  3. Laptop                                                           ||\n");
	printf (" ||  4. Laptop Gaming                                                    ||\n");
	printf (" ||  5. Macbook Pro                                                      ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan masukkan tipe perangkat yang akan anda beli:\n "); scanf ("%d",&tipe);
	
	if (tipe==9){
		system ("cls");
		main();
	} else if (tipe==0){
		system ("cls");
		keluar();
	} else if (tipe<1||tipe>5){
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system ("cls");
		beli();
	}
	
	switch (tipe){
		case 1:{
			system ("cls");
			belipcback();
			break;
		}
		case 2:{
			system ("cls");
			beliimacily();
			break;
		}
		case 3:{
			system ("cls");
			belilaptop();
			break;
		}
		case 4:{
			system ("cls");
			belilapgame();
			break;
		}
		case 5:{
			system ("cls");
			belimacproekutif();
			break;
		}				
	}
}

int belipcback(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                     Pembelian Desktop PC                             ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk                             Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1.  Lenovo Idea Centre 510               %d          7.500.000     ||\n",pc1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2.  HP AI0 28-COBOL                      %d         10.000.000     ||\n",pc2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3.  ASUS K31AD                           %d         11.000.000     ||\n",pc3);
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memilih desktop pc yang ingin anda beli: "); scanf ("%d",&jenis);	
	
	if (jenis==9){
		system ("cls");
		beli();
	} else if (jenis==0){
		system ("cls");
		keluar();
	} else if (jenis<1||jenis>3){
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system ("cls");
		belipcback();
	}
	
	printf ("\n\t\t\t Jumlah desktop pc yang dibeli: "); scanf ("%d",&unit);	
	if (unit<=0){
		printf ("\n\n	Jumlah harus lebih dari 0!!!\n	");
		system("PAUSE");
		system ("cls");
		belipcback();
	}
	switch (jenis){
		case 1:{
			if (pc1-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belipcback();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 2:{
			if (pc2-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belipcback();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 3:{
			if (pc3-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belipcback();				
			}
			system ("cls");
			confirmation();
			break;
		}
	}
}

int beliimacily(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                            Pembelian iMac                            ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Jenis                            Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1.  Core i7 Processor                    %d         23.000.000      ||\n",imac1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2.  Core i5 Processor                    %d         18.000.000      ||\n",imac2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3.  Core i3 Processor                    %d         16.500.000      ||\n",imac3);
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memilih iMac yang ingin anda beli: "); scanf ("%d",&jenis);

	if (jenis==9){
		system ("cls");
		beli();
	} else if (jenis==0){
		system ("cls");
		keluar();
	} else if (jenis<1||jenis>3){
	printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
	system("PAUSE");
	system("cls");
	beliimacily();
	}	

	printf ("\n\t\t\t Jumlah iMac yang dibeli: "); scanf ("%d",&unit);	
	if (unit<=0){
		printf ("\n\n	Jumlah harus lebih dari 0!!!\n	");
		system("PAUSE");
		system ("cls");
		beliimacily();
	}
	switch (jenis){
		case 1:{
			if (imac1-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				beliimacily();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 2:{
			if (imac2-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				beliimacily();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 3:{
			if (imac3-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				beliimacily();				
			}
			system ("cls");
			confirmation();
			break;
		}
	}
}

int belilaptop(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                        Pembelian laptop                              ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk                             Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1.  Lenovo                               %d          7.500.000      ||\n",laptop1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2.  Dell                                 %d          5.000.000      ||\n",laptop2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3.  ASUS                                 %d          3.000.000      ||\n",laptop3);
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memilih laptop yang ingin anda beli: "); scanf ("%d",&jenis);

	if (jenis==9){
		system ("cls");
		beli();
	} else if (jenis==0){
		system ("cls");
		keluar();
	} else if (jenis<1||jenis>3){
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		belilaptop();
	}
	
	printf ("\n\t\t\t Jumlah laptop yang dibeli: "); scanf ("%d",&unit);	
	if (unit<=0){
		printf ("\n\nJumlah harus lebih dari 0!!!\n	");
		system("PAUSE");
		system ("cls");
		belilaptop();
	}
	switch (jenis){
		case 1:{
			if (laptop1-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belilaptop();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 2:{
			if (laptop2-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belilaptop();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 3:{
			if (laptop3-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belilaptop();				
			}
			system ("cls");
			confirmation();
			break;
		}
	}
}

int belilapgame(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                     Pembelian Laptop Gaming                          ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk                             Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1.  MSI Gaming G                         %d         10.000.000      ||\n",lapgame1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2.  Asus ROG                             %d         15.000.000      ||\n",lapgame2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3.  Alien Ware                           %d         20.000.000      ||\n",lapgame3);
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memilih laptop gaming yang ingin anda beli: "); scanf ("%d",&jenis);

	if (jenis==9){
		system ("cls");
		beli();
	} else if (jenis==0){
		system ("cls");
		keluar();
	} else if (jenis<1||jenis>3){
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		belilapgame();
	}
	
	printf ("\n\t\t\t Jumlah laptop gaming yang dibeli: "); scanf ("%d",&unit);	
	if (unit<=0){
		printf ("\n\n	Jumlah harus lebih dari 0!!!\n	");
		system("PAUSE");
		system ("cls");
		belilapgame();
	}
	switch (jenis){
		case 1:{
			if (lapgame1-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belilapgame();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 2:{
			if (lapgame2-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belilapgame();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 3:{
			if (lapgame3-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belilapgame();				
			}
			system ("cls");
			confirmation();
			break;
		}
	}
}

int belimacproekutif(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                        Pembelian Macbook Pro                         ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No          Jenis                       Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1.   Core i7 Processor                   %d         19.000.000      ||\n",macpro1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2.   Core i5 Processor                   %d         16.500.000      ||\n",macpro2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3.   Core i3 Processor                   %d         15.500.000      ||\n",macpro3);
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memilih macbook pro yang ingin anda beli: "); scanf ("%d",&jenis);

	if (jenis==9){
		system ("cls");
		beli();
	} else if (jenis==0){
		system ("cls");
		keluar();
	} else if (jenis<1||jenis>3){
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		belimacproekutif();
	}
	
	printf ("\n\t\t\t Jumlah yang dibeli: "); scanf ("%d",&unit);	
	if (unit<=0){
		printf ("\n\n	Jumlah harus lebih dari 0!!!\n	");
		system("PAUSE");
		system ("cls");
		belimacproekutif();
	}
	switch (jenis){
		case 1:{
			if (macpro1-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belimacproekutif();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 2:{
			if (macpro2-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belimacproekutif();				
			}
			system ("cls");
			confirmation();
			break;
		}
		case 3:{
			if (macpro3-unit<0){
				printf ("\n\n	Jumlah melebihi batas!!!\n	");
				system("PAUSE");
				system ("cls");
				belimacproekutif();				
			}
			system ("cls");
			confirmation();
			break;
		}
	}
}

int confirmation(){
	printf ("\n\n   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf ("   @   @@::::::@@         ----------------------         @@:::::@@   @\n");
	printf ("   @     @@::::::@@       ! Halaman Konfirmasi !       @@:::::@@     @\n");
	printf ("   @   @@::::::@@         ----------------------         @@:::::@@   @\n");
	printf ("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf ("   ===================================================================\n");
	printf ("   @                                                                 @\n");
	printf ("   @         Anda akan membeli %d",unit);

	if (tipe==1&&jenis==1){
		printf (" unit Lenovo Idea Centre 510         @\n");
	} else if (tipe==1&&jenis==2){
		printf (" unit Hp AI0 28-COBOL                @\n");
	} else if (tipe==1&&jenis==3){
		printf (" unit ASUS K31AD                     @\n");
	} else if (tipe==2&&jenis==1){
		printf (" unit iMac i7                        @\n");
	} else if (tipe==2&&jenis==2){
		printf (" unit iMac i5                        @\n");
	} else if (tipe==2&&jenis==3){
		printf (" unit iMac i3                        @\n");
	} else if (tipe==3&&jenis==1){
		printf (" unit Laptop Lenovo                  @\n");
	} else if (tipe==3&&jenis==2){
		printf (" unit Laptop Dell                    @\n");
	} else if (tipe==3&&jenis==3){
		printf (" unit Laptop ASUS                    @\n");
	} else if (tipe==4&&jenis==1){
		printf (" unit Laptop Gaming MSI Gaming 6     @\n");
	} else if (tipe==4&&jenis==2){
		printf (" unit Laptop ROG Asus                @\n");
	} else if (tipe==4&&jenis==3){
		printf (" unit Laptop Gaming Alien Ware       @\n");
	} else if (tipe==5&&jenis==1){
		printf (" unit Macbook Pro i7                 @\n");
	} else if (tipe==5&&jenis==2){
		printf (" unit Macbook Pro i5                 @\n");
	} else if (tipe==5&&jenis==3){
		printf (" unit Macbook Pro i3                 @\n");
	}
	printf ("   @                                                                 @\n");
	printf ("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n");
	printf ("\t\t\t\tAnda Yakin?\n");
	printf ("\t\t\t    1. Ya    0. Tidak\n");
	printf ("\t\t\t\t     ");scanf("%d",&pilihan);
	if (pilihan==1){
		system ("cls");
			if (tipe==1&&jenis==1){
				hitung(&bpc[1],&pc1,hpc1);
			} else if (tipe==1&&jenis==2){
				hitung(&bpc[2],&pc2,hpc2);
			} else if (tipe==1&&jenis==3){
				hitung(&bpc[3],&pc3,hpc3);
			} else if (tipe==2&&jenis==1){
				hitung(&bimac[1],&imac1,himac1);
			} else if (tipe==2&&jenis==2){
				hitung(&bimac[2],&imac2,himac2);
			} else if (tipe==2&&jenis==3){
				hitung(&bimac[3],&imac3,himac3);
			} else if (tipe==3&&jenis==1){
				hitung(&blaptop[1],&laptop1,hlaptop1);
			} else if (tipe==3&&jenis==2){
				hitung(&blaptop[2],&laptop2,hlaptop2);
			} else if (tipe==3&&jenis==3){
				hitung(&blaptop[3],&laptop3,hlaptop3);
			} else if (tipe==4&&jenis==1){
				hitung(&blapgame[1],&lapgame1,hlapgame1);
			} else if (tipe==4&&jenis==2){
				hitung(&blapgame[2],&lapgame2,hlapgame2);
			} else if (tipe==4&&jenis==3){
				hitung(&blapgame[3],&lapgame3,hlapgame3);
			} else if (tipe==5&&jenis==1){
				hitung(&bmacpro[1],&macpro1,hmacpro1);
			} else if (tipe==5&&jenis==2){
				hitung(&bmacpro[2],&macpro2,hmacpro2);
			} else {
				hitung(&bmacpro[3],&macpro3,hmacpro3);
			}
		confirmation1();
	} else if (pilihan==0){
		system ("cls");
		beli();
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		confirmation();
	}
}

int hitung(int *a,int *b,int c){
	*a+=unit;
	*b-=unit;
	jumlah+=unit*c;
}

int confirmation1(){
	printf ("\n\n   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf ("   @   @@::::::@@         ----------------------         @@:::::@@   @\n");
	printf ("   @     @@::::::@@       ! Halaman Konfirmasi !       @@:::::@@     @\n");
	printf ("   @   @@::::::@@         ----------------------         @@:::::@@   @\n");
	printf ("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf ("   ===================================================================\n");
	printf ("   @                                                                 @\n");
	printf ("   @   Perangkat Elektronik anda telah ditambahkan ke dalam troli    @\n");
	printf ("   @                                                                 @\n");
	printf ("   @   1. Kembali berbelanja                                         @\n");
	printf ("   @                                                                 @\n");
	printf ("   @   2. Lanjut ke metode pembayaran                                @\n");
	printf ("   @                                                                 @\n");
	printf ("   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf ("\n   Masukkan Pilihan Anda:\n   "); scanf ("%d",&pilihan);
	if (pilihan==1){
		system ("cls");
		beli();
	} else if (pilihan==2){
		system ("cls");
		pembayaran();
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		confirmation1();
	}
		
}

int pembayaran(){
	printf ("\n $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" $    $ :::::: $          ----------------------       $ ::::: $   $\n");
	printf (" $      $ :::::: $        $  Metode Pembayaran $     $ ::::: $     $\n");
	printf (" $    $ :::::: $          ----------------------       $ ::::: $   $\n");
	printf (" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" ===================================================================\n");
	printf (" ||                                                               ||\n");
	printf (" ||  Pilihan metode pembayan yang tersedia:                       ||\n");
	printf (" ||                                                               ||\n");
	printf (" ||  1. Tunai                                                     ||\n");
	printf (" ||                                                               ||\n");
	printf (" ||  2. Cicilan (Bunga 10%%)                                       ||\n");
	printf (" ||                                                               ||\n");
	printf (" ===================================================================\n");
	printf (" Silahkan memilih metode pembayaran perangkat elektronik anda:\n "); scanf ("%d",&pilihan);
	if (pilihan==1){
		system ("cls");
		pembayaran1();
	} else if (pilihan==2){
		system ("cls");
		pembayaran2();
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		pembayaran();
	}
}

int pembayaran1(){
	printf ("\n $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $      $ :::::: $      $  Metode Pembayaran $       $ ::::: $     $\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" ===================================================================\n");
	printf (" ||                                                               ||\n");
	printf (" ||             Anda Telah Memilih Pembayaran Tunai               ||\n");
	printf (" ||                                                               ||\n");
	printf (" ===================================================================\n");
	printf (" Silahkan tekan 1 untuk mencetak bukti pembayaran:\n "); scanf ("%d",&pilihan);
	if (pilihan==1){
		langsung++;
		system("cls");
		kwitansi();
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		pembayaran1();
	}
}

int pembayaran2(){
	printf ("\n $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $      $ :::::: $      $  Metode Pembayaran $       $ ::::: $     $\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" ===================================================================\n");
	printf (" ||                                                               ||\n");
	printf (" ||   Pilihan program cicilan:                                    ||\n");
	printf (" ||                                                               ||\n");
	printf (" ||   1. Cicilan 12 Bulan                                         ||\n");
	printf (" ||                                                               ||\n");
	printf (" ||   2. Cicilan 24 Bulan                                         ||\n");
	printf (" ||                                                               ||\n");
	printf (" ||   3. Cicilan 36 Bulan                                         ||\n");
	printf (" ||                                                               ||\n");
	printf (" ===================================================================\n");
	printf ("\t Masukkan Pilihan Anda: "); scanf ("%d",&pilihan);
	if (pilihan==1){
		cicil1++;
		system ("cls");
	} else if (pilihan==2){
		cicil2++;
		system ("cls");
	} else if (pilihan==3){
		cicil3++;
		system ("cls");
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		pembayaran2();
	}
	pembayaran3();
}

int pembayaran3(){
	printf ("\n @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf (" $                           ----------------------                           $\n");
	printf (" $---------------------------|  Metode Pembayaran |---------------------------$\n");
	printf (" $                           ----------------------                           $\n");
	printf (" @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf (" ******************************************************************************\n");
	printf (" |                                                                            |\n");
	printf (" |                   Anda memilih ");
	if (cicil1==1){
		printf ("program 12 bulan cicilan                    |\n");
	} else if (cicil2==1){
		printf ("program 24 bulan cicilan                    |\n");
	} else printf ("program 36 bulan cicilan                    |\n");
	printf (" |                   *Program cicilan ini memerlukan DP                       |\n");
	printf (" |                                                                            |\n");
	printf (" ******************************************************************************\n");	

	printf ("\n\t Harga\t\t\t: %d0000 \n",jumlah);	
	DPMIN=jumlah*0.3;
	printf ("\t DP minimal\t\t: %d0000 (30%% dari harga total) \n",DPMIN);
	
	printf ("\n\t DP yang anda inginkan (dalam juta)\t: "); scanf ("%d",&DP);
	system ("cls");
	if (DP*100<DPMIN){
		printf ("\n\n	DP kurang!!!\n	");
		system("PAUSE");
		system ("cls");
		pembayaran3();		
	} else if (DP*100>jumlah){
		printf ("\n\n	DP tak boleh melebihi harga total!!!\n	");
		system("PAUSE");
		system ("cls");
		pembayaran3();	
	}
	
	pembayaran4();
}

int pembayaran4(){
	printf ("\n $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $      $ :::::: $      $  Metode Pembayaran $       $ ::::: $     $\n");
	printf (" $    $ :::::: $        ----------------------         $ ::::: $   $\n");
	printf (" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf (" ===================================================================\n");
	printf (" ||                                                               ||\n");
	printf (" ||          Anda Telah Memilih Pembayaran Dengan Cicilan         ||\n");
	printf (" ||                                                               ||\n");
	printf (" ===================================================================\n");
	printf ("\t Tekan 1 Untuk Mencetak Bukti Pembayaran: "); scanf ("%d",&pilihan);	
	if (pilihan==1){
		system("cls");
		kwitansi();
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		pembayaran4();
	}
}

int daftar(){
	printf ("\n ##########################################################################\n");
	printf (" ##                                                                      ##\n");
	printf (" ##                    Katalog Perangkat Elekronik                       ##\n");
	printf (" ##                                                                      ##\n");
	printf (" ##########################################################################\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  Tipe :                                                              ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. Desktop PC                                                       ||\n");
	printf (" ||  2. iMac                                                             ||\n");
	printf (" ||  3. Laptop                                                           ||\n");
	printf (" ||  4. Laptop Gaming                                                    ||\n");
	printf (" ||  5. Macbook Pro                                                      ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  9. Kembali ke menu sebelumnya                                       ||\n");
	printf (" ||  0. Keluar                                                           ||\n");
	printf (" ==========================================================================\n");
	printf (" Silahkan memasukkan pilihan anda untuk melihat lebih lanjut:\n "); scanf ("%d",&pilihan);	
	
	if (pilihan==9){
		system("cls");
		main();
	} else if (pilihan==0){
		system("cls");
		keluar();
	} else if (pilihan<1||pilihan>5){
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		daftar();
	}
	
	switch (pilihan){
		case 1:{
			system ("cls");
			pcback();
			break;
		}
		case 2:{
			system ("cls");
			imacily();
			break;
		}
		case 3:{
			system ("cls");
			laptop();
			break;
		}
		case 4:{
			system ("cls");
			lapgame();
			break;
		}
		case 5:{
			system ("cls");
			macproekutif();
			break;
		}				
	}
}

int pcback(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                            List Desktop PC                           ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk                             Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. [Lenovo Idea Centre 510]              %d          7.500.000     ||\n",pc1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2. [HP A10 28-COBOL]                     %d         10.000.000     ||\n",pc2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3. [ASUS K31AD]                          %d         11.000.000     ||\n",pc3);
	printf (" ||                                                                      ||\n");
	printf (" ==========================================================================\n");
	printf ("\n Tekan 9 untuk kembali, dan tekan 0 untuk keluar.\n\n Silahkan masukkan pilihan anda:\n "); scanf ("%d",&pilihan);

	if (pilihan==9){
		system("cls");
		daftar();
	} else if (pilihan==0){
		system("cls");
		keluar();
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		pcback();
	}
}

int imacily(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                               List iMac                              ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No         Jenis                        Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1.   [Core i7 Processor]                 %d         23.000.000      ||\n",imac1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2.   [Core i5 Processor]                 %d         18.000.000      ||\n",imac2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3.   [Core i3 Processor]                 %d         16.500.000      ||\n",imac3);
	printf (" ||                                                                      ||\n");
	printf (" ==========================================================================\n");
	printf ("\n Tekan 9 untuk kembali, dan tekan 0 untuk keluar.\n\n Silahkan masukkan pilihan anda:\n "); scanf ("%d",&pilihan);
	
	if (pilihan==9){
		system("cls");
		daftar();
	} else if (pilihan==0){
		system("cls");
		keluar();
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		imacily();
	}	
}

int laptop(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                              List laptop                             ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk                             Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. [Lenovo]                              %d          7.500.000      ||\n",laptop1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2. [Dell]                                %d          5.000.000      ||\n",laptop2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3. [ASUS]                                %d          3.000.000      ||\n",laptop3);
	printf (" ||                                                                      ||\n");
	printf (" ==========================================================================\n");
	printf ("\n Tekan 9 untuk kembali, dan tekan 0 untuk keluar.\n\n Silahkan masukkan pilihan anda:\n "); scanf ("%d",&pilihan);
	
	if (pilihan==9){
		system("cls");
		daftar();
	} else if (pilihan==0){
		system("cls");
		keluar();
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		laptop();
	}
}

int lapgame(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                           List Laptop Gaming                         ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No     Merk                             Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. [MSI Gaming 6]                        %d         10.000.000      ||\n",lapgame1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2. [ROG ASUS]                            %d         15.000.000      ||\n",lapgame2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3. [Alien Ware]                          %d         20.000.000      ||\n",lapgame3);
	printf (" ||                                                                      ||\n");
	printf (" ==========================================================================\n");
	printf ("\n Tekan 9 untuk kembali, dan tekan 0 untuk keluar.\n\n Silahkan masukkan pilihan anda:\n "); scanf ("%d",&pilihan);
	

	if (pilihan==9){
		system("cls");
		daftar();
	} else if (pilihan==0){
		system("cls");
		keluar();
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		lapgame();
	}
}

int macproekutif(){
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                           List Macbook Pro                           ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ==========================================================================\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  No         Merk                         Unit           Harga        ||\n");
	printf (" ||                                                                      ||\n");
	printf (" ||  1. [Macbook Pro Core i7]                 %d          19.000.000     ||\n",macpro1);
	printf (" ||                                                                      ||\n");
	printf (" ||  2. [Macbook Pro Core i5]                 %d          16.500.000     ||\n",macpro2);
	printf (" ||                                                                      ||\n");
	printf (" ||  3. [Macbook Pro Core i3]                 %d          15.500.000     ||\n",macpro3);
	printf (" ||                                                                      ||\n");
	printf (" ==========================================================================\n");
	printf ("\n Tekan 9 untuk kembali, dan tekan 0 untuk keluar.\n\n Silahkan masukkan pilihan anda:\n "); scanf ("%d",&pilihan);
	
	if (pilihan==9){
		system("cls");
		daftar();
	} else if (pilihan==0){
		system("cls");
		keluar();
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		macproekutif();
	}
}

int kwitansi(){
	if (jumlah==0){
		system("cls");
		printf("\n\n\n\tAnda belum melakukan transaksi apapun.\n\tSilahkan tekan angka apapun untuk kembali ke menu utama.\n\t");
		scanf("%d",&pilihan);
		system("cls");
		main();
	}
	if(langsung==0&&cicil1==0&&cicil2==0&&cicil3==0){
		printf(" memilih metode pembayaran!!!");
		main();
	}	
	no=1;
	printf ("\n ******************************************************************************\n");
	printf (" =:::::::::::::::::::::::::::|---------------------|::::::::::::::::::::::::::=\n");
	printf (" =---------------------------| KUITANSI PEMBAYARAN |--------------------------=\n");
	printf (" =:::::::::::::::::::::::::::|---------------------|::::::::::::::::::::::::::=\n");
	printf (" ******************************************************************************\n");
	printf (" |                                                                            |\n");
	printf (" |                            TECHNIQUE COMPUTER                              |\n");
	printf (" |                              Computer Store                                |\n");
	printf (" |                                                                            |\n");
	printf (" |\t No     Jenis                         Unit              Harga             |\n");
	if (bpc[1]>0){
		printf(" |\t %d.     Lenovo Idea Centre 510     %d",no,bpc[1]);
		hitung2(bpc[1],&kpc1,hpc1);
	}
	if (bpc[2]>0){
		printf(" |\t %d.      HP A10 28-COBOL           %d",no,bpc[2]);
		hitung2(bpc[2],&kpc2,hpc2);
	}
	if (bpc[3]>0){
		printf(" |\t %d.      ASUS K31AD                %d",no,bpc[3]);
		hitung2(bpc[3],&kpc3,hpc3);
	}
	if (bimac[1]>0){
		printf(" |\t %d.      iMac i7                   %d",no,bimac[1]);
		hitung2(bimac[1],&kimac1,himac1);			
	}
	if (bimac[2]>0){
		printf(" |\t %d.      iMac i5                   %d",no,bimac[2]);
		hitung2(bimac[2],&kimac2,himac2);
	}
	if (bimac[3]>0){
		printf(" |\t %d.      iMac i3                   %d",no,bimac[3]);
		hitung2(bimac[3],&kimac3,himac3);
	}
	if (blaptop[1]>0){
		printf(" |\t %d.       Lenovo                   %d",no,blaptop[1]);
		hitung2(blaptop[1],&klaptop1,hlaptop1);
	}
	if (blaptop[2]>0){
		printf(" |\t %d.       Dell                     %d",no,blaptop[2],klaptop2);
		hitung2(blaptop[2],&klaptop2,hlaptop2);
	}
	if (blaptop[3]>0){
		printf(" |\t %d.       ASUS                     %d",no,blaptop[3]);
		hitung2(blaptop[3],&klaptop3,hlaptop3);
	}
	if (blapgame[1]>0){;
		printf(" |\t %d.       MSI Gaming 6             %d",no,blapgame[1]);
		hitung2(blapgame[1],&klapgame1,hlapgame1);
	}
	if (blapgame[2]>0){
		printf(" |\t %d.       ROG Asus                 %d",no,blapgame[2]);
		hitung2(blapgame[2],&klapgame2,hlapgame2);
	}
	if (blapgame[3]>0){
		printf(" |\t %d.        Alien Ware              %d",no,blapgame[3]);
		hitung2(blapgame[3],&klapgame3,hlapgame3);
	}
	if (bmacpro[1]>0){
		printf(" |\t %d.        Macbook Pro i7          %d",no,bmacpro[1]);
		hitung2(bmacpro[1],&kmacpro1,hmacpro1);
	}
	if (bmacpro[2]>0){
		printf(" |\t %d.        Macbook Pro i5          %d",no,bmacpro[2]);
		hitung2(bmacpro[2],&kmacpro2,hmacpro2);
	}
	if (bmacpro[3]>0){
		printf(" |\t %d.        Macbook Pro i3          %d",no,bmacpro[3]);
		hitung2(bmacpro[3],&kmacpro3,hmacpro3);
	}
	
	printf (" | -------------------------------------------------------------------------- |\n");
	printf (" |\t Jumlah\t\t\t\t\t\t");
	if (jumlah<100000){
		printf ("   %d0000\t      |\n",jumlah);
	} else if (jumlah<1000000){
		printf ("  %d0000\t      |\n",jumlah);
	} else if (jumlah<10000000){
		printf (" %d0000\t      |\n",jumlah);
	} else printf ("%d0000\t      |\n",jumlah);
	
	pajak=jumlah*0.05;
	printf (" |\t Pajak (5 Persen)\t\t\t\t");
	if (pajak<10000){
		printf ("    %d0000\t      |\n",pajak);
	} else printf ("   %d0000\t      |\n",pajak);
	
	if(cicil1!=0||cicil2!=0||cicil3!=0){
		bunga=jumlah*0.1;
		printf (" |\t Bunga\t\t\t\t\t\t");
		if (bunga<10000){
			printf ("    %d0000\t      |\n",bunga);
			} else if (bunga<100000){
			printf ("   %d0000\t      |\n",bunga);
			} else printf ("  %d0000\t      |\n",bunga);
	}
	
	printf (" | -------------------------------------------------------------------------- |\n");
	
	jumlahtambahan=jumlah+pajak+bunga;
	
	printf (" |\t Total Harga\t\t\t\tRp.\t");
	if (jumlahtambahan<100000){
		printf ("   %d0000\t      |\n",jumlahtambahan);
	} else if (jumlahtambahan<1000000){
		printf ("  %d0000\t      |\n",jumlahtambahan);
	} else if (jumlahtambahan<10000000){
		printf (" %d0000\t      |\n",jumlahtambahan);
	} else printf ("%d0000\t      |\n",jumlahtambahan);
	
	if(cicil1!=0||cicil2!=0||cicil3!=0){
		printf (" |\t DP\t\t\t\t\t\t");
		if (DP*100<10000){
			printf ("    %d0000\t      |\n",DP*100);
			} else if (DP*100<100000){
			printf ("   %d0000\t      |\n",DP*100);
			} else printf ("  %d0000\t      |\n",DP*100);
			
		printf (" | -------------------------------------------------------------------------- |\n");
		
		jumlahcicil=jumlahtambahan-DP*100;
		printf (" |\t Harga Cicilan\t\t\t\tRp. \t");
		if (jumlahcicil<100000){
			printf ("   %d0000\t      |\n",jumlahcicil);
			} else if (jumlahcicil<1000000){
			printf ("  %d0000\t      |\n",jumlahcicil);
			} else printf (" %d0000\t      |\n",jumlahcicil);
		printf (" |                                                                            |\n");
		
		if (cicil1==1){
			cicilan=(jumlahcicil/12)*10000;
			printf(" |\t\t\t Cicilan Tiap Bulan: Rp. %d \t\t      |\n",cicilan);
			printf (" |\t\t\t\t\t\t                              |\n");
			printf(" |\t *Anda harus membayar dalam 12 bulan\t\t\t\t      |\n");
		}
		if (cicil2==1){
			cicilan=(jumlahcicil/24)*10000;
			printf(" |\t\t\t Cicilan Tiap Bulan: Rp. %d \t\t      |\n",cicilan);
			printf (" |\t\t\t\t\t\t                              |\n");
			printf(" |\t *Anda harus membayar dalam 24 bulan\t\t\t\t      |\n");
		}
		if (cicil3==1){
			cicilan=(jumlahcicil/36)*10000;
			printf(" |\t\t\t Cicilan Tiap Bulan: Rp. %d \t\t      |\n",cicilan);
			printf (" |\t\t\t\t\t\t                              |\n");
			printf(" |\t *Anda harus membayar dalam 36 bulan\t\t\t\t      |\n");
		}
	}	
	printf (" |                                                                            |\n");
	printf (" ******************************************************************************\n");
	printf (" Silahkan tekan 9 untuk kembali ke menu utama, dan 0 untuk keluar:\n  "); scanf ("%d",&pilihan);
	
	if (pilihan==9){
		system ("cls");
		main();
	} else if (pilihan==0){
		system ("cls");
		keluar();
	} else {
		printf("\n\n	Maaf Input yang anda masukkan tidak valid!!!\n	");
		system("PAUSE");
		system("cls");
		kwitansi();
	}
}

int hitung2(int x, int *y, int z){
	*y=x*z;
	if (*y<100000){
		printf ("               %d0000\t      |\n",*y);
	} else printf ("              %d0000\t      |\n",*y);
	no++;
}

int bantuan(){
	printf ("\n===============================================================================\n");
	printf ("||                                                                           ||\n");
	printf ("||                              [PENJELASAN]                                 ||\n");
	printf ("||                                                                           ||\n");
	printf ("|| # Aplikasi ini digunakan untuk pembelian Laptop/PC.                       ||\n");
	printf ("|| # Profil Laptop/PC dan fitur yang diunggulkan terdapat di katalog.        ||\n");
	printf ("|| # Ada 2 tipe pembayaran yang tersedia yaitu Tunai dan Cicilan.            ||\n");
	printf ("|| # Untuk pembelian dengan program cicilan akan dikenakan bunga 10%%.        ||\n");
	printf ("|| # Perbedaan tenor cicilan 12, 24, dan 36 bulan tidak mempengaruhi besaran ||\n");
	printf ("||   bunga. Bunga cicilan tetap sama yaitu sebesar 10%%.                      ||\n");
	printf ("|| # DP yang diajukan pada program cicilan minimal harus sebesar 30%% dari    ||\n");
	printf ("||   harga yang akan dibeli.                                                 ||\n");
	printf ("|| # Kerugian pelanggan akibat kesalahan penggunaan aplikasi pembelian Laptop||\n");
	printf ("||   atau PC berada diluar tanggung jawab pihak kami                         ||\n");
	printf ("||                                                                           ||\n");
	printf ("||---------------------------------------------------------------------------||\n");
	printf ("||                                                                           ||\n");
	printf ("||                                [ABOUT]                                    ||\n");
	printf ("||                                                                           ||\n");
	printf ("|| Program ini adalah simulasi aplikasi pembelian elektronik. Program ini di ||\n");
	printf ("|| dibuat oleh Anggi Harumanto dan David Raditya sebagai tugas proyek mata   ||\n");
	printf ("|| kuliah Pemrograman Lanjut. Tema yang kami pilih adalah toko, sehingga     ||\n");
	printf ("|| kami membuat aplikasi toko perangkat elektronik                           ||\n");
	printf ("||                                                                           ||\n");
	printf ("||                                                                           ||\n");
	printf ("||                                                        Depok, 12 Mei 2017 ||\n");
	printf ("||                                                                           ||\n");
	printf ("||---------------------------------------------------------------------------||\n");
	printf ("||                                                                           ||\n");
	printf ("||                             [CONCTACT US]                                 ||\n");
	printf ("||                                                                           ||\n");
	printf ("|| # Albertus Anggi Harumanto                                                ||\n");
	printf ("||   HP     : 08578196464                                                    ||\n");
	printf ("||   e-mail : anggiharumanto@gmail.com                                       ||\n");
	printf ("||                                                                           ||\n");
	printf ("|| # David Raditya Karissaputra                                              ||\n");
	printf ("||   HP     : 081315011683                                                   ||\n");
	printf ("||   e-mail : davidraditya.nvidia_corp@yahoo.com                             ||\n");
	printf ("||                                                                           ||\n");
	printf ("===============================================================================\n");
	printf ("Silahkan tekan angka 9 untuk kembali ke menu utama, dan 0 untuk keluar.\n"); scanf ("%d",&pilihan);
	
	printf("\n\n\n\n               ----------[Perintah telah selesai]---------                 \n");
	printf("                                                                            \n");
	printf("  Silahkan tekan 1 untuk kembali ke menu utama, atau tekan 2 untuk keluar   \n");
	printf("                                                                            \n  ");
	scanf("%d",&pilihan);
	while(pilihan!=1&&pilihan!=2){
		printf("Input tidak dikenali.\nSilahkan tekan 1 untuk kembali ke menu utama, atau tekan 2 untuk keluar\n");
		scanf("%d",&pilihan);
		}
	if(pilihan==1){
		system("cls");
		main();
		}else return 0;	
}

int favorit(){
	int i; 
	int j;
	
	printf ("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++                          World's Favorite                            ++\n");
	printf (" ++                                                                      ++\n");
	printf (" ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf( "%8s%17s%24s\n", "Brand", "Value", "Histogram" );

 
 	for ( i = 0; i < 15; i++ ) {
	 	printf( "%7d%16d\t\t\t", i, array[ i ]) ;

 	for ( j = 1; j <= array[ i ]; j++ ) { 
 			printf( "%c", '*' );
 		} 

 		printf( "\n" );
	} 
	printf("\n\n\n\n               ----------[Perintah telah selesai]---------                 \n");
	printf("                                                                            \n");
	printf("  Silahkan tekan 1 untuk kembali ke menu utama, atau tekan 2 untuk keluar   \n");
	printf("                                                                            \n  ");
	scanf("%d",&pilihan);
	while(pilihan!=1&&pilihan!=2){
		printf("Input tidak dikenali.\nSilahkan tekan 1 untuk kembali ke menu utama, atau tekan 2 untuk keluar\n");
		scanf("%d",&pilihan);
		}
	if(pilihan==1){
		system("cls");
		main();
		}else return 0;	
}

int keluar(){
	printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf ("::                                                                      ::\n");
	printf ("::                   Terima Kasih Telah Bertransaksi                    ::\n");
	printf ("::           _____________________________________________              ::\n");
	printf ("::                                                                      ::\n");
	printf ("::                          TECHNIQUE COMPUTER                          ::\n");
	printf ("::                            Computer Store                            ::\n");
	printf ("::                                                                      ::\n");
	printf ("::                                                                      ::\n");
	printf ("::                                                                      ::\n");
	printf ("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");	
	return 0;
}
