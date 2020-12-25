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
double evaluate (double x, double coeff [], std::size_t capacity);


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


void disp2(){

system ("cls");

   cout <<"\t\t\t Polynomial Function \n\n\n";
   cout <<"y = (a_n) (x^n) + (a_n-1) x^(n-1) ... + a" ;
   cout << "\nEnter highest power: ";
   cin >> n;

   double *coeffiecients = new double[n]{};
   double input_coeff = 0;
   for (int i = 0; i <= n; i++){
        std::cout << "a_"<< i << ": ";
        cin >> input_coeff;
        coeffiecients[i] = input_coeff;
   }
   dom();
   for(int i = initialx; i <= finalx; i++){
        y = evaluate(i, coeffiecients, n);
        cout << "(" << i << "," << y << ") \n";
   }

   delete[]coeffiecients;
   coeffiecients = nullptr;

}
double evaluate (double x, double coeff [], std::size_t capacity){
    double y{};
    double sum{};
    double n = capacity-1;
    for (std::size_t i = 0; i < capacity; i++){
        sum+= coeff[i] * std::pow(x, n-i);
    }

    y = sum;
    return y;
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

