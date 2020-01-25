#include<stdio.h>
int main(){
    int l,i,j,c=0,freq[123]={0};
    scanf("%d",&l);
    char s[l];
    scanf("%s",s);
    for(i=0;i<l;i++){
        for(j=97;j<=122;j++){
            if(s[i]==j){
                freq[j]++;
            }
        }
    }
    for(i=97;i<=122;i++){
        if(freq[i]>1){
            for(j=1;j<freq[i];j++){
                c++;
            }
        }
    }
    if(l>26){
        printf("-1\n");
    }
    else{
        printf("%d\n",c);
    }
    return 0;
}



