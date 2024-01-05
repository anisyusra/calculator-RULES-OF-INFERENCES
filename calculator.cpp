#include <iostream> //used to handle the data being read from a file as input or data
being written into the file as output
#include <windows.h> //contains declarations for all of the functions in the Windows
API
using namespace std;

//main program
int main(){

system ("cls");
void display();

//declare global variable
char status,ask;
string stateP, stateQ, stateR;
int option, rule, conclu,P1, P2, valid, end;

//do while statement for enter new hypothesis
do{
system ("color 8E");

//main label interface
cout << "*************************************************************************" <<

endl;


cout << "* *" << endl;
cout << "* WELCOME TO INFERENCE ENGINE *"

<< endl;

cout << "* *" << endl;
cout << "*************************************************************************" <<

endl;

// do while statement for testing validation
do{

//Enter the argument

cout<<"PLEASE ENTER THE HYPOTHESES BELOW:\t(ex = r: Ali is

a good boy)";

cout <<"\n\np: ";
getline(cin, stateP);
cout<< "q: ";
getline(cin, stateQ) ;
cout<< "r: ";
getline(cin, stateR);

//interface system display list of premises
cout << "\n\nREFER THIS NUMBER FOR PREMISE SECTIONS: ";
cout << "\n\n ----------------------------------------------------------------------";
cout << "\n | 1: p ";
cout << " | 2: q ";


cout << " | 3: r ";
cout << " | 4: ~p ";
cout << " | 5: ~q ";
cout << " | 6: ~r |";
cout << "\n ----------------------------------------------------------------------";
cout << "\n | 7: p->q |";
cout << " 8: p->r |";
cout << " 9: q->p |";
cout << " 10: q->r |";
cout << " 11: r->p |";
cout << " 12: r->q |";
cout << "\n ----------------------------------------------------------------------";
cout << "\n | 13: pVq |";
cout << " 14: pVr |";
cout << " 15: qVp |";
cout << " 16: qVr |";
cout << " 17: rVp |";
cout << " 18: rVq |";
cout << "\n ----------------------------------------------------------------------";
cout << "\n | 19: p&q |";
cout << " 20: p&r |";
cout << " 21: q&p |";
cout << " 22: q&r |";
cout << " 23: r&p |";
cout << " 24: r&q |";


cout << "\n ----------------------------------------------------------------------";
cout << "\n | 25: ~pVq |";
cout << " 26: ~pVr |";
cout << " 27: ~qVp |";
cout << " 28: ~qVr |";
cout << " 29: ~rVp |";
cout << " 30: ~rVq |";
cout << "\n ----------------------------------------------------------------------";
cout << "\n | 31: ~p&q |";
cout << " 32: ~p&r |";
cout << " 33: ~q&p |";
cout << " 34: ~q&r |";
cout << " 35: ~r&p |";
cout << " 36: ~r&q |";
cout << "\n ----------------------------------------------------------------------";
cout<< endl << endl;

cout<< "Refer to the premise section above"<<endl;
cout<<"\t\tPREMISE 1: ";
cin>> P1;
cout<<"\n\t\tPREMISE 2: ";
cin>>P2;
cout<<"\n\t\tCONCLUSION: ";
cin>>end;


//interface for showing the list of rules

cout<<"Choose the rule for continue:"<<endl;
cout<<"\t\t [1] - MODUS PONENS "<<endl;
cout<<"\t\t [2] - MODUS TOLLENS "<<endl;
cout<<"\t\t [3] - HYPOTHETICAL SYLLOGISM "<<endl;
cout<<"\t\t [4] - DISJUNCTIVE SYLLOGISM "<<endl;
cout<<"\t\t [5] - ADDITION "<<endl;
cout<<"\t\t [6] - SIMPLIFICATION "<<endl;
cout<<"\t\t [7] - CONJUNCTION "<<endl;
cout<<"\t\t [8] - RESOLUTION "<<endl;
cout<<"Rule: ";
cin>>rule;

// ask user either proceed with testing validation or back to main menu

cout<<"\n\tRECORDED!!DO YOU WANT TO PROCEED FOR

TESTING VALIDATION ARGUMENT OR NOT? [Y/N]: ";

cin>> status;
cin.ignore();
system ("cls");
void display();


}
// if user enter N (no), user will need to enter the new arguments, rule and

premises

// if user enter Y (yes), system will continue with validation process
while(status != 'Y');

//Continue with validation process screen
system("pause");
system ("cls");
void display();
system ("color 7C");

//output message
cout<<"-------------------------OUTPUT---------------------------------"<<endl;
cout<<"p: " <<stateP<<endl;
cout<<"q: " <<stateQ<<endl;
cout<<"r: "<<stateR<<endl;

//condition for premise 1
cout<<"\nPREMISE 1: ";
if(P1 == 1)
cout<<"p";
else if(P1 == 2)
cout<<"q";
else if(P1 == 3)

c
o
u
t
<
<
"
r
"; else if(P1 == 4) cout<<"~p
"; else if(P1 == 5) cout<<"~q"; else if(P1 == 6) cout<<"~r"; else if(P1 == 7) cout<<"p->q
"; else if(P1 == 8) cout<<"p->r"; else if(P1 == 9) cout<<"q->p"; else if(P1 == 10) cout<<"q->r"; else if(P1 == 11) cout<<"r->p"; else if(P1 == 12) cout<<"r->q"; else if(P1 == 13) cout<<"pVq"; else if(P1 == 14) cout<<"pVr"; else if(P1 == 15) cout<<"qVp"; 2
5

els
e if
(
P
1
=
=
1
6
)
c
o
u
t
<
<
"
q
V
r
"; else if(P1 == 17) cout<<"rVp"; else if(P1 == 18) cout<<"rVq"; else if(P1 == 19) cout<<"p&q"; else if(P1 == 20) cout<<"p&r"; else if(P1 == 21) cout<<"q&p"; else if(P1 == 22) cout<<"q&r"; else if(P1 == 23) cout<<"r&p"; else if(P1 == 24) cout<<"r&q"; else if(P1 == 25) cout<<"~pVq
"; else if(P1 == 26) cout<<"~pVr"; else if(P1 == 27) cout<<"~qVp"; else if(P1 == 28)



c
o
u
t
<
<
"
~
q
V
r
"; else if(P1 == 29) cout<<"~rVp"; else if(P1 == 30) cout<<"~rVq"; else if(P1 == 31) cout<<"~p&q"; else if(P1 == 32) cout<<"~p&r"; else if(P1 == 33) cout<<"~q&p"; else if(P1 == 34) cout<<"~q&r"; else if(P1 == 35) cout<<"~r&p"; else if(P1 == 36) cout<<"~r&q"; //condition for premise
2

c
o
u
t
<
<
"
\
n
P
R
E
MIS
E
2: "; if(P2 == 1) cout<<"p"; else if(P2 == 2) cout<<"q"; else if(P2 == 3)


c
o
u
t
<
<
"
r
"; else if(P2 == 4) cout<<"~p
"; else if(P2 == 5) cout<<"~q"; else if(P2 == 6) cout<<"~r"; else if(P2 == 7) cout<<"p->q
"; else if(P2 == 8) cout<<"p->r"; else if(P2 == 9) cout<<"q->p"; else if(P2 == 10) cout<<"q->r"; else if(P2 == 11) cout<<"r->p"; else if(P2 == 12) cout<<"r->q"; else if(P2 == 13) cout<<"pVq"; else if(P2 == 14) cout<<"pVr"; else if(P2 == 15) cout<<"qVp";

els
e if
(
P
2
=
=
1
6
)
c
o
u
t
<
<
"
q
V
r
"; else if(P2 == 17) cout<<"rVp"; else if(P2 == 18) cout<<"rVq"; else if(P2 == 19) cout<<"p&q"; else if(P2 == 20) cout<<"p&r"; else if(P2 == 21) cout<<"q&p"; else if(P2 == 22) cout<<"q&r"; else if(P2 == 23) cout<<"r&p"; else if(P2 == 24) cout<<"r&q"; else if(P2 == 25) cout<<"~pVq
"; else if(P2 == 26) cout<<"~pVr"; else if(P2 == 27) cout<<"~qVp"; else if(P2 == 28)

cout<<"~qVr";
else if(P2 == 29)
cout<<"~rVp";
else if(P2 == 30)
cout<<"~rVq";
else if(P2 == 31)
cout<<"~p&q";
else if(P2 == 32)
cout<<"~p&r";
else if(P2 == 33)
cout<<"~q&p";
else if(P2 == 34)
cout<<"~q&r";
else if(P2 == 35)
cout<<"~r&p";
else if(P2 == 36)
cout<<"~r&q";

//else if condition for rules output message
cout<<"\nRULE: ";
if (rule == 1)
cout<<"Modus Ponens";
else if (rule == 2)
cout<<"Modus Tollens";

30

else if (rule == 3)
cout<<"Hypothetical Syllogism";
else if (rule == 4)
cout<<"Disjunctive Syllogism";
else if (rule == 5)
cout<<"Addition";
else if (rule == 6)
cout<<"Simplification";
else if (rule == 7)
cout<<"Conjunction";
else if (rule == 8)
cout<<"Resolution";

//if else condition for testing
cout<<"\nCONCLUSION: ";

//Hypothetical syllogism
if(P1 == 7 && P2 == 10)
{
valid = 8;
cout<<"p->r";
conclu = 3;
}

31

//Modus ponens
else if (P1 == 1 && P2 == 8)
{
valid = 3;
cout<<"r";
conclu = 1;
}

//Modus ponens
else if (P1 == 1 && P2 == 7)
{
valid = 2;
cout<<"q";
conclu = 1;
}

//Modus tollens
else if (P1 == 5 && P2 == 7)
{
valid = 4;
cout<<"~p";
conclu = 2;
}

//Disjunctive syllogism

32

else if (P1 == 13 && P2 == 4)
{
valid = 2;
cout<<"q";
conclu = 4;
}

//Conjunction
else if (P1 == 1 && P2 == 2)
{
valid = 19;
cout<<"p&q";
conclu = 7;
}

//Resolution
else if (P1 == 13 && P2 == 26)
{
valid = 16;
cout<<"qVr";
conclu = 8;
}

//if else condition output for validation argument with law used
if(end == valid)

33

cout<<"\nThe conclusion user enter is VALID.";
else
cout<<"\nThe conclusion user enter is FALSE.";

//if else condition output for validation argument with law used
if(rule == conclu)
cout<<"\nVALIDATION: The argument is VALID with the law used.";
else
cout<<"\nVALIDATION: The argument is FALSE with the law used.";

//ask user either continue enter new data or terminate system
cout<<"\n\n\tCOMPLETED! DO YOU WANT TO ENTER NEW

HYPOTHESIS? [Y/N]: ";
cin>> ask;
cin.ignore();
system ("cls");
void display();
}
//If user enter Y (yes), so system will back to main menu and user can enter new data
//If user enter N (No), so system will end and terminate
while(ask != 'N');

}