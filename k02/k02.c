#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>

extern double p_stdnorm(double z);

int main(void)
{
    double z;
    double val;
    double var_a=5.43, var_b=5.5;
    double mu_a=170.8, mu_b=169.7;
    char fname[FILENAME_MAX];
    char buf[256];
    FILE *fp;
    double L1=1,L2=1;

    printf("input the filename of sample:");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    printf("the filename of sample: %s\n",fname);

    fp = fopen(fname,"r");
    if(fp==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }

    while(fgets(buf,sizeof(buf),fp) != NULL){
        sscanf(buf,"%lf",&val);

        z=(val - mu_a)/var_a;
        L1 = p_stdnorm(z) * L1;

        z=(val - mu_b)/var_b;
        L2 = p_stdnorm(z) * L2;
    }

    if(fclose(fp) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }

    printf("L_A: %f\n",L1);
    printf("L_B: %f\n",L2);

    return 0;
}

double p_stdnorm(double z)
{
    return 1/sqrt(2*M_PI) * exp(-z*z/2);
}