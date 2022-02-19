int makeItEqual(int a, int b, int c) {
    int andd=(a&b);
    int orr=(a|b);
    int moves=0;
    while(c>0 || andd>0 ){
        if((andd&1)==(c&1)){
//             cout<<1<<endl;
            andd=andd>>1;
            orr=orr>>1;
            c=c>>1;
        }
        else if((andd&1)>(c&1)){
//             cout<<2<<endl;
            moves+=1;
            andd=andd>>1;
        	orr=orr>>1;
        	c=c>>1;
        }
        else{
//             cout<<3<<endl;
            if((orr&1)==1){
                moves+=1;
            }
            else{
                moves+=2;
            }
            andd=andd>>1;
        	orr=orr>>1;
        	c=c>>1;
        }
        
    }
    return moves;
}

