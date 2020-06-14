// Game KÉO BÚA BAO  
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
int main()
{
//Khai bao cac bien
int r;
char key;
char ng,may,i[3];
do{
//Lay ngau nhien 
srand(time(NULL)); 
r=rand()%3+1;
//Menu
 printf (" ******************************\n"); 
 printf (" Chuong trinh tro choi Bua-Keo-Bao\n");       
 printf ("\nChon KEO nhan phim K");
 printf ("\nChon BUA nhan phim B");
 printf ("\nChon BAO nhan phim O\n");
 printf ("\n[B]ua        [K]eo          Ba[O]\n\n");          
 printf("\n******************************\n\n");
        printf("Moi ban chon : ");
        scanf("%c", &ng);
       
 ng= tolower(ng); //Chuyen chu nhap vao thanh chu thuong
 
    switch(r)
    {
       case 1: may='b'; //Chuyen gia tri so ngau nhien thanh chu tuong ung
       break;
       case 2: may='k';
       break;
       case 3: may='o';
       break;
    }
 //In ket qua
 if ((ng=='k')||(ng=='b')||(ng=='o'))//kiem ra xem co nhap sai khong
 {
  //In ra ket qua cua nguoi
  switch(ng)
  {
     case 'b': strcpy(i,"BUA");
     break;
     case 'k': strcpy(i,"KEO");
     break;
     case 'o': strcpy(i,"BAO");
     break;
    }
    printf(" Ban ra %s\n",i);
  //In ra ket qua cua may
  switch(may)
  {
     case 'b': strcpy(i,"BUA");
     break;
     case 'k': strcpy(i,"KEO");
     break;
     case 'o': strcpy(i,"BAO");
     break;
  }
  printf(" May ra %s\n",i);
 //xac nhan ket qua 
     
	if (ng==may)
          printf(" KET QUA HOA\n");
    else if ((ng=='b' && may=='k')||(ng=='k' && may=='o')||(ng=='o' && may=='b'))
          printf(" CHUC MUNG BAN DA CHIEN THANG\n");
    else 
          printf(" RAT TIEC BAN DA THUA HUHU\n");
  }
    else
          printf(" Ban da nhap sai\n");
   }while (r);
 getch();
}
