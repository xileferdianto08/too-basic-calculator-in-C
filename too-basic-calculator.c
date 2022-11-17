#include <math.h>
#include <stdio.h>
#include <string.h>

int IndoMain();
int EngMain();
void add(int a, int b);
void decrement(int a, int b);
void multiplication(int a, int b);
void divide(int a, int b);
void modulus(int a, int b);
void power(int a, int b);

int main()
{
    char bhs1[2];
    printf("Welcome to my first too basic calculator!\n");
    printf("Selamat datang di kalkulator yang terlalu mendasar pertama saya!\n\n");
    printf("-------------------------------------------------------------------------------\n");

    while(1)
    {
        printf("--------------------------------------------------------------------------------\n");
        printf("Don't worry about the case sensitive! just type 2 words from one of those options\nJangan khawatir dengan permasalahaan kapitalisasi hurufnya! cukup ketik 2 kata dari salah satu pilihan yang ada\n");
        printf("\nPlease choose the versions you want (en/id) \nSilahkan pilih versi yang anda inginkan (en/id) : ");
        scanf("%s",&bhs1);

        if(strcasecmp(bhs1, "en") == 0){
            EngMain();
            break;
        }
        if(strcasecmp(bhs1, "id") == 0){
            IndoMain();
            break;
        }
        else printf("You might want to see again those options again\nAnda mungkin perlu liat ulang pilihannya yang tersedia\n\n\n\n");
    }
    return 0;
}

int IndoMain()
{
    printf("\e[1;1H\e[2J");
    int a,b;
    char op;
    char dec;

    printf("Selamat datang di kalkulator yang terlalu mendasar pertama saya!\n\n");
    printf("Sebelum menggunakan ini, ada beberapa cara untuk menggunakan kalkulator ini\n");
    printf("Masukkan angka dengan operator yang Anda inginkan dan yang disediakan di program ini.\nFormatnya : a op b\n");
    printf("Dengan catatan: \n* a = angka pertama\n** op = operator yang ingin digunakan\n*** b = angka kedua");
    printf("\n\nBerikut Operator yang bisa digunakan: \n\n");
    printf("'+' = pertambahan;\n");
    printf("'-' = pengurangan;\n");
    printf("'*' = perkalian;\n");
    printf("'/' = pembagian;\n");
    printf("'%' = modulus (hasil sisa pembagian);\n");
    printf("'^' = perpangkatan;\n\n\n");
    printf("PERHATIAN! Perlu di ingat bahwa kalkulator ini hanya bisa melakukan satu operasi saja tidak bisa dua operasi sekaligus.");
    printf("\nJika dipaksakan maka hasil kalkulasi yang dihasilkan akan tidak sesuai dengan kalkulasi yang sebenarnya.\n\n");

    printf("Silahkan masukkan angka yang ingin di kalkulasikan: ");
    scanf("%d  %c  %d", &a, &op, &b);

    if(op == '+')
    {
        add(a,b);
    }else if(op == '-')
    {
        decrement(a,b);
    }else if(op == '*')
    {
        multiplication(a,b);
    }else if(op == '/')
    {
        divide(a,b);
    }else if (op == '%')
    {
        modulus(a,b);
    }else if (op == '^')
    {
        power(a,b);
    }else
    {
        printf("Mungkin anda perlu baca ulang tentang operator yang bisa digunakan");
    }


    while(1)
    {
        printf("\nApa Anda ingin melanjutkan perhitungan? [y/n] = ");
        scanf(" %c", &dec);

        if(dec == 'y')IndoMain();
        if(dec == 'Y')IndoMain();
        if(dec =='n')break;
        if(dec == 'N')break;
    }
    printf("Terima kasih untuk mau mencoba dan menggunakan kalkulator yang terlalu dasar ini\n");
    printf("Semoga suka dan maaf jika masih ada kekurangan\n");
    printf("\nDibuat oleh xileFerdianto08 ((https://github.com/xileferdianto08))\n\n");

    return 0;
}

int EngMain()
{
    printf("\e[1;1H\e[2J");
    int a,b;
    char op;
    char dec;

    printf("Welcome to my first too basic calculator!\n\n\n");
    printf("Before using this, there is a few way to do a calculation\n");
    printf("Input the number and the operator that you want to use.\nThe format is : a op b\n");
    printf("Note: \n* a = first number\n** op = operator that you want to use\n*** b = second number");
    printf("\n\nHere's the operator that you can use: \n\n");
    printf("'+' = addition;\n");
    printf("'-' = decrement;\n");
    printf("'*' = multiplication;\n");
    printf("'/' = division;\n");
    printf("'%' = modulus (remainder of the division);\n");
    printf("'^' = rank or power;\n\n\n");

    printf("WARNING! Need to know that this calculator can only do ONE operation only and cannot do more than one operation.");
    printf("\nIf you still force to do more than ONE operation, then the result of that calculation will not be match to the actual calculation.\n\n");


    printf("Please input the number that want to be calculated: ");
    scanf("%d  %c  %d", &a, &op, &b);


    if(op == '+')
    {
        add(a,b);
    }else if(op == '-')
    {
        decrement(a,b);
    }else if(op == '*')
    {
        multiplication(a,b);
    }else if(op == '/')
    {
        divide(a,b);
    }else if (op == '%')
    {
        modulus(a,b);
    }else if (op == '^')
    {
        power(a,b);
    }else
    {
        printf("\nYou might want to read the list about the operator that can be use\nThank You\n");
    }

    while(1)
    {
        printf("\nDo you still want to continue? [y/n] : ");
        scanf(" %c", &dec);

        if(dec == 'y')EngMain();
        if(dec == 'Y')EngMain();
        if(dec =='n')break;
        if(dec == 'N')break;
    }
    printf("Thank you for trying and using this too-basic-calculator!\n");
    printf("Hope you like it and apologize if there are many shortcoming\n");
    printf("\nMade By xileFerdianto08 (https://github.com/xileferdianto08)\n");
    return 0;

}

void add(int a, int b)
{
    int result;
    result = a + b;
    printf("The Result from %d + %d  = %d", a, b, result);
    printf("\nHasilnya dari %d + %d  = %d\n", a, b, result);
}

void decrement(int a, int b)
{
    int result;
    result = a - b;
    printf("The Result from %d - %d  = %d", a, b, result);
    printf("\nHasilnya dari %d - %d  = %d\n", a, b, result);
}

void multiplication(int a, int b)
{
    int result;
    result = a * b;
    printf("The Result from %d * %d  = %d", a, b, result);
    printf("\nHasilnya dari %d * %d  = %d\n", a, b, result);
}

void divide(int a, int b)
{
    float result;
    result = (float)a / (float)b;
    printf("The Result from %d / %d  = %.2f", a, b, result);
    printf("\nHasilnya dari %d / %d  = %.2f\n", a, b, result);
}

void modulus(int a, int b)
{
    int result;
    result = a % b;
    printf("The Result from %d mod %d  = %d", a, b, result);
    printf("\nHasilnya dari %d mod %d  = %d \n", a, b, result);
}

void power(int a, int b)
{
    double result = pow(a,b);
    printf("The Result from %d ^%d  = %2.lf", a, b, result);
    printf("\nHasilnya dari %d ^%d  = %2.lf\n", a, b, result);
}

