/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

/* 
Input : Number of plates on the source tower
Output : Printing the steps for copying the plates from source to destination with the help of helper tower
 */

class TowerOfHanoi {
private:
    int n_elements;

public:
    TowerOfHanoi(int n_elements) {
        this->n_elements = n_elements;
        _tower_of_hanoi("source", "mid", "destination", n_elements);
    }

private:
    void _tower_of_hanoi(string source, string mid, string destination, int n_elements) {

        // This is a possible input, but not valid in scope of toh, since there is nothing to process here !
        if (n_elements == 0) {
            cout << "Nothing to place !\n";
            return;
        }
        //Base condition : The smallest possible VALID input is ,
        if (n_elements == 1) {
            cout << "Take the upper plate from " << source << " and place it on " << destination << "\n";
            return;
        }

        //Hypothesis : Making the input smaller by calling on n - 1 elements
        _tower_of_hanoi(source, destination, mid, n_elements - 1);

        // Process the reduced input :
        cout << "Take the upper plate from " << source << " and place it on " << destination << "\n";
        /* 
        After doing so, we are at the smallest input possible and the action is taken for n - 1 elements in the just above line

        Induction : Aftermath of hypothesis, here we have to place the element(s) from helper to destination.
        
		Since we have made the input smaller to the state where the source has only one plate, we have processed that state through our base
		condition. THIS WAS MADE POSSIBLE WITH THE HELP OF MID TOWER. 

		In Induction step, we deal with the leftover states which has caused our mid tower to hold all the plates in ascending order 
		(ie following the toh criteria), its time to take these elements and place it on destination. 
		
		To do this, we take MID as SOURCE, by now, the og source will be empty, and can act as MID, destination remains the same, hence,
		 */
        _tower_of_hanoi(mid, source, destination, n_elements - 1);
        return;
    }
};

int main() {
    TowerOfHanoi(1);
    return 0;
}