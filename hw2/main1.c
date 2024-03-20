#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    FILE* fp;
    fp = fopen("lotto.txt", "w+");

    int i=0,n,j ;
    int num[7];
    srand((unsigned) time(NULL));
    time_t curtime;
    time(&curtime);
    char *s = ctime(&curtime);
    *(s + strlen(s) - 1) = 0;

    printf("\t歡迎光臨長庚樂透彩購買機台\n");
    printf("\t請問您要買幾組樂透彩 : ");
    scanf("%d", &n);
    printf("\t以為您購買的 %d 樂透組合輸出至 lotto.txt\n", n);
    
    

    fprintf(fp,"========  lotto649  ========\n");
    fprintf(fp,"= %s =\n",s);
    for(j = 1;j < 6;j++) {
        fprintf(fp,"[%d]: ",j);
        if(i != n) {
            for (int q = 0;q < 7;q++) {
        num[q] = rand()%70;
        fprintf(fp," %d",num[q]);
        }
        fprintf(fp,"\n");
            i++;
        }
        else {
            fprintf(fp," -- -- -- -- -- -- --\n");
        }
    }
    fprintf(fp,"========  csie@CGU  ========");

    
    fclose(fp);
}
