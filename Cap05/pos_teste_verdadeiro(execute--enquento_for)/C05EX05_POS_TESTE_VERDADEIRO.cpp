 // C05EX05.CPP

 #include <iostream>

 using namespace std;

 int main(void)
 {
     int32_t r;
     int16_t i = 0;

     do
     {
         r = i - 2 * (i / 2);

         if (r != 0 )
            cout << "valor Impar entre <0> e <20>: " << i << endl;
            cout << endl;
        i++;
     }
     while (i <= 20);

     cout << endl;
     cout << "Tecle <Enter> para encerar...";
     cin.get();
     return 0;
 }
