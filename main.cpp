#include <iostream>
#include <cmath>

using namespace std;

double a, b, c, d, e, f, i, y, u, v, initialx, finalx;
int n;
char home;

void dom();
void disp1();
void disp2();
void disp3();
void disphome();
void returnhome();


void disphome (){

    cout << "\t\t\tSelect your function type:\n\n\n";
    cout << "1. Linear \n";
    cout << "2. Polynomial \n";
    cout << "3. Exponential \n";
    cout << ">";

    int selection;
    cin >> selection;

    switch(selection) {
        case 1: disp1();
            break;
        case 2: disp2();
            break;
        case 3: disp3();
            break;

        default: cout << "Invalid input";
        }
}

void returnhome (){
  cout << "\n\n\n Press any key to return home: ";
    cin >> home;
    if (home = 'e')
        system ("cls");
        disphome();
}

void dom(){
            cout << "Enter starting x: ";
            cin >> initialx;
            cout << "Enter final x: ";
            cin >> finalx;
}

void disp1(){

    system("cls");

    cout <<"\t\t\t Linear Function \n\n\n";
    cout <<"y=ax+b \n\nEnter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    dom();

    for (i=initialx; i<=finalx; i++){
        y = (a * i) + b ;
        cout << "(" << i << "," << y << ") \n";

    }

    returnhome();
}



void cba(){
            cout << "Enter c: ";
            cin >> c;
            cout << "Enter b: ";
            cin >> b;
            cout << "Enter a: ";
            cin >> a;
}
void disp2(){

system ("cls");

   cout <<"\t\t\t Polynomial Function \n\n\n";
   cout <<"y = fx^n + e^(n-1) ... + a" ;
   cout << "\nEnter highest power (cannot exceed 5): ";
   cin >> n;

           switch (n){
        case 0:
            disp1();
        break;

        case 1:
            disp1();
        break;

        case 2:
            cba();
            dom();
            for (i=initialx; i<=finalx; i++){
                y = c * pow(i,2) + b*i + a;
                cout << "(" << i << "," << y << ") \n";

            }
            returnhome();
        break;

        case 3:
            cout << "Enter d: ";
            cin >> d;
            cba();
            dom();
            for (i=initialx; i<=finalx; i++){
                y = d*pow(i,3) + c * pow(i,2) + b*i + a;
                cout << "(" << i << "," << y << ") \n";
            }
            returnhome();
        break;

        case 4:
            cout << "Enter e: ";
            cin >> e;
            cout << "Enter d: ";
            cin >> d;
            cba();
            dom();
            for (i=initialx; i<=finalx; i++){
                y = e*pow(i,4) + d*pow(i,3) + c * pow(i,2) + b*i + a;
                cout << "(" << i << "," << y << ") \n";
            }
            returnhome();
        break;

        case 5:
            cout << "Enter f: ";
            cin >> f;
            cout << "Enter e: ";
            cin >> e;
            cout << "Enter d: ";
            cin >> d;
            cba();
            dom();
            for (i=initialx; i<=finalx; i++){
                y = f*pow(i,5) + e*pow(i,4) + d*pow(i,3) + c * pow(i,2) + b*i + a;
                cout << "(" << i << "," << y << ") \n";
            }
            returnhome();
        break;

       default: cout << "\n\nERROR: 5 is the highest power";
        }



}
void disp3(){
system("cls");

    cout <<"\t\t\t Exponential Function \n\n\n";
    cout <<"y = a^(ux + v) + b \n\nEnter a: ";
    cin >> a;
    cout << "Enter u: ";
    cin >> u;
    cout << "Enter v: ";
    cin >> v;
    cout << "Enter b: ";
    cin >> b;
    dom();

 for (i=initialx; i<=finalx; i++){
    y = pow(a,(u * i)+ v) + b;
    cout << "(" << i << "," << y << ") \n";
 }
returnhome();
}


int main()
{
disphome();

return 0;
}

