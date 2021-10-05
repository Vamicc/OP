#include <iostream>
using namespace std;

int main()
{
    int x, y; // введення змінних x та y
    string result; // введення змінної результату перевірки значення координат

    cout << "Enter the x coordinate: ";
    cin >> x;
    cout << "Enter the y coordinate: ";
    cin >> y; // просимо ввести координати точки

   if (x > 0 && y > 0) {
   result = "The point belongs to the first quadrant.\n";
    }
   else if (x > 0 && y < 0) {
   result = "The point belongs to the forth quadrant.\n";
    }
   else if (x < 0 && y > 0) {
   result = "The point belongs to the second quadrant.\n";
    }
   else if (x < 0 && y < 0) {
   result = "The point belongs to the third quadrant.\n";
   } // перевірка до якого з квадрантів належить точка
   else {
   result = "The point is either at the origin or on one of the axes.\n";
   } // інакше точка лежить на початку координат або на одній з її осей

   cout << result; // виводимо результат перевірки координат, до якого квадранту належить точка

   system("pause");
   return 0;
}
