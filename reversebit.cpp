//Reverse Bit solution for 32 bit unsigned int

unsigned int Solution::reverse(unsigned int A) {
    unsigned int x, ans=0, i=1;
    
    x=(A & ~(A-1));
    while(x!=0){
        while((i&x) == 0){
            ans<<=1;
            i<<=1;
        }
        ans+=1;
        A=(A & (A-1));
        x=(A & ~(A-1));
    }

    unsigned int j=1;
    for(int k=1;k<32;k++){
        j<<=1;
    }

    while((i & ~(i-1)) != j){
        ans<<=1;
        i<<=1;
    }
    return ans;
}
