bool isVowel(char c){
    if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' ){
        return 1;
    }
    return 0;
}
string encodeString(string &s, int n) 
{
    for(int i=0; i<n; i++){
        if(isVowel(s[i])){
            s[i]=s[i]+1;
        }
        else{
            s[i]=s[i]-1;
        }
    }
    return s;
}

