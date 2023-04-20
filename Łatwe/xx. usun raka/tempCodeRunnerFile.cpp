#include <iostream>

using namespace std;

bool rak(string a){

    if(a.find("rak") == string::npos) return false;
    else if(a.empty()==true) return false;
    else return true;
}

int main(){

    int tests;
    cin>>tests;

    while(tests--){

        string line;
        cin>>line;

        int x, y;

        if(rak(line)==false){

            for(int i=0; i<line.size(); i++){

                x=i;
                y=line.size()-1-i;

                if(line[x] != line[y]){
                    swap(line[x], line[y]);
                    if(rak(line) == false){
                        cout<<"TAK "<<x+1<<" "<<y+1<<"\n";
                        break;
                    }
                    else swap(line[x], line[y]);
                } 
            }

        }
        else{
            x=line.find("rak");
            y=line.rfind("rak");

            if(x==y){//tzn ze jest jeden rak

                for(int i=0; i<line.size(); i++){

                    if(line[i] != line[x]){

                        swap(line[i], line[x]);
                        if(rak(line) == false){

                            cout<<"TAK "<<min(i, x)+1<<" "<<max(i, x)+1<<"\n";
                            break;
                        }
                        else swap(line[i], line[x]);

                    }


                }

            }
            else{

                string spr=line;

                spr.erase(x, 3);
                spr.erase(y-3, 3);
                //cout<<spr<<". ";

                if(rak(spr) == true) cout<<"NIE\n"; //tzn ze sa 3
                else{ // tzn ze sa dwa

                    swap(line[x], line[y+1]);
                    //if(rak(line)==false) 
                    cout<<"TAK "<<x+1<<" "<<y+2<<"\n";

                }

            }

        }

    }
    return 0;
}

