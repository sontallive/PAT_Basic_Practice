#include <stdio.h>
#include <algorithm>
using namespace std;
// J C B
typedef struct Node{
    char kind;
    int w;
    Node(){
        w = 0;
    }
} Node;

int compareNode(Node a,Node b){
    if(a.w == b.w) return a.kind < b.kind;
    return a.w > b.w;
}

int compare(char a,char b){
    if(a == b) return 0;
    if(a == 'J' && b == 'B') return 1;
    if(a == 'C' && b == 'J') return 1;
    if(a == 'B' && b == 'C') return 1;
    return -1;
}

int main(int argc, char **argv)
{
    Node aw[3],bw[3];
    aw[0].kind = 'J';
    aw[1].kind = 'C';
    aw[2].kind = 'B';
    bw[0].kind = 'J';
    bw[1].kind = 'C';
    bw[2].kind = 'B';
    
    int aa[3] = {0},bb[3] = {0};
    int n;
    char a,b;
    scanf("%d",&n);
    while(n--){
        getchar();
        scanf("%c %c",&a,&b);
        int result = compare(a,b);
        if(result == 0){
            aa[1]++;
            bb[1]++;
        }else if(result == 1){
            aa[0]++;
            bb[2]++;
            if(a == 'J') aw[0].w++;
            if(a == 'C') aw[1].w++;
            if(a == 'B') aw[2].w++;
        }else{
            aa[2]++;
            bb[0]++;
            if(b == 'J') bw[0].w++;
            if(b == 'C') bw[1].w++;
            if(b == 'B') bw[2].w++;
        }
    }
	printf("%d %d %d\n",aa[0],aa[1],aa[2]);
    printf("%d %d %d\n",bb[0],bb[1],bb[2]);
    
    sort(aw,aw+3,compareNode);
    sort(bw,bw+3,compareNode);
    printf("%c %c",aw[0].kind,bw[0].kind);
	return 0;
}
