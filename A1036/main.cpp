#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Inf{
    char name[11];
    char id[11];
    int grade;
}m,f;

int main(int argc, char **argv)
{
    m.grade = 101;
    f.grade = -1;
    
    int n;
    scanf("%d",&n);
    char name[11],id[11];
    char sex[2];
    int grade;
    while(n--){
        scanf("%s %s %s %d",name,sex,id,&grade);
        if(sex[0] == 'M'){
            if(m.grade > grade){
                strcpy(m.name,name);
                strcpy(m.id,id);
                m.grade = grade;
            }
        }else{
            if(f.grade < grade){
                strcpy(f.name,name);
                strcpy(f.id,id);
                f.grade = grade;
            }
        }
    }
    if(m.grade > 100 || f.grade <0){
        
        if(f.grade >= 0) printf("%s %s\n",f.name,f.id);
        else printf("Absent\n");
        if(m.grade <= 100) printf("%s %s\n",m.name,m.id);
        else printf("Absent\n");
        
        printf("NA");
    }else{
        printf("%s %s\n",f.name,f.id);
        printf("%s %s\n",m.name,m.id);
        
        printf("%d",abs(m.grade - f.grade));
    }
    
    
	
	return 0;
}
