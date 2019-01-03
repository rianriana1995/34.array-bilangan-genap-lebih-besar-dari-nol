#include<stdio.h>
int main (int argc, char const *argv[]){
int a,s[5],c[5];
printf("array a\n");
printf("0 1 2 3 4 5 \n");
for(size_t a= 0; a<5; a++){
    scanf("%i",&s[a]);
}
for(size_t a= 0; a<5; a++){
    c[a]=s[a];
}
printf("\n");
printf("array b \n");
for (size_t a=0;a<5;a++){
    printf("%2i",c[a]);
    scanf("%d",&a);
    if (a%2==0);{
        ptintf("%d adalah bilangan genap\n\n",a);

    }
}
return 0;
}
