#include<bits\stdc++.h>
#define input freopen("in.txt", "r", stdin)
using namespace std;
int main (){
    input;
    int t,n,i,nd,j = 1;
    set <int> dig;
    cin >> t;
    while(t--){
        scanf("%d",&n);
        i = 1;
        printf("Case #%d: ",j++);
        while(dig.size() < 10){
            if(i*n == (i+1)*n)
                break;
            nd = i*n;
            while(nd/10){
                dig.insert(nd % 10);
                nd = nd/10;
            }
            dig.insert(nd);
            i++;
        }
        if(i*n != (i+1)*n)
        printf("%d\n",(i-1)*n);
        else
        printf("INSOMNIA\n");
        dig.clear();
    }
}