# PZ1_2
# Практична робота №1_2: Вказівники (Частина 1)
**Виконала:** студентка групи 4СОМ Крамар Анна (Варіант № 4)

##  Завдання.
<img width="678" height="49" alt="image" src="https://github.com/user-attachments/assets/b329af7a-72b6-4cee-a9c8-a2aec70db59c" />
<img width="283" height="33" alt="image" src="https://github.com/user-attachments/assets/09ab7159-3eac-4828-b0af-962c06c3d5ea" />



### 💻 Код програми:
```cpp
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
```
<img width="411" height="277" alt="image" src="https://github.com/user-attachments/assets/2dae6e81-ed20-47c8-9a60-8cdb3d1511c1" />

### 👁️ Візуалізація пам'яті:
<img width="935" height="565" alt="image" src="https://github.com/user-attachments/assets/ac8b0f56-9894-49b7-87dd-54aa97a627d7" />
<img width="969" height="573" alt="image" src="https://github.com/user-attachments/assets/f7a9c0b5-5ca8-44a1-95ce-38e86b21411a" />
<img width="903" height="528" alt="image" src="https://github.com/user-attachments/assets/bb6ce8f0-2f85-43ec-b6e2-9a0c0157840d" />
<img width="1093" height="584" alt="image" src="https://github.com/user-attachments/assets/d68c7df4-a2ad-4bc8-8c2a-2d3116f4280d" />

### Висновок.
  Під час виконання цієї практичної роботи я ознайомилася з поняттям вказівників у C++, навчилася отримувати адреси змінних за допомогою оператора & та звертатися до їхніх значень через оператор розіменування *. 
  Я на практиці зрозуміла, як працює прямий доступ до пам'яті комп'ютера та яким чином можна ефективно змінювати значення змінних через їхні адреси. 
  Усі поставлені завдання варіанта 4 виконано без проблем.

