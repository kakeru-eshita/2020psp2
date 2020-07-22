#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct all_data{
    int ID;
    int gender;
    double height;
}
struct all_data data1;

int main(void)
{
    int ID, i=0, j=0;
    char fname[FILENAME_MAX];
    char buf[256],buf2[256];
    FILE* fp;
    FILE* fp2;
    
    printf("input the filename of sample height :");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    fp = fopen(fname,"r");
    if(fp==NULL){
        fputs("No data\n",stderr);
        exit(EXIT_FAILURE);
    }

    printf("input the filename of sample ID :");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    fp = fopen(fname,"r");
    if(fp==NULL){
        fputs("No data\n",stderr);
        exit(EXIT_FAILURE);
    }

       
    }

    if(fclose(fp) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }

    
    printf("---\n");
    printf("ID : %d\n",ID);
    printf("gender : %d\n",);
    printf("height : %d\n",);
    printf("、、、\n");

    return 0;
}

