#include<iostream>
using namespace std;
int main(){
        char ch;
        int x = 0, y=0;
        ch = cin.get();
        while (ch!= '-'){

                switch(ch){
                case 'N': y++;break;
                case 'S': y--;break;
                case 'E': x++;break;
                case 'W': x--;break;
            }

            ch = cin.get();
        }
        while(x!=0||y!=0){
            if (x>0){cout<<'E';x--;}
            else if (y>0){cout<<'N';y--;}
            else if (y<0){cout<<'S';y++;}
            else if (x<0){cout<<'W';x++;};

        }


}
