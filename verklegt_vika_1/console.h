#ifndef CONSOLE_H
#define CONSOLE_H

#include <string>

using namespace std;

class Console
{
<<<<<<< HEAD

=======
>>>>>>> 79e483dac04668ddd3fea04865910b095e296630
public:
    Console();
    virtual ~Console();
    void welcome(); //print out welcome note
    void viewOrInsert(); //print out choice menu for viewing or inserting
    char choice(); //make choice
    void choiceMade(char choice_made);
    void sorting_menu(); //print out the sorting menu
    string stringChoice(); //here you choose what kind of sorting you want to do
    void viewDisplay(); //prints out the list and sorting
    void toContinue(); //press enter to continue
    void sorting(string str);

    //string str = stringChoice();

    void dataWriteError ();  // villi: error output fyrir database
    void dataSearchNotFound ();


private:

<<<<<<< HEAD

=======
>>>>>>> 79e483dac04668ddd3fea04865910b095e296630
};

#endif // CONSOLE_H
