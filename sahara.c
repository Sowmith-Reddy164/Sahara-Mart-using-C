#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int main() {
	float gst,cgst,sgst;
	int u;
	int jin=0;
	struct address{
		char name[20];
		char add[50];
		char lm[20];
		char pin[10];
		char ph[11];
	};
	struct address s1;
	struct shop{
		char name[50];
	}; 
     struct shop ft[100];
   int category, subcategory,subsubcategories;
   int cost[100];
   char items[100];
   char cat;
   int p;
   int tc=0;
	char arr[100];
	char arrs[100];
	
    printf("^_^****************************** ********* ********* *** ********* ***********************************************^_^\n");
	printf("^_^***************************** ********* *********** * *********** **********************************************^_^\n");
	printf("^_^****************************           WELCOME TO SAHARA MART.             ********************************************^_^\n");
	printf("^_^****************************** *********** ************* ******** **********************************************^_^\n");
	
	for (int i=1;i<=1&i<=5;i++)
	{
		for(int j=1;j<=39;j++)
		{
			printf(" - ");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	char str[20];
	printf("                                       PLEASE ENTER YOUR NAME :  ");
	scanf("%s",str);
struct login{
    	char usrname[20];
    	char paswrd[30];
	};
	char name1[20];
	int choise;
    char password1[20];
   
	struct login arry[5];
	strcpy(arry[0].usrname,"iiitn");
	strcpy(arry[0].paswrd,"maxcsd");
  printf("\n\n\t\t=============LOGIN USING YOUR USERNAME AND PASSWORD:=============\n");
  
 
  printf("\n1.LOGIN:");
  printf("\n2.SIGN UP:");
  scanf("%d",&choise);
  for(int o=1;o<4;o++)
  {
  
  if(choise==1)
  	{
  		printf("\nENTER YOUR USERNAME:\n");
  		 scanf("%s",arry[o].usrname);
  		 printf("ENTER YOUR PASSWORD\n");
  		 scanf("%s",arry[o].paswrd);
  		 if(strcmp(arry[0].usrname,arry[o].usrname)==0 && strcmp(arry[0].paswrd,arry[o].paswrd)==0)
  		 {printf("LOGGED IN SUCCESSFULLY\n");
		   system("cls");//clear screen
		   break;
		   }
		   else{
		   
		   printf("INCORRECT USERNAME/PASSWORD\n");
		   printf("PLEASE TRY AGAIN");
		   system("cls");//clear screen
		   }
	  }
	if(choise==2)
	  {
		  printf("\nENTER YOUR USERNAME:\n");
  		 scanf("%s",arry[o].usrname);
  		 printf("ENTER YOUR PASSWORD\n");
  		 scanf("%s",arry[o].paswrd);
  		 printf("\nENTER YOUR USERNAME AGAIN TO VERIFY:\n");
  		 scanf("%s",arry[o+1].usrname);
  		 printf("ENTER YOUR PASSWORD TO VERIFY\n");
  		 scanf("%s",arry[o+1].paswrd);
  		  if(strcmp(arry[o+1].usrname,arry[o].usrname)==0&&strcmp(arry[o+1].paswrd,arry[o].paswrd)==0)
  		 {printf("SIGNED UP SUCCESSFULLY");
  		 system("cls");
  		 printf("\nCONTINUE TO LOGIN");//clear screen
  		 printf("\nENTER YOUR USERNAME:\n");
  		 scanf("%s",arry[o].usrname);
  		 printf("ENTER YOUR PASSWORD\n");
  		 scanf("%s",arry[o].paswrd);
  		 if(strcmp(arry[o+1].usrname,arry[o].usrname)==0&&strcmp(arry[o+1].paswrd,arry[o].paswrd)==0)
  		 {printf("LOGGED IN SUCCESSFULLY\n");
  		 
		   break;
		   system("cls");
		   }
		   else
		  {
		   printf("INCORRECT USERNAME/PASSWORD\n");
		    printf("PLEASE TRY AGAIN");
			system("cls");//clear screen;
		   }
		   
  }
  }
}
	printf("LOGGED IN AS %s\n",str);
	scanf("%c",&cat);
for(int i=0;i>=0;i++){
   printf("-----------------------------------------------------------------------------------------------");
   printf("\nHEY %s WHAT ARE YOU LOOKING FOR....?\nENTER YOUR CHOICE:",str);
   printf("\n1-ELECTRONICS\n2-HOME APPLIANCES\n3-FASHION AND BEAUTY\n4-SPORTS\n5-BOOKs ");
   scanf("%d", &category);
   printf("-----------------------------------------------------------------------------------------------\n");
if (category == 1) {
      printf("Enter the category (1-5):\n1-Headphones\n2-Home Theatres\n3-Speakers\n4-Laptops\n5-Tablets\n6-Camera\n7-Mobiles\n8-Watches");
      scanf("%d", &subcategory);
      printf("-----------------------------------------------------------------------------------------------\n");
      if (subcategory == 1) {
      	printf("1-SOnY-xht500-$200\n2-BAoT-nirvanna-520db-$150\n3-SKuLCANdY-hesh3.0-$250\n4-JbL-710NcBS-$190\n5-APPLe AIRpoDS-$90");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected SOnY-xht500");
      		tc+=200;
      		cost[i]=200;
      		strcpy(ft[i].name,"SOnY-xht500");
      		jin++;

      		
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected BAoT-nirvanna-520db");
      		tc+=150;
      		cost[i]=150;
      		strcpy(ft[i].name," BAoT-nirvanna-520db");
      		jin++;
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected SKuLCANdY-hesh3.0 ");
      		tc+=250;
      		cost[i]=250;
      		strcpy(ft[i].name,"SKuLCANdY-hesh3.0 ");
      		jin++;
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected JbL-710NcBS ");
      		tc+=190;
      		cost[i]=190;
      		strcpy(ft[i].name,"JbL-710NcBS");
      		jin++;
      	
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected APPLe AIRpoDS");
      		tc+=90;
      		cost[i]=90;
      		strcpy(ft[i].name,"APPLe AIRpoDS");
      		jin++;
      	
		  }
		  
         
      } else if (subcategory == 2) {
      	printf("1-PHILLiPS MMS22Ob2.3-$2010\n2-SOnY SA-D40-$1500\n3-JbL SB271 DOLBY ATmoS-$1950\n4-bOAT FG100-$1900\n5-PANAsoNIC-$1090");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected PHILLiPS MMS22Ob2.3");
      		tc+=2010;
      		cost[i]=2010;
      		strcpy(ft[i].name,"PHILLiPS MMS22Ob2.3");
      		jin++;
      		
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected SOnY SA-D40");
      		tc+=1500;
      		cost[i]=1500;
      		strcpy(ft[i].name," SOnY SA-D40");
      		jin++;
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected JbL SB271 DOLBY ATmoS ");
      		tc+=1950;
      		cost[i]=1950;
      	strcpy(ft[i].name,"JbL SB271 DOLBY ATmoS");
      	jin++;
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected bOAT FG100 ");
      		tc+=1900;
      		cost[i]=1900;
      	strcpy(ft[i].name,"bOAT FG100");
      	jin++;
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected PANAsoNIC ");
      		tc+=1090;
      		cost[i]=1090;
      		strcpy(ft[i].name,"PANAsoNIC ");
      		jin++;
		  }
	
      }  else if (subcategory == 3) {
      	printf("1-JbL rtwh-400-$201\n2-SOnY wA-S40-$500\n3-BoAt Stone DOLBY ATmoS-$150\n4-PHilLIPS WPG100-$300\n5-PANAsoNIC BV20-$290");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected JbL rtwh-400");
      		tc+=201;
      		cost[i]=201;
      	strcpy(ft[i].name,"JbL rtwh-400");
      	jin++;
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected SOnY wA-S40");
      		tc+=500;
      		cost[i]=500;
      	strcpy(ft[i].name,"SOnY wA-S40");
      	jin++;
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected BoAt Stone DOLBY ATmoS ");
      		tc+=150;
      		cost[i]=150;
      		strcpy(ft[i].name,"BoAt Stone DOLBY ATmoS");
      		jin++;
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected PHilLIPS WPG100");
      		tc+=300;
      		cost[i]=300;
      	strcpy(ft[i].name,"PHilLIPS WPG100");
      	jin++;
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected PANAsoNIC BV20 ");
      		tc+=290;
      		cost[i]=290;
      		strcpy(ft[i].name,"PANAsoNIC BV20 ");
      		jin++;
		  }
	
      }
	  else if (subcategory == 4) {
      	printf("1-APPlE Mac BOoK PRO-$2000\n2-DElL ALieN WAreWARE-$1500\n3-lenovo yOGA-$2050\n4-Asus RoG-$1900\n5-HP-$1090");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected APPlE Mac BOoK PRO");
      		tc+=2000;
      		cost[i]=2000;
      		strcpy(ft[i].name," APPlE Mac BOoK PRO");
      		jin++;
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected DElL ALieN WAreWAR");
      		tc+=1500;
      		cost[i]=1500;
      	strcpy(ft[i].name," DElL ALieN WAreWAR");
      	jin++;
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected  lenovo yOGA");
      		tc+=2050;
      		cost[i]=2050;
      		strcpy(ft[i].name," lenovo yOGA");
      		jin++;
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Asus RoG ");
      		tc+=1900;
      		cost[i]=1900;
      		strcpy(ft[i].name,"Asus RoG ");
      		jin++;
      		
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected HP");
      		tc+=1090;
      		cost[i]=1090;
      	strcpy(ft[i].name," HP");
      	jin++;
		  }
		   
	  else {
         printf("Invalid subcategory\n");
      }
  }
      else if (subcategory == 5) {
      	printf("1-SAMSunG S8-$200\n2-leNoVo M10-$100\n3-I pAD-11Pro-$2050\n4-Asus RoG-$1900\n5-HP-$1090");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected SAMSunG S8");
      		tc+=200;
      		cost[i]=200;
      		strcpy(ft[i].name,"SAMSunG S8");
      		jin++;
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected leNoVo M10 ");
      		tc+=100;
      		cost[i]=100;
      		strcpy(ft[i].name,"leNoVo M10");
      		jin++;
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected  I pAD-11Pro");
      		tc+=2050;
      		cost[i]=2050;
      		strcpy(ft[i].name," I pAD-11Pro");
      		jin++;
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Asus RoG");
      		tc+=1900;
      		cost[i]=1900;
      		strcpy(ft[i].name," Asus RoG");
      		jin++;
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected HP");
      		tc+=1090;
      		cost[i]=1090;
      		strcpy(ft[i].name,"HP");
      		jin++;
		  }
		   
	  else {
         printf("Invalid subcategory\n");
      }
      
   } else if (subcategory == 6) {
      	printf("1-CANoN EoS-1500D-$200\n2-SoNY aLPhA-$500\n3-FujuFlim INsTax MInI90C-$100\n4-HaZZLEbLAd-$1000\n5-PANaSONIc LUNIxG716mp-$390");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected CANoN EoS-1500D");
      		tc+=200;
      		cost[i]=200;
      	strcpy(ft[i].name,"CANoN EoS-1500D");
      	jin++;
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected  SoNY aLPhA");
      		tc+=500;
      		cost[i]=500;
      		strcpy(ft[i].name,"SoNY aLPhA");
      		jin++;
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected FujuFlim INsTax MInI90C");
      		tc+=100;
      		cost[i]=100;
      	strcpy(ft[i].name,"FujuFlim INsTax MInI90C");
      	jin++;
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected HaZZLEbLAd");
      		tc+=1000;
      		cost[i]=1000;
      		strcpy(ft[i].name," HaZZLEbLAd");
      		jin++;
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected PANaSONIc LUNIxG716mp");
      		tc+=390;
      		cost[i]=390;
      		strcpy(ft[i].name," PANaSONIc LUNIxG716mp");
      		jin++;
		  }
		   
	  else {
         printf("Invalid subcategory\n");
      }
      
   }  
    else if (subcategory == 7) {
      	printf("1-OnePLUs 11t-$200\n2-SoNY xperIA-$500\n3-AppLE14 ProMAx-$300\n4-REdMagIc-$190\n5-SAmSuNG s23ULTRa-$390");
        printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected OnePLUs 11t");
      		tc+=200;
      		cost[i]=200;
      	strcpy(ft[i].name,"OnePLUs 11t");
      	jin++;
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected SoNY xperIA ");
      		tc+=500;
      		cost[i]=500;
      	strcpy(ft[i].name,"SoNY xperIA ");
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected AppLE14 ProMAx");
      		tc+=300;
      		cost[i]=300;
      	strcpy(ft[i].name,"AppLE14 ProMAx");
      	jin++;
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected REdMagIc");
      		tc+=190;
      		cost[i]=190;
      	strcpy(ft[i].name," REdMagIc");
      	jin++;
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected SAmSuNG s23ULTRa");
      		tc+=390;
      		cost[i]=390;
      	strcpy(ft[i].name,"SAmSuNG s23ULTRa");
      	jin++;
		  }
		   
	  else {
         printf("Invalid subcategory\n");
      }
  }
  else if (subcategory == 8) {
      	printf("1-CaSiO GshoCk-$50\n2-tiMEx MIRIner-$90\n3-fastrax HBW235-$70\n4-SIeKo AAuTomatIc-$100\n5-RaDo fg567-$390");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected CaSiO GshoCk");
      		tc+=50;
      		cost[i]=50;
      	strcpy(ft[i].name," CaSiO GshoCk");
      	jin++;
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected tiMEx MIRIne");
      		tc+=90;
      		cost[i]=90;
      	strcpy(ft[i].name," tiMEx MIRIne");
      	jin++;
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected fastrax HBW235");
      		tc+=70;
      		cost[i]=70;
      	strcpy(ft[i].name," fastrax HBW235");
      	jin++;
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected SIeKo AAuTomatIc");
      		tc+=100;
      		cost[i]=100;
      	strcpy(ft[i].name,"SIeKo AAuTomatI");
      	jin++;
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected RaDo fg567");
			  tc+=390;
			  cost[i]=390;
      		strcpy(ft[i].name,"RaDo fg567");
      		jin++;
		  }
		   
	  else {
         printf("Invalid subcategory\n");
      }
  }
}
  else if (category == 2) {
      printf("Enter the category (1-5):\n1-Air Conditiner\n2-Television\n3-Washing Machine\n4-Refrigerator\n5-Microwave Oven ");
      scanf("%d", &subcategory);
       printf("-----------------------------------------------------------------------------------------------\n");
       if (subcategory == 1) {
      	printf("1-Lloyd-$400\n2-Blue star-$350\n3-Voltas-$450\n4-LG-$500\n5-Whirlpool-$400");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Lloyd");
      		tc+=400;
      		cost[i]=400;
      		strcpy(ft[i].name,"Llyod");
      		jin++;
      		
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Blue star");
      		tc+=350;
      		cost[i]=350;
      		strcpy(ft[i].name,"Blue star");
      		jin++;
      		
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Voltas ");
      		tc+=450;
      		cost[i]=450;
      		strcpy(ft[i].name,"Voltas");
      		jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected LG ");
      		tc+=500;
      		cost[i]=500;
      		strcpy(ft[i].name,"LG");
      		jin++;
      	
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected Whirlpool");
      		tc+=400;
      		cost[i]=400;
      		strcpy(ft[i].name,"Whirlpool");
      		jin++;
      	
		  }
		  
         
      }
       else if (subcategory == 2) {
      	printf("1-Samsung-$150\n2-Sharp-$120\n3-Sony-$200\n4-MI-$140\n5-One plus-$180");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Samsung");
      		tc+=150;
      		cost[i]=150;
      		strcpy(ft[i].name,"Samsung");
      		jin++;
      	
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Sharp");
      		tc+=120;
      		cost[i]=120;
      		strcpy(ft[i].name,"Sharp");
      		jin++;
      	
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Sony ");
      		tc+=200;
      		cost[i]=200;
      		strcpy(ft[i].name,"Sony");
      		jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected MI ");
      		tc+=140;
      		cost[i]=140;
      		strcpy(ft[i].name,"MI");
      	    jin++;
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected One Plus");
      		tc+=180;
      		cost[i]=180;
      		strcpy(ft[i].name,"One Puls");
      		jin++;
      	
		  }
		  
         
      }
	  else  if (subcategory == 3) {
      	printf("1-Onida-$160\n2-Panasonic-$180\n3-Haier-$200\n4-Bosch-$250\n5-LG-$150");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Onida");
      		tc+=160;
      		cost[i]=160;
      		strcpy(ft[i].name,"Onida");
      		jin++;
      	
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Panasonic");
      		tc+=180;
      		cost[i]=180;
      	strcpy(ft[i].name,"Panasonic");
      	jin++;
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Haier ");
      		tc+=200;
      		cost[i]=200;
      		strcpy(ft[i].name,"Haier");
      		jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Bosch ");
      		tc+=250;
      		cost[i]=250;
      		strcpy(ft[i].name,"Bosch");
      		jin++;
      	
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected LG");
      		tc+=150;
      		cost[i]=150;
      		strcpy(ft[i].name,"LG");
      		jin++;
      		
		  }
		  
         
      }
      else  if (subcategory == 4) {
      	printf("1-Godrej-$125\n2-Toshiba-$150\n3-Generic-$110\n4-Leonard-$120\n5-Electrolux-$160");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Godrej");
      		tc+=125;
      		cost[i]=125;
      		strcpy(ft[i].name,"Godrej");
      		jin++;
      	
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Toshiba");
      		tc+=150;
      		cost[i]=150;
      		strcpy(ft[i].name,"Toshiba");
      		jin++;
      		
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Generic ");
      		tc+=110;
      		cost[i]=110;
      		strcpy(ft[i].name,"Generic");
      		jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Leonard ");
      		tc+=120;
      		cost[i]=120;
      		strcpy(ft[i].name,"Leonard");
      		jin++;
      		
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected Electrolux");
      		tc+=160;
      		cost[i]=160;
      		strcpy(ft[i].name,"Electrolux");
      		jin++;
      	
		  }
		  
         
      }
      else  if (subcategory == 5) {
      	printf("1-Borosil-$55\n2-Philips-$70\n3-iBell-$50\n4-Prestige-$100\n5-Electroprime-$60");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Borosil ");
      		tc+=55;
      		cost[i]=55;
      		strcpy(ft[i].name,"Borosil");
      		jin++;
      	
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Philips");
      		tc+=70;
      		cost[i]=70;
      		strcpy(ft[i].name,"Philips");
      		jin++;
      		
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected iBell ");
      		tc+=50;
      		cost[i]=50;
      		strcpy(ft[i].name,"iBell");
      		jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Prestige ");
      		tc+=100;
      		cost[i]=100;
      		strcpy(ft[i].name,"Prestige");
      		jin++;
      		
		  }
		else if(subsubcategories==5)
      	{
      		printf("you`ve selected Electroprime");
      		tc+=60;
      		cost[i]=60;
      		strcpy(ft[i].name,"Electroprime");
      		jin++;
      		
		  }
		  
         
      }
    
	  }
      
  else if (category == 3) {
      printf("Enter the category (1-3):\n1-Skin Care\n2-Hair Care\n3-Fragrances ");
      scanf("%d", &subcategory);
       printf("-----------------------------------------------------------------------------------------------\n");
      if (subcategory == 1) {
      	printf("1-Nivea Cocoa Nourish-$20\n2-MamaEarth Green tea Face toner-$10\n3-Simple Face wash-$15\n4-Garnier Face mask-$10");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Nivea Cocoa Nourish");
      		tc+=20;
      		cost[i]=20;
      		strcpy(ft[i].name,"Nivea Cocoa Nourish");
      		jin++;
      	
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected MamaEarth Green tea Face toner");
      		tc+=10;
      		cost[i]=10;
      		strcpy(ft[i].name,"MamaEarth Green tea Face toner");
      		jin++;
      	
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Simple Face wash");
      		tc+=15;
      		cost[i]=15;
      		strcpy(ft[i].name,"Simole Face wash");
      		jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Garnier Face mask ");
      			tc+=10;
      			cost[i]=10;
      			strcpy(ft[i].name,"Garnier Face mask");
      			jin++;
      	
		  }
		
		  
       }
       else  if (subcategory == 2) {
      	printf("1-Head and Shoulder shampoo-$10\n2-Tresemme Conditioner-$8\n3-Parachute HairOil-$12\n4-Loreal paris Total repair serum-$5");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Head and Shoulder shampoo  ");
      			tc+=10;
      			cost[i]=10;
      			strcpy(ft[i].name,"Head and Shoulder shampoo");
      			jin++;
      	
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Tresemme Conditioner");
      			tc+=8;
      			cost[i]=8;
      			strcpy(ft[i].name,"Tresemme Conditioner");
      			jin++;
      		
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Prachute HairOil");
      			tc+=12;
      			cost[i]=12;
      			strcpy(ft[i].name,"Prachute HairOil");
      			jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Loreal paris Total repair serum ");
      			tc+=5;
      			cost[i]=5;
      			strcpy(ft[i].name,"Loreal paris Total repair serum");
      			jin++;
      	
		  }
		
		  
         
      }
      else  if (subcategory == 3) {
      	printf("1-Fogg-$5\n2-Wild stone-$3\n3-Bella Vita-$8\n4-Denver Hamilton-$4");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Fogg");
      			tc+=5;
      			cost[i]=5;
      			strcpy(ft[i].name,"Fogg");
      			jin++;
      		
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Wild Stone");
      			tc+=3;
      			cost[i]=3;
      			strcpy(ft[i].name,"Wild Stone");
      			jin++;
      	
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Bella Vita ");
      		tc+=8;
      		cost[i]=8;
      		strcpy(ft[i].name,"Bella Vita");
      		jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Denver Hamilton ");
      		tc+=4;
      		cost[i]=4;
      		strcpy(ft[i].name,"Denver Hamilton");
      		jin++;
      	
		  }
		
		  
         
      }
   
   }
 else if  (category == 4){
      printf("Enter the category (1-3):\n1-Sports Shoes\n2-Sports Gear\n3-Supplements");
      scanf("%d", &subcategory);
       printf("-----------------------------------------------------------------------------------------------\n");
      if (subcategory == 1) {
      	printf("1-Campus-$20\n2-Nike-$50\n3-Puma-$30\n4-Adidas-$40");
      printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Campus");
      		tc+=20;
      		cost[i]=20;
      		strcpy(ft[i].name,"Campus");
      		jin++;
      	
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Nike");
      		tc+=50;
      		cost[i]=50;
      		strcpy(ft[i].name,"Nike");
      		jin++;
      	
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Puma");
      		tc+=30;
      		cost[i]=30;
      		strcpy(ft[i].name,"Puma");
      		jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Adidas");
      		tc+=40;
      		cost[i]=40;
      		strcpy(ft[i].name,"Adidas");
      		jin++;
      	
		  }
		
		  
       }
       else  if (subcategory == 2) {
      	printf("1-Kookaburra Cricket Bat-$20\n2-Yonex Badminton Racket-$10\n3-Cosco Volley ball-$8\n4-Protoner Boxing Gloves-$5");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Kookaburra Cricket bat ");
      		tc+=20;
      		cost[i]=20;
      		strcpy(ft[i].name,"Kookaburra Cricket Bat");
      		jin++;
      		
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Yonex Badminton Racket ");
      		tc+=10;
      		cost[i]=10;
      		strcpy(ft[i].name,"Yonex Badmiton Racket");
      		jin++;
      	
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Cosco Volley ball");
      		tc+=8;
      		cost[i]=8;
      		strcpy(ft[i].name,"Cosco Vollry ball");
      		jin++;
      		
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Protoner Boxing Gloves ");
      		tc+=5;
      		cost[i]=5;
      		strcpy(ft[i].name,"Protoner Boxing Gloves");
      		jin++;
      	
		  }
		
		  
         
      }
      else  if (subcategory == 3) {
      	printf("1-Bgreen plant protien-$15\n2-Nutrova Collagen-$27\n3-Well being nutrition-$5\n4-Muscle Blaze creating-$10");
        printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Bgreen plant protien");
      		tc+=15;
      		cost[i]=15;
      		strcpy(ft[i].name,"Bgreen plant protien");
      		jin++;
      		
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Nutrove Collagen");
      		tc+=27;
      		cost[i]=27;
      		strcpy(ft[i].name,"Nutrove Collgen");
      		jin++;
      	
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Well being nutrition ");
      		tc+=5;
      		cost[i]=5;
      		strcpy(ft[i].name,"Well being nutrition");
      		jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Muscle Blaze creating ");
      		tc+=10;
      		cost[i]=10;
      		strcpy(ft[i].name,"Muscle Blaze creating");
      		jin++;
      	
		  }
		
		  
         
      }
   
   }
  else if (category == 5){
      printf("Enter the category (1-3):\n1-Novel\n2-Horror\n3-Comics");
      scanf("%d", &subcategory);
       printf("-----------------------------------------------------------------------------------------------\n");
      if (subcategory == 1) {
      	printf("1-Ikigai-$3\n2-Adventures of tom sawyer-$5\n3-Merchant of venice-$5\n4-The Roots-$10");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Ikigai");
      		tc+=3;
      		cost[i]=3;
      		strcpy(ft[i].name,"Ikigai");
      		jin++;
      		
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Adventures of tom saywer");
      		tc+=5;
      		cost[i]=5;
      		strcpy(ft[i].name,"Adventures of tom saywer");
      		jin++;
      	
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Merchant of vencie");
      		tc+=5;
      		cost[i]=5;
      		strcpy(ft[i].name,"Merchnat of vencie");
      		jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected The Roots ");
      		tc+=10;
      		cost[i]=10;
      		strcpy(ft[i].name,"The Roots");
      		jin++;
      	
		  }
		
		  
       }
       else  if (subcategory == 2) {
      	printf("1-Ghosts of the silent hills-$2\n2-The Perfect murder-$3\n3-Face in the dark-$5\n4- Six of crows-$5");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Ghosts of the silent hills ");
      		tc+=2;
      		cost[i]=2;
      		strcpy(ft[i].name,"Ghosts of the silent hills ");
      		jin++;
      	
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected The Perfect murder");
      		tc+=3;
      		cost[i]=3;
      		strcpy(ft[i].name,"The Perfect murder");
      		jin++;
      		
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Face in the dark");
      		tc+=5;
      		cost[i]=5;
      		strcpy(ft[i].name,"Face in the dark");
      		jin++;
      
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Six of crows");
      		tc+=5;
      		cost[i]=5;
      		strcpy(ft[i].name,"Six of crows");
      		jin++;
      	
		  }
		
		  
         
      }
      else  if (subcategory == 3) {
      	printf("1-Dc injustice-$5\n2-Vagabond-$5\n3-Beyonder-$6\n4-Berserk-$5");
      	printf("\nENTER YOUR CHOICE");
      	scanf("%d",&subsubcategories);
      	 printf("-----------------------------------------------------------------------------------------------\n");
      	if(subsubcategories==1)
      	{
      		printf("you`ve selected Dc injustice");
      		tc+=5;
      		cost[i]=5;
      		strcpy(ft[i].name,"Dc injustice");
      		jin++;
      	
		  }
		else if(subsubcategories==2)
      	{
      		printf("you`ve selected Vagabond");
      		tc+=5;
      		cost[i]=5;
      		strcpy(ft[i].name,"Vagabond");
      		jin++;
      	
		  }
		else if(subsubcategories==3)
      	{
      		printf("you`ve selected Beyonder");
      		tc+=6;
      		cost[i]=6;
      		strcpy(ft[i].name,"Beyonder");
      		jin++;
      	
		  }
		else if(subsubcategories==4)
      	{
      		printf("you`ve selected Berserk ");
      		tc+=5;
      		cost[i]=5;
      		strcpy(ft[i].name,"Berserk");
      		jin++;
      	
		  }
		
		  
         
      }

   }
   printf("\nENTER 1 TO VIEW CART or PRESS ANY NUMBER TO CONTINUE");
   int x;
   scanf("%d",&x);
   if(x==1)
  {
  printf("\nTHIS IS YOUR CART:");
   printf("\n*-----------------------------------------------------------------------------\n");
    printf("\nS.NO            ITEM                         PRICE") ;
printf("\n*-----------------------------------------------------------------------------\n");    
for(int k=0;k<jin;k++)
{
	printf("\n%d      %s\t\t\t\t\t$%d\n",k+1,ft[k].name,cost[k]);
}
printf("\n*-----------------------------------------------------------------------------\n"); 
printf("                                                          SUBTOTAL:$%d",tc);
 int s;
   printf("\nenter 1 to remove any item from cart or press any number to continue");
   scanf("%d",&s);
   if(s==1)
   {
   	printf("\nPLEASE ENTER THE ID NUMBER TO REMOVE FROM CART");
   	scanf("%d",&u);
   	int h=u-1;
   	tc=tc-cost[h];
   	for(int t=h;t<jin;t++)
   	{
   		strcpy(ft[t].name,ft[t+1].name);
       cost[t]=cost[t+1];
       i--;
	   }
	   
   	jin--;
   	
   }
}

 
printf("\nIf you want to continue shopping please press 1 if not press any number to proceed to final cart");
scanf("%d",&p);
if(p==1){
system("cls");
continue;
}else
break;
}
printf("\n*-----------------------------------------------------------------------------\n");
    printf("\nS.NO            ITEM                         PRICE") ;
