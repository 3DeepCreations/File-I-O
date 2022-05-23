// Google-IO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>// file types - in -out -trunc - app - at e - binary
#include <string>
#include <algorithm>

using namespace std;

void GiveMeCred() {
    fstream f; // object (class that makes methods and data available
    string us;//name
    string pn;//phone number
    string mn;//maiden name
    string ad;//1st childs first name
    string pet;//pets name
    string fc; //first car
    string ba; //bank
    string ss;//social security
    char usr_in;//kick start prog ...
    cout << "Welcome to the best friends game... "
        "Answer these questions and win a trip to MEXICO!!"
        "ALL EXPENSES PAID!!" << endl;
    cout << "Never RESET the game!! This is a test!!!" << endl;
    cout << "Which mode? (r) for reset, (w) for write " << flush;//comes before answer - gain info by lying to the user lolololololol
    cin >> usr_in;
    if (usr_in == 'w') {
        f.open("m.text", ios::out);// open file mtext and read from that file 
        string r;//buffer string
        while (getline(f, r)) {//gets info from f stream and preps buffer strings
            cout << r << endl;// reads buffer string to screen
        }
        f.close();
    }
    if (usr_in == 'r') {
        f.open("m.text", ios::in); // open file and write to mtext for storage and access
        string w;
        while (getline(f, w)) {// writes to f string 
            cout << w << endl;//reads what was written
            
        }
        f.close();
    }
    else {
        f.open("m.text", ios::out | ios::in | ios::app);
        cout << "Hello this is Mr. Nice Guy, my information gathering app"
            " designed for idiots... Anyways, what is your name?" << endl;
        cin >> us;//get name
        cout << "Hello " << us << endl;
        f << us<<"\n";//write name

        cout << us << " what is your phone number?" << endl;
        cin >> pn;//get phone
        cout << "Hello " << us << ", your phone number is " << pn << endl;
        f << pn <<"\n";//write phone number
        cout << "Thank you for that " << us << "."
            " Getting to know you is fun!"
            " Do you know your mothers last name before she was married?"
            " Please enter that name here for a bonus!" << endl;
        cin >> mn;//get maiden
        f << mn<<"\n";//write maiden name
        cout << " We are quickly becoming best friends " << us << "!"
            " I almost forgot, there are a few more things I need for you and I to be"
            " fully connected and the bonus trip to Mexico will be all yours!!!" << endl;

            cout << " I always knew I loved you " << us << "."
                " Let's get this ball rolling..." << endl;
            cout << " These are quickfire questions for you to answer " << us << "." << endl;
            cout << " Be accurate and Mexico is going to be your vacation DESTINATION!!"
                " ALL EXPENSES PAID" << endl;
            cout << " What is your 1st childs 1st name?" << endl;
            cin >> ad;
            f << ad<<"\n";//write childs name
            cout << "Thank you " << us << "." << endl;
           
            cout << " What is your pets name?" << endl;
            cin >> pet;
            f << pet<<"\n";
            cout << "Thank you " << us << "." << endl;

            cout << " What is the make of your first car?" << endl;
            cin >> fc;
            f << fc<<"\n";
            cout << "Thank you " << us << " we are getting there fast." << endl;

            cout << " What is the acronym of your bank?" << endl;
            cin >> ba;
            cout << "Thank you " << us << " almost done." << endl;
            f << ba<<"\n";

            cout << " Last question " << us << ", this last question is to secure your ticket to Mexico!" << endl;
            cout << " What is your SSN?" << endl;
            cin >> ss;
            cout << "Thank you " << us << "." << endl;
            f << ss<<"\n";
           cout<<"Are you ready for your ticket confirmation?  Enter y for yes" << endl;
            char gotem;
            cin >> gotem;
            if (gotem == 'y') {
            system("pause");
            cout << "Gotcha B*-ch!!" << endl;
            cout << "You is so Dumb " << us << "!!!" << endl;
            f.close();
        }
 
        else {
                cout << " You are a waste of my time " << us << "!"
                    " We clearly were never friends and I hate you!!!"
                    " Remember that I have your phone number " << pn << ", your mothers maiden name " << mn <<
                    ", " << ba << "your bank info, " << fc << " first car, " << ss <<
                    " and your ssn!!!" << endl; 
                cout<<"I can use that info to breaks into your accounts and gets your monies$$!!!" << endl;
            f.close();
        }
    }
}

int main()
{
    while (true) { //do this until
        GiveMeCred();
        cout << " Are you a quitter? (n) for no." << endl;
        char quit;
        cin >> quit;
        if (quit == 'n') {// run program 
            GiveMeCred();
            break;
        }
        else {//close program
            cout << "What a loser, dude" << endl;
            return 0;
        }
       
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
