 #include <iostream>
 #include <ciso646>

 using namespace std;

 void pare (void){
    cout << "Tecle <ENTER> para encerrar...";
    cin.get();
 }

 void potencia (uint32_t x, uint32_t y){
    uint32_t r = 1;
    for(uint32_t i = 0; i < y; i++) {
        r *= x;
    }

    cout << r << endl;
 }
 int main(void){
     uint32_t a, *pa = &a, b, *pb = &b ;

    cout << "Entre valor para <A>";
    cin >> *pa;
    cin.ignore(80, '\n');
    cout << endl;

    cout << "Entre valor para <B>";
    cin >> *pb;
    cin.ignore(80,'\n');
    cout << endl;

    potencia(*pa, *pb);
    pare();

    return 0;
 }
