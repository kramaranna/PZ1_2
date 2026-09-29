#include <iostream>

using namespace std;

// Функція для зміни вартості замовлення 
void changePrice(double* price) {
    *price = *price + 100.0; 
}

int main() {
    int orderNumber = 412;
    cout << "Номер замовлення: " << orderNumber << endl;
    cout << "Адреса orderNumber: " << &orderNumber << endl;

    int* ptr = &orderNumber;
    cout << "Адреса через вказівник: " << ptr << endl;

    // Питання для самоперевірки: Чи однакові адреси?
    // ВІДПОВІДЬ НА ПИТАННЯ: Так, адреси однакові

    cout << "Значення через вказівник: " << *ptr << endl;

    *ptr = 150; 
    cout << "Новий номер замовлення: " << orderNumber << endl;
    // ЩО ВІДБУЛОСЯ?
    // ВІДПОВІДЬ НА ПИТАННЯ: Зірка перед вказівником (*ptr) розіменувала його, що дозволило змінити значення за адресою пам'яті. 
    orderNumber = 412;
    int quantity = 2;
    int* quantityPtr = &quantity;
    cout << "\nКількість товарів у замовленні: " << quantity << endl;

    cout << "Адреса quantity: " << &quantity << endl;
    cout << "Адреса через quantityPtr: " << quantityPtr << endl;

    cout << "Кількість через вказівник: " << *quantityPtr << endl;
    *quantityPtr = 5;
    cout << "Нова кількість товарів: " << quantity << endl;

    quantity = 2;
    double price = 2400.0;

    cout << "\nПочаткова вартість: " << price << " грн" << endl;
    changePrice(&price);
    cout << "Нова вартість: " << price << " грн" << endl;

    return 0;
}