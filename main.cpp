#include <iostream> 
#include <string.h>

using namespace std;

int main()
{
    const char circle[7] = {'c', 'i', 'r', 'c', 'l', 'e'};
    int count;
    do {
        cout << "Enter number of figures" << endl;
        cin >> count;
        if (count < 1) cout << "Error! Try again" << endl;
    } while (count < 1);
    cin.get();
    char str[count][9];

    for (int i = 0; i < count; i++) {
	int temp = 0;
        do {
            cout << "Enter name of figure" << endl;
	    cin.getline(str[i], 9);
	    for (int j = 0; str[i][j] != '('; j++)
		if (str[i][j + 1] == '(') temp = j;
	  
            if (strncmp(str[i], circle, 6) != 0)
                cout << "Error! Invalid name" << endl; 
        } while (strcmp(str[i], circle) != 0);
    }

    for (int i = 0; i < count; i++) {
        cout << (i + 1) << ".";
        puts(str[i]);
        cout << endl;
    }
   
    cin.get();
    return 0;
}
