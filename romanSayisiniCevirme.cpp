#include <iostream>
#include <string>
#include <cstring>

class Solution {

public:

    int romanToInt(std::string s) {

        const char *dizi = s.c_str();
        int boyut = strlen( dizi );
        int sayiDisizi[ boyut ];

        for( int i = 0 ; i < boyut ; i++ ) {

            if( dizi[ i ] == 'I' ){ 
                sayiDisizi[ i ] = 1;
            }
            else if( dizi[ i ] == 'V' ){
                sayiDisizi[ i ] = 5;
            }
            else if( dizi[ i ] == 'X' ){
                sayiDisizi[ i ] = 10;
            }
            else if( dizi[ i ] == 'L' ){
                sayiDisizi[ i ] = 50;
            }
            else if( dizi[ i ] == 'C' ){
                sayiDisizi[ i ] = 100;
            }
            else if( dizi[ i ] == 'D' ){
                sayiDisizi[ i ] = 500;
            }
            else if( dizi[ i ] == 'M' ){
                sayiDisizi[ i ] = 1000;
            }
            
        }

        int sayi = 0;
        for( int i = 0 ; i < ( boyut - 1 ) ; i++ ) {
            if( sayiDisizi[ i ] >= sayiDisizi[ i+1 ] ){
                sayi += sayiDisizi[ i ];
            }
            else{
                sayi -= sayiDisizi[ i ];
            }
        }
        sayi += sayiDisizi[ boyut - 1 ];
        return sayi;

    }

};

int main( void ){

    Solution solution;
    int sayi = solution.romanToInt("MCMXCIV");
    std::cout << sayi << std::endl;
    return 0;

}