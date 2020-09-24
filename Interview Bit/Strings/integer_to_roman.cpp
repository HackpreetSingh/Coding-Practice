string Solution::intToRoman(int A) {
    map<int,string> m;
    m[1]="I";m[4]="IV";m[5]="V";m[9]="IX";m[10]="X";
    m[40]="XL";m[50]="L";m[90]="XC";m[100]="C";
    m[400]="CD";m[500]="D";m[900]="CM";m[1000]="M";
    string res;
    for(auto itr=m.rbegin();itr != m.rend();itr++){
        while(A >= itr->first){
            res += itr->second;
            A -= itr->first;
            
            if(A<=0)
                break;
                
        }
    }
    return res;
}
