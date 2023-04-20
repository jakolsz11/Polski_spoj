#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main(){

    map <int, char> IntToChar {{10, 'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'}, {14, 'E'}, {15, 'F'},
    {1, '1'}, {2, '2'}, {3, '3'}, {4, '4'}, {5, '5'}, {6, '6'}, {7, '7'}, {8, '8'}, {9, '9'}, {0, '0'}};

    map <char , int> LetterToInt {{'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14}, {'F', 15}};

    int tests;
    cin>>tests;

    while(tests--){

        int p;
        cin>>p;

        string l1, l2, wynik;
        cin>>l1>>l2;

        reverse(l1.begin(), l1.end());
        reverse(l2.begin(), l2.end());
        int x, y, z=0;

        for(int i=0; i<min(l1.size(), l2.size()); i++){

            
            if(l1[i] >= '0' && l1[i]<='9'){
                x=stoi(l1.substr(i, 1));
                //cout<<x<<". ";
            }
            else{
                x=LetterToInt[l1[i]];
                //cout<<x<<"\n";
            }

            if(l2[i] >= '0' && l2[i]<='9'){
                y=stoi(l2.substr(i, 1));
                //cout<<y<<"! ";
            }
            else{
                y=LetterToInt[l2[i]];
                //cout<<y<<"\n";
            }

            wynik.push_back(IntToChar[(z+x+y)%p]);
            //cout<<IntToChar[(z+x+y)%p]<<" ";
            z=(z+x+y)/p;

        }

        for(int i=min(l1.size(), l2.size()); i<max(l1.size(), l2.size()); i++){

            if(l1.size()>l2.size()){

                if(l1[i] >= '0' && l1[i]<='9'){
                    x=stoi(l1.substr(i, 1));
                    //cout<<x<<". ";
                }
                else{
                    x=LetterToInt[l1[i]];
                    //cout<<x<<"\n";
                }

                wynik.push_back(IntToChar[(z+x)%p]);
                //cout<<IntToChar[(z+x+y)%p]<<" ";
                z=(z+x)/p;
                
            }
            else{

                if(l2[i] >= '0' && l2[i]<='9'){
                    y=stoi(l2.substr(i, 1));
                    //cout<<y<<"! ";
                }
                else{
                    y=LetterToInt[l2[i]];
                    //cout<<y<<"\n";
                }

                wynik.push_back(IntToChar[(z+y)%p]);
                //cout<<IntToChar[(z+x+y)%p]<<" ";
                z=(z+y)/p;

            }
            
        }

        if(z != 0){
            wynik.push_back(IntToChar[z]);
        }

        reverse(wynik.begin(), wynik.end());
        cout<<wynik<<"\n";

    }
    return 0;
}