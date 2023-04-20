#include <iostream>

using namespace std;

int main(){

    int tests;
    cin>>tests;

    while(tests--){

        string line;
        int height;
        cin>>line>>height;

        if(line.size()<=height){
            cout<<line<<"\n";
        }
        else if(height == 1){
            cout<<line<<"\n";
        }
        else{
            
            const int nr=height;
            string result[nr];
            
            int counter=1;
            bool plusminus=true;

            for(int i=0; i<line.size(); i++){

                result[counter].push_back(line[i]);

                if(plusminus==true){

                    if(counter<(height-1)) counter++;
                    else if(counter==(height-1)){
                        
                        counter--;
                        plusminus=false;

                    }

                }
                else{
                    if(counter>0) counter--;
                    else if(counter==0){
                        counter++;
                        plusminus=true;
                    }
                }    

            }

            for(int i=0; i<nr; i++){
                cout<<result[i];
                result[i].clear();
            }
            cout<<"\n";

        }


    }
    return 0;
}