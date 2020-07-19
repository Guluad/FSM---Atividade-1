#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void arquivo_range_255() {
    //Gera arquivo de 10mb na range de 0 a 255;
    uint8_t num;
    uint8_t arr[1048576];
    int i, j;
    FILE *fptr;
    fptr = fopen("arquivo255.bin","wb");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for(j = 0;j < 10; j++){
        for(i = 0;i < 1048576; i++){
            num = rand()%256;
            arr[i] = num;
        }
        fwrite(&arr, sizeof(uint8_t), 1048576, fptr);
    }
    fclose(fptr);
}

void arquivo_range_25() {
    //Gera arquivo de 10mb na range de 0 a 25;
    uint8_t num;
    uint8_t arr[1048576];
    int i, j;
    FILE *fptr;
    fptr = fopen("arquivo25.bin","wb");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for(j = 0;j < 10; j++){
        for(i = 0;i < 1048576; i++){
            num = rand()%26;
            arr[i] = num;
        }
        fwrite(&arr, sizeof(uint8_t), 1048576, fptr);
    }
    fclose(fptr);
}

void arquivo_Yamcha() {
    //Gera arquivo de 10mb no modo vida loka;
    uint8_t num;
    uint8_t random[23] = {1, 1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 5, 5, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4};
    uint8_t arr[1048576];
    int i, j;
    FILE *fptr;
    fptr = fopen("arquivoYamcha.bin","wb");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for(j = 0;j < 10; j++){
        for(i = 0;i < 1048576; i++){
            num = rand()%90;
            if (num > 24){
                arr[i] = 10;
            }else{
                arr[i] = random[num];
            }
        }
        fwrite(&arr, sizeof(uint8_t), 1048576, fptr);
    }
    fclose(fptr);
}



int main()
{
    arquivo_range_255();
    arquivo_range_25();
    arquivo_Yamcha();
    printf("Done");
    return 0;
}
