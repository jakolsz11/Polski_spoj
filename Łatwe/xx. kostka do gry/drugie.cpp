#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map <int, int> nums={{1, 6}, {6, 1}, {4, 3}, {3, 4}, {2, 5}, {5, 2}};

void Position(char s, int &up, int &down, int &front, int &back, int &left, int &right){

    int temp;

    switch(s){
        case 'F':
            temp=front;
            front=up;
            up=back;
            back=down;
            down=temp;
            break;
        case 'B':
            temp=up;
            up=front;
            front=down;
            down=back;
            back=temp;
            break;
        case 'L':
            temp=left;
            left=up;
            up=right;
            right=down;
            down=temp;
            break;
        case 'P':
            temp=up;
            up=left;
            left=down;
            down=right;
            right=temp;
            break;
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, n, x, y, u, f, r, l=0, d=0, b=0;
    cin>>k>>n>>x>>y>>u>>f>>r;
    d=nums[u];
    l=nums[r];
    b=nums[f];

    char s;
    
    for(int i=0; i<k; i++){
        cin>>s;
        switch(s){
            case 'F':
                y++;
                if(y<=n) Position(s, u, d, f, b, l, r);
                else y--;
                break;
            case 'B':
                y--;
                if(y>=1) Position(s, u, d, f, b, l, r);
                else y++;
                break;
            case 'L':
                x--;
                if(x>=1) Position(s, u, d, f, b, l, r);
                else x++;
                break;
            case 'P':
                x++;
                if(x<=n) Position(s, u, d, f, b, l, r);
                else x--;
                break;
        }        

    }

    cout<<u;

    return 0;
}