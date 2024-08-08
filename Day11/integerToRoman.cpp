class Solution {
public:
    string intToRoman(int num) {
        // unordered_map<char, int>m = {{'M',1000},{'X',10},{'D',500},
        //                             {'L',50},{'C',100},{'I',1},{'V',5}};
        string st = "";
        while(num>=1000){
            st+='M';
            num-=1000;
        }
        if(num>=900){
            st+="CM";
            num-=900;    
        }
        if(num>=500){
            st+='D';
            num-=500;
        }
        if(num>=400){
            st+="CD";
            num-=400;
        }
        while(num>=100){
            st+='C';
            num-=100;
        }
        if(num>=90){
            st+="XC";
            num-=90;
        }
        if(num>=50){
            st+='L';
            num-=50;
        }
        if(num>=40){
            st+="XL";
            num-=40;
        }
        while(num>=10){
            st+='X';
            num-=10;
        }
        
        if(num>=9){
            st+="IX";
            num-=9;
        }
        if(num>=5){
            st+='V';
            num-=5;
        }
        if(num>=4){
            st+="IV";
            num-=4;
        }
        while(num>=1){
            st+='I';
            num-=1;
        }
        return st;
    }
};