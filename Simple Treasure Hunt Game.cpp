#include <iostream>
using namespace std;
int main(){
    bool gold[4][4] = {
      {0,1,0,0},
      {0,0,0,0},
      {0,0,1,0},
      {1,1,0,0}
    };
    int gold_found = 0;
    int attempts = 0;
    int room1,room2;
    while (gold_found<4) {
        cout<<"Select a room between 0 and 3: ";
        cin>>room1;
        cout<<"Select another room between 0 and 3: ";
        cin>>room2;
        if (gold[room1][room2] == 1) {
            gold[room1][room2] = 0;
            gold_found++; 
            cout<<"Hooray, you found gold in one of the rooms, still "<< (4 - gold_found) <<" rooms left\n\n";
        }
        else{
            cout<<"Gold not found, try searching in different rooms\n\n";
        }
        attempts++;
    }
    cout<<"Congrats you found gold in all the rooms in "<<attempts<<" attempts!!";
    return 0;
}
