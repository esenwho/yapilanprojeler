#include <stdio.h>
#include <stdlib.h>

int main() {
	int girilen,binilen,basim,abonman=10,durak;
	float ucret=100, iade;
	printf("1 - Tam\n2 - Ogrenci\n3 - Sosyal\n4 - 30 Yas ve Uzeri\nKartinizi Girin : ");
	scanf("%d",&girilen);
	if(girilen==1)
	{
		printf("1 - Abonman\n2 - Abonman Degil\nTarifenizi seciniz : ");
		scanf("%d", &basim);
		if(basim==1)
		{
			while (abonman>0)
			{
				printf("1 - IETT\n2 - Metro\n3 - Metrobus\n4 - Marmaray\nBineceginiz tasimayi seciniz : ");
		        scanf("%d", &binilen);
		        if(binilen==1)
		        {
					abonman-=1;
		    		printf("Basim = %d\n%d kadar basiminiz kaldi.\n",1,abonman);
		    		if(abonman==0)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						continue;
					}
		        }
		        else if(binilen==2)
		        {
					abonman-=1;
					printf("Basim = %d\n%d kadar basiminiz kaldi.\n",1,abonman);
					if(abonman==0)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						continue;
					}
		        }
		        else if(binilen==3)
		        {
		    		if(abonman<2)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						abonman-=2;
						printf("Basim = %d\n%d kadar basiminiz kaldi.\n",2,abonman);
						printf("1 - 1.Durak\n2 - 2.Durak\n3 - 3.Durak\n4 - (4 - 9).Durak\n5 - (10 - 15).Durak\n6 - (16 - 21).Durak\n7 - (22 - 27).Durak\n8 - (28 - 33).Durak\n9 - (34 -43+).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1 || durak==2 || durak==3)
		    			{
		    				iade=2-1;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else if(durak==4 || durak==5 || durak==6 || durak==7 || durak==8 || durak==9)
						{
							iade=2-2;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else
						{
							continue;
						}
					}
		       }
		       else if(binilen==4)
		       {
		    		if(abonman<4)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						abonman-=4;
		    			printf("Basim = %d\n%d kadar basiminiz kaldi.\n",4,abonman);
		    			printf("1 - (1 - 7).Durak\n2 - (8 - 14).Durak\n3 - (15 - 21).Durak\n4 - (22 - 28).Durak\n5 - (29 - 35).Durak\n6 - (36 - 43).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=4-1;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);	
						}
						else if(durak==2 || durak==3)
						{
							iade=4-2;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else if(durak==4 || durak==5)
						{
							iade=4-3;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else if(durak==6)
						{
							iade=4-4;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else
						{
							continue;
						}
					}
	        	}
		      	else
		       	{
		       		printf("Yanlis veya eksik deger girdiniz!\n");
		       	}
			}
		}
		else if(basim==2)
		{
			while(ucret>0)
			{
				printf("1 - IETT\n2 - Metro\n3 - Metrobus\n4 - Marmaray\nBineceginiz tasimayi seciniz : ");
		        scanf("%d", &binilen);
		        if(binilen==1)
		        {
		    		if(ucret<20)
		    		{
		    			printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
		    			break;
					}
					else
					{
						ucret-=20;
		    			printf("Odenen tutar : %d \n",20);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			if(ucret==0)
		    			{
		    				printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
						}
						continue;
					}
		        }
		        else if(binilen==2)
		        {
		    		if(ucret<20)
		    		{
		    			printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
		    			break;
					}
					else
					{
						ucret-=20;
		    			printf("Odenen tutar : %d \n",20);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			if(ucret==0)
		    			{
		    				printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
						}
						continue;
					}
		        }   
		        else if(binilen==3)
		        {
			   		if(ucret<29.69)
		    		{
		    			printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
		    			break;
					}
					else
					{
						ucret-=29.69;
						printf("Odenen tutar : %2.2f \n",29.69);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			printf("1 - 1.Durak\n2 - 2.Durak\n3 - 3.Durak\n4 - (4 - 9).Durak\n5 - (10 - 15).Durak\n6 - (16 - 21).Durak\n7 - (22 - 27).Durak\n8 - (28 - 33).Durak\n9 - (34 -43+).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=29.69 - 14.32;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);	
						}
						else if(durak==2)
						{
							iade=29.69 - 17.13;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
		    			else if(durak==3)
		    			{
		    				iade=29.69-20;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==4)
						{
							iade=29.69-22.86;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
		    			else if(durak==5)
						{
							iade=29.69-25.11;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==6)
						{
							iade=29.69-26.27;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==7)
						{
							iade=29.69-27.13;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==8)
						{
							iade=29.69-27.72;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==9)
						{
							iade=29.69-29.69;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else
						{
							continue;
						}
					}
		        }
		        else if(binilen==4)
		        {
		    		if(ucret<44.27)
		    		{
		    			printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
		    			break;
					}
					else
					{
						ucret-=44.27;
						printf("Odenen tutar : %2.2f \n",44.27);
						printf("Kalan bakiyeniz : %f \n",ucret);
						printf("1 - (1 - 7).Durak\n2 - (8 - 14).Durak\n3 - (15 - 21).Durak\n4 - (22 - 28).Durak\n5 - (29 - 35).Durak\n6 - (36 - 43).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=44.27 - 20;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);	
						}
						else if(durak==2)
						{
							iade=44.27 - 25.72;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
		    			else if(durak==3)
		    			{
		    				iade=44.27-29.69;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==4)
						{
							iade=44.27-34.24;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
		    			else if(durak==5)
						{
							iade=44.27-39.99;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==6)
						{
							iade=44.27-44.27;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else
						{
							continue;
						}
					}
		        }
		        else
		        {
		        	printf("Yanlis veya eksik deger girdiniz!");
				}
			}
		}	
	}
	else if(girilen==2)
	{
		printf("1 - Abonman\n2 - Abonman Degil\nBineceginiz tasimayi seciniz : ");
		scanf("%d", &basim);
		if(basim==1)
		{
			while (abonman>0)
			{
				printf("1 - IETT\n2 - Metro\n3 - Metrobus\n4 - Marmaray\nBineceginiz tasimayi seciniz : ");
		        scanf("%d", &binilen);
		        if(binilen==1)
		        {	
		        	abonman-=1;
		    		printf("Basim = %d\n%d kadar basiminiz kaldi.\n",1,abonman);
		    		if(abonman==0)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.");
		    			break;
					}
					else
					{
						continue;
					}
		        }
		        else if(binilen==2)
		        {		    	
		        	abonman-=1;
		    		printf("Basim = %d\n%d kadar basiminiz kaldi.\n",1,abonman);
		    		if(abonman==0)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.");
		    			break;
					}	
					else
					{
						continue;
					}
		        }
		        else if(binilen==3)
		        {
		    		if(abonman<2)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.");
		    			break;
					}
					else
					{
						abonman-=2;
		    			printf("Basim = %d\n%d kadar basiminiz kaldi.\n",2,abonman);
		    			printf("1 - 1.Durak\n2 - 2.Durak\n3 - 3.Durak\n4 - (4 - 9).Durak\n5 - (10 - 15).Durak\n6 - (16 - 21).Durak\n7 - (22 - 27).Durak\n8 - (28 - 33).Durak\n9 - (34 -43+).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1 || durak==2 || durak==3)
		    			{
		    				iade=2-1;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);	
		    				if(abonman==0)
							{
								printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");	
							}	
						}
						else if(durak==4 || durak==5 || durak==6 || durak==7 || durak==8 || durak==9)
						{
							iade=2-2;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
		    				if(abonman==0)
							{
								printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");	
							}	
						}
						else
						{
							continue;
						}
					}
		        }
		       	else if(binilen==4)
		  		{
		    		if(abonman<4)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.");
		    			break;
					}
					else
					{
						abonman-=4;
		    			printf("Basim = %d\n%d kadar basiminiz kaldi.\n",4,abonman);
						printf("1 - (1 - 7).Durak\n2 - (8 - 14).Durak\n3 - (15 - 21).Durak\n4 - (22 - 28).Durak\n5 - (29 - 35).Durak\n6 - (36 - 43).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=4-1;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);	
						}
						else if(durak==2 || durak==3)
						{
							iade=4-2;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else if(durak==4 || durak==5)
						{
							iade=4-3;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else if(durak==6)
						{
							iade=4-4;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else
						{
							continue;
						}
					}
	         	}
		       	else
		       	{
		        	printf("Yanlis veya eksik deger girdiniz!\n");
		       	}
			}
		}
		else if(basim==2)
		{
			while(ucret>0)
			{
				printf("1 - IETT\n2 - Metro\n3 - Metrobus\n4 - Marmaray\nBineceginiz tasimayi seciniz : ");
		        scanf("%d", &binilen);
		        if(binilen==1)
		        {
		    		if(ucret<9.76)
					{
						printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
						break;
					}
					else
					{
						ucret-=9.76;
		    			printf("Odenen tutar : %f \n",9.76);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
						continue;
					}
		        }
		        else if(binilen==2)
		        {
		    		if(ucret<9.76)
		    		{
		    			printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
		    			break;
					}
					else
					{
						ucret-=9.76;
		    			printf("Odenen tutar : %1.2f \n",9.76);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
						continue;
					}
		        }   
		        else if(binilen==3)
		        {
		        	if(ucret<9.76)
		    		{
		    			printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
		    			break;
					}
					else
					{
						ucret-=9.76;
						printf("Odenen tutar : %1.2f \n",9.76);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			printf("1 - 1.Durak\n2 - 2.Durak\n3 - 3.Durak\n4 - (4 - 9).Durak\n5 - (10 - 15).Durak\n6 - (16 - 21).Durak\n7 - (22 - 27).Durak\n8 - (28 - 33).Durak\n9 - (34 -43+).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=9.76-6.31;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %1.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==2)
						{
							iade=9.76-6.87;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %1.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);		    		
						}
						else if(durak==3)
						{
							iade=9.76-8;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %1.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==4)
						{
							iade=9.76-9.13;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %1.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==5 || durak==6  || durak==7  || durak==8 || durak==9)
						{
							iade=9.76-9.76;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %1.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
					}
				}
		        else if(binilen==4)
		        {
		        	if(ucret<20)
		        	{
		        		printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						ucret-=20;
		    			printf("Odenen tutar : %d \n",20);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			printf("1 - (1 - 7).Durak\n2 - (8 - 14).Durak\n3 - (15 - 21).Durak\n4 - (22 - 28).Durak\n5 - (29 - 35).Durak\n6 - (36 - 43).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=20 - 9.76;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);	
						}
						else if(durak==2)
						{
							iade=20 - 12.02;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
		    			else if(durak==3)
		    			{
		    				iade=20-14.32;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==4)
						{
							iade=20-16.28;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
		    			else if(durak==5)
						{
							iade=20-19.14;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==6)
						{
							iade=20-20;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else
						{
							continue;
						}
		    			if(ucret==0)
		    			{
		    				printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
						}
						else
						{
							continue;
						}
					}
		        }
		        else
		        {
		        	printf("Yanlis veya eksik deger girdiniz!");
				}
			}
		}
	}
	else if(girilen==3)
	{
		printf("1 - Abonman\n2 - Abonman Degil\nTarifenizi seciniz : ");
		scanf("%d", &basim);
		if(basim==1)
		{
			while (abonman>0)
			{
				printf("1 - IETT\n2 - Metro\n3 - Metrobus\n4 - Marmaray\nBineceginiz tasimayi seciniz : ");
		        scanf("%d", &binilen);
		        if(binilen==1)
		        {
		        	abonman-=1;
		    		printf("Basim = %d\n%d kadar basiminiz kaldi.\n",1,abonman);
		        	if(abonman==0)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						continue;
					}
		        }
		        else if(binilen==2)
		        {
		        	abonman-=1;
		    		printf("Basim = %d\n%d kadar basiminiz kaldi.\n",1,abonman);
		        	if(abonman==0)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						continue;
					}
		        }
		        else if(binilen==3)
		        {
		        	if(abonman<2)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						abonman-=2;
						printf("Basim = %d\n%d kadar basiminiz kaldi.\n",2,abonman);
						printf("1 - 1.Durak\n2 - 2.Durak\n3 - 3.Durak\n4 - (4 - 9).Durak\n5 - (10 - 15).Durak\n6 - (16 - 21).Durak\n7 - (22 - 27).Durak\n8 - (28 - 33).Durak\n9 - (34 -43+).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
						if(durak==1 || durak==2 || durak==3)
		    			{
		    				iade=2-1;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);	
						}
						else if(durak==4 || durak==5 || durak==6 || durak==7 || durak==8 || durak==9)
						{
							iade=2-2;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else
						{
							continue;
						}
					}	
		       	}
		       	else if(binilen==4)
		       	{
		       		if(abonman<4)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						abonman-=4;
		    			printf("Basim = %d\n%d kadar basiminiz kaldi.\n",4,abonman);
		    			printf("1 - (1 - 7).Durak\n2 - (8 - 14).Durak\n3 - (15 - 21).Durak\n4 - (22 - 28).Durak\n5 - (29 - 35).Durak\n6 - (36 - 43).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=4-1;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);	
						}
						else if(durak==2 || durak==3)
						{
							iade=4-2;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else if(durak==4 || durak==5)
						{
							iade=4-3;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else if(durak==6)
						{
							iade=4-4;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else
						{
							continue;
						}
					}
	         	}
		       else
		       {
		        	printf("Yanlis veya eksik deger girdiniz!\n");
		       }
			}
		}
		else if(basim==2)
		{
			while(ucret>0)
		    {
				printf("1 - IETT\n2 - Metro\n3 - Metrobus\n4 - Marmaray\nBineceginiz tasimayi seciniz : ");
		        scanf("%d", &binilen);
		        if(binilen==1)
		        {
		        	if(ucret<14.32)
		        	{
		        		printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
		        		break;
					}
					else
					{
						ucret-=14.32;
		    			printf("Odenen tutar : %2.2f \n",14.32);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			if(ucret==0)
		    			{
		    				printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
						}
						else
						{
							continue;
						}
					}
		        }
		        else if(binilen==2)
		        {
		        	if(ucret<14.32)
		        	{
		        		printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
		        		break;
					}
					else
					{
						ucret-=14.32;
		    			printf("Odenen tutar : %2.2f \n",14.32);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			if(ucret==0)
		    			{
		    				printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
						}
						else
						{
							continue;
						}
					} 
		        }   
		        else if(binilen==3)
		        {
		        	if(ucret<16.28)
		        	{
		        		printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
		        		break;
					}
					else
					{
						ucret-=16.28;
						printf("Odenen tutar : %2.2f \n",16.28);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			printf("1 - 1.Durak\n2 - 2.Durak\n3 - 3.Durak\n4 - (4 - 9).Durak\n5 - (10 - 15).Durak\n6 - (16 - 21).Durak\n7 - (22 - 27).Durak\n8 - (28 - 33).Durak\n9 - (34 -43+).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=16.28-8.86;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==2)
						{
							iade=16.28-10.59;
		    				ucret+=iade;
			    			printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==3)
						{
							iade=16.28-12.17;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==4)
						{
							iade=16.28-14.32;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==5)
						{
							iade=16.28-14.52;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==6 || durak==7)
						{
							iade=16.28-15.44;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==8 || durak==9)
						{
							iade=16.28-16.28;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else
						{
							continue;
						}
					}
		        }
		        else if(binilen==4)
		        {
		        	if(ucret<30.86)
		        	{
		        		printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
		        		break;
					}
					else
					{
						ucret-=30.86;
		    			printf("Odenen tutar : %2.2f \n",30.86);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			printf("1 - (1 - 7).Durak\n2 - (8 - 14).Durak\n3 - (15 - 21).Durak\n4 - (22 - 28).Durak\n5 - (29 - 35).Durak\n6 - (36 - 43).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=30.86 - 14.32;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);	
						}
						else if(durak==2)
						{
							iade=30.86 - 17.73;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
		    			else if(durak==3)
		    			{
		    				iade=30.86-20.86;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==4)
						{
							iade=30.86-24.28;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
		    			else if(durak==5)
						{
							iade=30.86-28.57;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==6)
						{
							iade=30.86-30.86;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else
						{
							continue;
						}
		    			if(ucret==0)
		    			{
		    				printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
						}
						else
						{
							continue;
						}
					}
		        }
		        else
		        {
		        	printf("Yanlis veya eksik deger girdiniz!");
				}
		   	}
		}
	}
	else if(girilen==4)
	{
		printf("1 - Abonman\n2 - Abonman Degil\nTarifenizi seciniz : ");
		scanf("%d", &basim);
		if(basim==1)
		{
			while (abonman>0)
			{
				printf("1 - IETT\n2 - Metro\n3 - Metrobus\n4 - Marmaray\nBineceginiz tasimayi seciniz : ");
		        scanf("%d", &binilen);
		        if(binilen==1)
		        {
					abonman-=1;
		    		printf("Basim = %d\n%d kadar basiminiz kaldi.\n",1,abonman);
		    		if(abonman==0)
		    		{
		    			printf("Abonman bitmistir. Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						continue;
					}
		        }
		        else if(binilen==2)
		        {
		        	abonman-=1;
		    		printf("Basim = %d\n%d kadar basiminiz kaldi.\n",1,abonman);
		        	if(abonman==0)
		    		{
		    			printf("Abonman bitmistir. Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						continue;
					}
		        }
		        else if(binilen==3)
		        {
		        	if(abonman<2)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						abonman-=2;
						printf("Basim = %d\n%d kadar basiminiz kaldi.\n",2,abonman);
						printf("1 - 1.Durak\n2 - 2.Durak\n3 - 3.Durak\n4 - (4 - 9).Durak\n5 - (10 - 15).Durak\n6 - (16 - 21).Durak\n7 - (22 - 27).Durak\n8 - (28 - 33).Durak\n9 - (34 -43+).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
						if(durak==1 || durak==2 || durak==3)
		    			{
		    				iade=2-1;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);	
						}
						else if(durak==4 || durak==5 || durak==6 || durak==7 || durak==8 || durak==9)
						{
							iade=2-2;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else
						{
							continue;
						}
					}
		       	}
		       	else if(binilen==4)
		       	{
		       		if(abonman<4)
		    		{
		    			printf("Abonman yetersiz! Abonman veya bakiye yukleyiniz.\n");
		    			break;
					}
					else
					{
						abonman-=4;
		    			printf("Basim = %d\n%d kadar basiminiz kaldi.\n",4,abonman);
		    			printf("1 - (1 - 7).Durak\n2 - (8 - 14).Durak\n3 - (15 - 21).Durak\n4 - (22 - 28).Durak\n5 - (29 - 35).Durak\n6 - (36 - 43).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=4-1;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);	
						}
						else if(durak==2 || durak==3)
						{
							iade=4-2;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else if(durak==4 || durak==5)
						{
							iade=4-3;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else if(durak==6)
						{
							iade=4-4;
		    				abonman+=iade;
		    				printf("Ýade edilen abonman : %1.f \n",iade);
		    				printf("Kalan abonman : %d \n",abonman);
						}
						else
						{
							continue;
						}
					}
		  	 	}
		  	 	else
		       	{
		        	printf("Yanlis veya eksik deger girdiniz!\n");
		       	}
	        }    
		}
		if(basim==2)
		{
			while(ucret>0)
			{
				printf("1 - IETT\n2 - Metro\n3 - Metrobus\n4 - Marmaray\nBineceginiz tasimayi seciniz : ");
		        scanf("%d", &binilen);
		        if(binilen==1)
		        {
		        	if(ucret<18)
		        	{
		        		printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
		        		break;
					}
					else
					{
						ucret-=18;
		    			printf("Odenen tutar : %d \n",18);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			if(ucret==0)
		    			{
		    				printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
						}
						else
						{
							continue;
						}
					}
		        }
		        else if(binilen==2)
		        {
		        	if(ucret<18)
		        	{
		        		printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
		        		break;
					}
					else
					{
						ucret-=18;
		    			printf("Odenen tutar : %d \n",18);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			if(ucret==0)
		    			{
		    				printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
						}
						else
						{
							continue;
						}
					}
		        }   
		        else if(binilen==3)
		        {
		        	if(ucret<26.71)
		        	{
		        		printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
		        		break;
					}
					else
					{
						ucret-=26.71;
		    			printf("Odenen tutar : %2.2f \n",26.71);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			printf("1 - 1.Durak\n2 - 2.Durak\n3 - 3.Durak\n4 - (4 - 9).Durak\n5 - (10 - 15).Durak\n6 - (16 - 21).Durak\n7 - (22 - 27).Durak\n8 - (28 - 33).Durak\n9 - (34 -43+).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=26.71-12.89;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==2)
						{
							iade=26.71-15.42;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==3)
						{
							iade=26.71-18;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==4)
						{
							iade=26.71-20.57;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==5)
						{
							iade=26.71-22.60;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==6)
						{
							iade=26.71-23.64;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==7)
						{
							iade=26.71-24.42;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==8)
						{
							iade=26.71-24.95;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==9)
						{
							iade=26.71-26.71;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
		    			if(ucret==0)
		    			{
		    				printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
						}
						else
						{
							continue;
						}
					}
		        }
		        else if(binilen==4)
		        {
		        	if(ucret<44.27)
		        	{
		        		printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.");
		        		break;
					}
					else
					{
						ucret-=44.27;
		    			printf("Odenen tutar : %2.2f \n",44.27);
		    			printf("Kalan bakiyeniz : %f \n",ucret);
		    			printf("1 - (1 - 7).Durak\n2 - (8 - 14).Durak\n3 - (15 - 21).Durak\n4 - (22 - 28).Durak\n5 - (29 - 35).Durak\n6 - (36 - 43).Durak\nKacinci durakta ineceginizi giriniz :");
		    			scanf("%d",&durak);
		    			if(durak==1)
		    			{
		    				iade=44.27 - 20;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);	
						}
						else if(durak==2)
						{
							iade=44.27 - 25.72;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
		    			else if(durak==3)
		    			{
		    				iade=44.27-29.69;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==4)
						{
							iade=44.27-34.24;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
		    			else if(durak==5)
						{
							iade=44.27-39.99;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else if(durak==6)
						{
							iade=44.27-44.27;
		    				ucret+=iade;
		    				printf("Ýade edilen tutar : %2.2f \n",iade);
		    				printf("Kalan bakiyeniz : %f \n",ucret);
						}
						else
						{
							continue;
						}
		    			if(ucret==0)
		    			{
		    				printf("Bakiye yetersiz! Abonman veya bakiye yukleyiniz.\n");
						}
						else
						{
							continue;
						}
					} 
				}
				else
		        {
		        	printf("Yanlis veya eksik deger girdiniz!");
				}
			}
		}
	}
	else
	{
		printf("Yanlis veya eksik deger girdiniz!\n");
	}
	return 0;
}
