#include <iostream>

using namespace std;

int main(){

    int tests;
    cin>>tests;

    while(tests--){

        long long a, b, c, at, bt, ct;
        cin>>a>>b>>c>>at>>bt>>ct;

        long long A, B, C;
        A=a*at;
        B=b*bt;
        C=c*ct;

        long long result=0;
        long long pom=0;

        if(A<=B && A<=C){

            result+=A+at;
            if(B<=C){
                pom=(B-A-at);
                if(pom<0) pom=0;
 
                result+=pom+bt;

                pom=0;
                pom=C-result;
                //cout<<C<<" ";
                if(pom<0) pom=0;
                result+=pom+ct;               
            }
            else{
                pom=(C-A-at);
                if(pom<0) pom=0;

                result+=pom+ct;

                pom=B-result;
                if(pom<0) pom=0;
                result+=pom+bt;
            }
        }
        else if(B<=A && B<=C){

            result+=B+bt;
            if(A<=C){
                pom=(A-B-bt);
                if(pom<0) pom=0;

                result+=pom+at;

                pom=C-result;
                if(pom<0) pom=0;
                result+=pom+ct;               
            }
            else{
                pom=(C-B-bt);
                if(pom<0) pom=0;

                result+=pom+ct;

                pom=A-result;
                if(pom<0) pom=0;
                result+=pom+at;
            }
        }
        else if(C<=B && C<=A){

            result+=C+ct;
            if(A<=B){
                pom=(A-C-ct);
                if(pom<0) pom=0;

                result+=pom+at;

                pom=C-result;
                if(pom<0) pom=0;
                result+=pom+ct;               
            }
            else{
                pom=(B-C-ct);
                if(pom<0) pom=0;

                result+=pom+bt;

                pom=A-result;
                if(pom<0) pom=0;
                result+=pom+bt;
            }
        }

        cout<<result<<"\n";




    }
    return 0;
}