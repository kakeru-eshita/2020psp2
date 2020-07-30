#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ID_NUM 14

struct all_data{
    int ID;
    int gender;
    double height;
}

int main(void)
{　
    int ID, i=0,j=0;
    char fname[FILENAME_MAX];
    char buf[256],buf2[256];
    FILE* fp;
    FILE* fp2;
    struct all_data data1[ID_NUM];

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
    fp2 = fopen(fname,"r");
    if(fp2==NULL){
        fputs("No data\n",stderr);
        exit(EXIT_FAILURE);
    }

    i=0;
    while(fgets(buf,sizeof(buf),fp)!=NULL){
        sscanf(buf,"%d,%lf",&data1[i].gender,&data1[i].height);
        i++;
    }

    i=0;
    while(fgets(buf2,sizeof(buf),fp)!=NULL){
        sscanf(buf2,"%d",&data1[i].ID);
        i++;
    }

    if(fclose(fp) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }
    if(fclose(fp2) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }

    printf("ID:");
    sscanf("%d",&ID);

    for(i=0;i<14;i++){
        if(ID==data1[i].ID){
            printf("%d\n",data1[1].ID);
        }
        if(data1[i].gender==1){
            printf("Male\n");
        }
        else{
            printf("Female\n");
        }
        printf("%.1lf\n",data1[i].height);
        j++;
    }

if(j==0){
printf("No data");
}
    return 0;
}

