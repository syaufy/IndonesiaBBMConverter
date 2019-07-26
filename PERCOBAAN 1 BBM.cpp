#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	system ("COLOR FF");
	int no,konversi,input,premium,pertalite,pertamax,exit;
	int n,c,f,r,k;
	float rupiah,dollar,pound,euro,yen,ringgit;
	
	printf("		=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	printf("\n		||||||||DAFTAR KONVERSI|||||||");
	printf("\n		=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
	printf("\n		1.HARGA BBM\n		2.MATA UANG\n		3.SUHU\n		4.KELUAR\n");
	printf("\n		Daftar yang akan dipilih	: ");scanf("%i", konversi);
	
	
	switch (konversi == 1)
	{
		case true:
			printf ("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf ("%4s", "LITER");
			printf ("%11s", "PREMIUM");
			printf ("%20s", "PERTALITE");
			printf ("%20s\n", "PERTAMAX");
			printf ("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			
			for (no=1,premium=6400,pertalite=7500,pertamax=8000;premium<=64000,pertalite<=75000,pertamax<=80000;no++,premium+=6400,pertalite+=7500,pertamax+=8000)
			{
			printf ("%3d %11d %19d %19d\n",no,premium,pertalite,pertamax);
			}
	}
	
	switch (konversi == 2)
	{
		case true :
			printf ("==================================\n");
			printf ("        KONVERSI MATA UANG        \n");
			printf ("==================================\n");
			printf ("1. Rupiah ke Dollar Amerika\n");
			printf ("2. Rupiah ke Pound Inggris\n");
			printf ("3. Rupiah ke Euro\n");
			printf ("4. Rupiah ke Yen Jepang\n");
			printf ("5. Rupiah ke Ringgit Malaysia\n");
			printf ("----------------------------------\n");
			printf ("Input Pilihan Anda	: ");scanf("%i", &input);
			printf ("----------------------------------\n");
		switch (input == 1)
		{
			case true :
			printf ("1. Rupiah ke Dollar Amerika\n");
			printf ("__________________________________\n");
			printf ("Masukan Nilai Rupiah	: Rp. ");scanf("%f", &rupiah);
			dollar=rupiah*0.00008;
			printf ("Nilai Dollar Amerika	: $ %6.4f\n", dollar);
		}
		switch (input == 2)
		{
			case true :
			printf ("2. Rupiah ke Pound Inggris\n");
			printf ("__________________________________\n");
			printf ("Masukan Nilai Rupiah	: Rp. ");scanf("%f", &rupiah);
			pound=rupiah*0.00005;
			printf ("Nilai Pound Inggris	: £. %6.4f\n", pound);
		}	
		switch (input == 3)
		{
			case true :
			printf ("3. Rupiah ke Euro\n");
			printf ("__________________________________\n");
			printf ("Masukan Nilai Rupiah	: Rp. ");scanf("%f", &rupiah);
			euro=rupiah*0.00007;
			printf ("Nilai Euro	: € %6.4f\n", euro);
		}
		switch (input == 4)
		{
			case true :
			printf ("4. Rupiah ke Yen Jepang\n");
			printf ("__________________________________\n");
			printf ("Masukan Nilai Rupiah	: Rp. ");scanf("%f", &rupiah);
			yen=rupiah*0.00876;
			printf ("Nilai Yen Jepang	: ¥ %6.4f\n", yen);
		}
		switch (input == 5)
		{
			case true :
			printf ("5. Rupiah ke Ringgit Malaysia\n");
			printf ("__________________________________\n");
			printf ("Masukan Nilai Rupiah	: Rp. \n");scanf("%f", &rupiah);
			ringgit=rupiah*0.00032;
			printf ("Nilai Ringgit Malaysia	: RM. %6.4f\n", ringgit);
		}
	}
	
	switch (konversi == 3)
	{
		case true :
			printf ("+++++++++++++++++++++++++++++++++++++++++++\n");
			printf ("%4s", "No.");
			printf ("%9s", "Celsius");
			printf ("%12s", "Fahrenheit");
			printf ("%9s", "Reamur");
			printf ("%9s\n", "Kelvin");
			printf ("+++++++++++++++++++++++++++++++++++++++++++\n");
			
			for (n=1,c=0;c<=100;n++,c+=10)
			{
				printf ("%3d %9d",n,c);
				f=9*c/5+32;
				r=4*c/5;
				k=c+273;
				printf ("%12d %8d %8d\n", f,r,k);
			}
	}
	switch (konversi == 4)
	{
		exit ;4;
	}
	getch ();
	return 0;
}
