#include <stdio.h>
#include <algorithm>
using namespace std;

typedef struct Card{
    int kind;
    int order;
} Card;

int compare(Card c1,Card c2){
    return c1.order < c2.order;
}

void printCard(Card& c){
    //printf("%d",c.kind);
    //return;
    if(c.kind > 51){
        printf("J%d",c.kind - 51);
        return;
    }
    switch(c.kind / 13){
        case 0:
            printf("S");
            break;
        case 1:
            printf("H");
            break;
        case 2:
            printf("C");
            break;
        case 3:
            printf("D");
            break;
    }
    printf("%d",c.kind % 13 + 1);
}

int main(int argc, char **argv)
{
	int n;
    int order[54];
    Card cards[54];
    scanf("%d",&n);
    for(int i = 0;i < 54;++i){
        scanf("%d",&order[i]);
        cards[i].kind = i;
    }
    
    while(n--){
        for(int i = 0;i < 54;++i){
            cards[i].order = order[i];
        }
        sort(cards,cards + 54,compare);
    }
    
    for(int i = 0;i < 53;++i){
        printCard(cards[i]);
        printf(" ");
    }
    printCard(cards[53]);
}
