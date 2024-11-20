#include <iostream>
#include <string>

//using namespace std;

const int MAX = 26;

int main(){

    // this runs a possible compination of every 6 letter word in lower case known to man, mostly in english but you get the point
    char alphabet[MAX] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
 
    for(int i = 0; i < MAX; i++ ){
        for(int j = 0; j < MAX; j++ ){
            for(int k = 0; k < MAX; k++ ){
                for(int l = 0; l < MAX; l++ ){
                    for(int m = 0; m < MAX; m++ ){
                        for(int n = 0; n < MAX; n++ ){
                            std::cout << alphabet[i] << alphabet[j] << alphabet[k] << alphabet[k] << alphabet[m] << alphabet[n] << std::endl;
                        }
                    }
                }
            }
        }
    }

}