printf("\n*-----------------------------------------------------------------------------\n");    
for(int k=0;k<jin;k++)
{
	printf("\n%d      %s                                 $%d\n",k+1,ft[k].name,cost[k]);
}
printf("\n*-----------------------------------------------------------------------------\n"); 
printf("                                                          SUBTOTAL:$%d",tc);
system("cls");
printf("\nENTER YOUR DETAILS......");
printf("\nDELIVERY ADRRESS:");
printf("\nHOUSE NUMBER:");
scanf("%s",s1.add);
printf("\nLANDMARK:");
scanf("%s",s1.lm);
printf("\nPIN CODE:");
scanf("%s",s1.pin);
printf("\nPHONE NUMBER:");
scanf("%s",s1.ph);
 gst=tc*0.08;
 int g;
      
        float del=20;
    float j=tc+gst+del;   
	printf("PRESS 1 TO CHECKOUT");
	scanf("%d",&g);
	if(g==1)
	{
  int i;
  system("cls");
    printf("  +~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+          \n\n");
    printf("                      TOTAL BILL                   \n");
    printf("                    BILLING INFORMATION                \n");
    printf("\n*-----------------------------------------------------------------------------\n");
    printf("\nS.NO            ITEM                         PRICE") ;
printf("\n*-----------------------------------------------------------------------------\n");    
for(int k=0;k<jin;k++)
{
	printf("\n%d      %s                                 $%d\n",k+1,ft[k].name,cost[k]);
}
printf("\n*-----------------------------------------------------------------------------\n"); 
printf("                                                          SUBTOTAL:$%d",tc);
    
    printf("\n\t\tGST=$.%f\n",gst);
	printf("\t\tdelivery=$.%f\n",del); 
    printf("                                                      TOTAL=$%f\n",j);
   
    printf("\n\n  +~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+          \n\n");
    printf("YOUR ORDER HAS BEEN CONFIRMED,%s\nTHANKYOU FOR SHOPPING AT SAHARA MART~~~~VISIT US AGAIN:)",str);
    printf("\n\n  +~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+          \n\n");
}
      return 0;
}