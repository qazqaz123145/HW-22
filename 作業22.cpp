#include<stdio.h>

struct Sertivor{
    char id[20];
    char name[20];
    unsigned int  Wage;
    unsigned int  WorkHours;
    unsigned int  Pay;

};
int salc(struct Sertivor *);  
void show(struct Sertivor *); 
int main(void){

    int Number;
    int B;

    struct Sertivor sertivor[4]; 

    printf("請問有幾個工讀生?");
    scanf("%d", &Number);

    for(B=0;B<Number;++B){
        printf("這是第%d筆資料\n\n", B+1);
        printf("please entering employee id:");
        scanf("%s", sertivor[B].id);
        printf("please entering employee name:");
        scanf("%s", sertivor[B].name);
        printf("please entering employee wage: ");
        scanf("%d", &sertivor[B].Wage);
        printf("please entering employee work_hours:");
        scanf("%d", &sertivor[B].WorkHours);

        salc(&sertivor[B]);
    }
    for(B=0;B<Number;++B){
    	show(&sertivor[B]);
	}
	
	return 0;

}
int salc(struct Sertivor *ser){ 

    (ser->Pay)=(ser->Wage)*(ser->WorkHours);

    return ser->Pay;
}
void show(struct Sertivor *show){ 
    printf("\n\n%s的資料---------\n",show->name);
    printf("ID:%s\n",show->id);
    printf("NAME:%s\n",show->name);
    printf("WAGE:%d\n",show->Wage);
    printf("WORK_HOURS:%d\n",show->WorkHours);
    printf("PAY:%d\n",show->Pay);
    printf("-------------\n");
}
