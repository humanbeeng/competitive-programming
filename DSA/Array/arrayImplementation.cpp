#include<iostream>
using namespace std;

class myArray{
    public:
    int length = 0, data[];

    int push(int item){
        data[length] = item;
        length++;
        return data[length-1];
    }

    void pop(){
        int poppedItem = data[length-1];
        length--;
        cout << poppedItem << " has been popped outta array" << endl;
    }

    void display(){
        int i;
        for(i=0;i<length;i++){
            cout << data[i]<< endl;
        }
    }

    void deleteItem(int index){
        int deletedItem = data[index];
        for(int i = index; i < length-1; i++) {
            data[i] = data[i+1];
        }
        length--;
        cout << deletedItem << " has been deleted from array !" << endl;
    }
};


int main(){
    int pushedItem;
    myArray arr;
    pushedItem = arr.push(2);
    arr.push(6);
    arr.push(7);
    // arr.pop();
    arr.display();
    arr.deleteItem(0);
    cout << "The last item is " << arr.data[arr.length];

    
}