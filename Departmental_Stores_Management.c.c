\\ DEPARTMENTAL STORE MANAGEMENT

#include<stdio.h>

#include<conio.h>

struct goods

{

char brand_name[50];

int item_no;

int s_no;

int quantity;

int price;

};

int n=0;

void add(struct goods g[]);

void display(struct goods g[],int n);

void edit(struct goods g[],int n);

void bill(struct goods g[],int n);

void search_brand(struct goods g[],int n);

void search_itemno(struct goods g[],int n);

void deletes(struct goods g[],int n);

void main()

{

int ch;

struct goods g[10];

clrscr();

do

{

printf("\n The choices are\n");

printf ("1.ADD GOODS\n 2.DISPLAY GOODS \n 3.EDIT GOODS \n 4.BILL CALCULATION \n 5.SEARCHING BY BRAND NAME \n 6.SEARCHING BY ITEM NO \n 7.DELETE GOODS\n 8.EXIT \n");

printf ("Enter your choice");

scanf ("%d",&ch);

switch(ch)

{

case 1:

{

printf ("The choice is add goods \n");

add(g);

break;

}

case 2:

{

printf ("The choice is display goods \n");

display(g,n);

break;

}

case 3:

{

printf("The choice is edit goods\n");

edit(g,n);

break;

}

case 4:

{

printf("The choice is bill calculation\n");

bill(g,n);

break;

}

case 5:

{

printf("The choice is searching by brand name\n");

search_brand(g,n);

break;

}

case 6:

{

printf("The choice is searching by item no\n");

search_itemno(g,n);

break;

}

case 7:

{

printf("The choice is delete goods\n");

deletes(g,n);

break;

}

case 8:

{

printf("Exit\n");

break;

}

default:

{

printf("Invalid choice");

break;

}

}

}while(ch!=8);

getch();

}

void add(struct goods g[])

{

printf("\n  S.NO\t BRAND NAME \t ITEM NO \t QUANTITY \t PRICE");

printf("\n-----------------------------------------------------------------------------------");

scanf("\n%d\t%s\t%d\t%d",&g[n].s_no,g[n].brand_name,&g[n].item_no,&g[n].quantity,&g[n].price);

n++;

}

void display (struct goods g[],int n)

{

int i;

printf("\n  S.NO\t BRAND NAME \t ITEM NO \t QUANTITY \t PRICE");

printf("\n-----------------------------------------------------------------------------------");

for(i=0;i<n;i++)

{

printf("\n%d\t%s\t%d\t%d",g[n].s_no,g[n].brand_name,g[n].item_no,&g[n].quantity,g[n].price);

}

}

void edit(struct goods g[],int n)

{

int i,k;

char br_name[50];

printf("Enter the br_name\n");

scanf("%s",br_name);

for(i=0;i<n;i++)

{

if(strcmp(g[i].brand_name,br_name)==0)

{

printf("Enter the increment value:");

scanf(%d",&k);

g[i].price+=k);

printf("\n  S.NO\t BRAND NAME \t ITEM NO \t QUANTITY \t PRICE");

printf("\n-----------------------------------------------------------------------------------");

printf("\n%d\t%s\t%d\t%d",g[n].s_no,g[n].brand_name,g[n].item_no,&g[n].quantity,g[n].price);

}

}

}

void bill(struct goods g[],int n)

{

int i,total;

total=0;

for(i=0;i<n;i++)

{

total=total+g[i].price;

}

printf("\n  S.NO\t BRAND NAME \t ITEM NO \t QUANTITY \t PRICE");

printf("\n-----------------------------------------------------------------------------------");

for(i=0;i<n;i++)

{

printf("\n%d\t%s\t%d\t%d",g[n].s_no,g[n].brand_name,g[n].item_no,&g[n].quantity,g[n].price);

printf("The total amount for this bill is %d",total);

}

void search_brand(struct goods g[],int n)

{

int i;

char br_name[50];

printf("Enter the br_name\n");

scanf("%s",br_name);

for(i=0;i<n;i++)

{

if(strcmp(g[i].brand_name,br_name)==0)

{

printf("\n  S.NO\t BRAND NAME \t ITEM NO \t QUANTITY \t PRICE");

printf("\n-----------------------------------------------------------------------------------");

printf("\n%d\t%s\t%d\t%d",g[n].s_no,g[n].brand_name,g[n].item_no,&g[n].quantity,g[n].price);

}

}

}

void search_itemno(struct goods g[],int n)

{

int item1_no,i;

printf("Enter the item1_no\n");

scanf("%d",&item1_no);

for(i=0;i<n;i++)

{

if(g[i].item_no==item1_no)

{

printf("\n  S.NO\t BRAND NAME \t ITEM NO \t QUANTITY \t PRICE");

printf("\n-----------------------------------------------------------------------------------");

printf("\n%d\t%s\t%d\t%d",g[n].s_no,g[n].brand_name,g[n].item_no,&g[n].quantity,g[n].price);

}

}

}

void deletes(struct goods g[],int n)

{

int i,position;

printf("Enter the location where you wish to delete");

scanf("%d",&position);

if(position>n+1)

{

printf("Deletion is not possible");

}

else

{

for(i=position-1;i<n-1;i++)

g[i]=g[i+1];

for(i=0;i<n;i++)

{

if(g[i].s_no>position)

{

g[i].s_no=g[i].s_no-1;

}

}

printf("\n  S.NO\t BRAND NAME \t ITEM NO \t QUANTITY \t PRICE");

printf("\n-----------------------------------------------------------------------------------");

for(i=0;i<n;i++)

{

printf("\n%d\t%s\t%d\t%d",g[n].s_no,g[n].brand_name,g[n].item_no,&g[n].quantity,g[n].price);

}

}

}