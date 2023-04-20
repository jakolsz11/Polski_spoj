#include <iostream>
#include <string>

using namespace std;

int main(){

    string linia;
    
    while(getline(cin, linia)){

        int dlugosc=linia.length();
        int ilosc=0;

        for(int i=0; i<dlugosc; i++){

            if(linia[i] == '?') ilosc++;
            else ilosc=0;

            if(ilosc == 2){
                
                if(linia[i+1] == '='){
                    linia.replace(i-1, 3, "#");
                    i-=2;
                    ilosc=0;
                }

                else if(linia[i+1] == '/'){
                    linia.replace(i-1, 3, "\\");
                    i-=2;
                    ilosc=0;
                }

                else if(linia[i+1] == '('){
                    linia.replace(i-1, 3, "[");
                    i-=2;
                    ilosc=0;
                }

                else if(linia[i+1] == ')'){
                    linia.replace(i-1, 3, "]");
                    i-=2;
                    ilosc=0;
                }

                else if(linia[i+1] == '!'){
                    linia.replace(i-1, 3, "|");
                    i-=2;
                    ilosc=0;
                }

                else if(linia[i+1] == '<'){
                    linia.replace(i-1, 3, "{");
                    i-=2;
                    ilosc=0;
                }

                else if(linia[i+1] == '>'){
                    linia.replace(i-1, 3, "}");
                    i-=2;
                    ilosc=0;
                }

                else if(linia[i+1] == '-'){
                    linia.replace(i-1, 3, "~");
                    i-=2;
                    ilosc=0;
                }

                else if(linia[i+1] == '\''){
                    linia.replace(i-1, 3, "^");
                    i-=2;
                    ilosc=0;
                }

                else if(linia[i+1] == '?'){
                    ilosc=1;
                }


            }

            



        }

        cout<<linia<<endl;


    }
    return 0;
}

//??=asd??=??=asd