class Solution {
public:
    string roman(int n){
        if(n==1000){
            return "M";
        }
        if(n==900){
            return "CM";
        }
        if(n==500){
            return "D";
        }
        if(n==400){
            return "CD"; 
        }
        if(n==100){
            return "C";
        }
        if(n==90){
            return "XC";
        }
        if(n==50){
            return "L";
        }
        if(n==40){
            return "XL";
        }
        if(n==10){
            return "X";
        }
        if(n==9){
            return "IX";
        }
        if(n==5){
            return "V";
        }
        if(n==4){
            return "IV";
        }
        return "I";
    }

    string intToRoman(int num) {
        string a="";
        while(num>=1000){
            a+=roman(1000);
            num-=1000;
        } 
        while(num>=900){
            a+=roman(900);
            num-=900;
        }
        while(num>=500){
            a+=roman(500);
            num-=500;
        }
        while(num>=400){
            a+=roman(400);
            num-=400;
        }
        while(num>=100){
            a+=roman(100);
            num-=100;
        }
        while(num>=90){
            a+=roman(90);
            num-=90;
        }
        while(num>=50){
            a+=roman(50);
            num-=50;
        }
        while(num>=40){
            a+=roman(40);
            num-=40;
        }
        while(num>=10){
            a+=roman(10);
            num-=10;
        }
        while(num>=9){
            a+=roman(9);
            num-=9;
        }
        while(num>=5){
            a+=roman(5);
            num-=5;
        }
        while(num>=4){
            a+=roman(4);
            num-=4;
        }
        while(num>=1){
            a+=roman(1);
            num-=1;
        }
        return a;
       
    }
};