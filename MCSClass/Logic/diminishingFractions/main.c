#include <stdio.h>

int main(){
    float n,s,s_member;
    printf("Input n: ");
    scanf(" %f", &n);
    s = 0;
    for(int one = 1; n >= 1; n--){
       s_member = 1/n;
       s += s_member;
    }

    printf("%f", s);
}
