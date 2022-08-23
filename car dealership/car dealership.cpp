#include "Car.h"
#include "Management.h"

void printHelp() {
    cout << "/help - помощь" << endl;
    cout << "/edit - редактировать" << endl;
    cout << "/add - добавить" << endl;
    cout << "/del - удаление" << endl;
    cout << "/save - сохранить текущий список машин" << endl;
    cout << "/sort1 - отсортировать по имени" << endl;
    cout << "/sort2 - отсортировать по году" << endl;
    cout << "/sort3 - отсортировать по обьему двигателя" << endl;
    cout << "/sort4 - отсортировать по стоимости" << endl;
    cout << "/sort5 - отсортировать по количеству на складе" << endl;
    cout << "/clean - очистить экран" << endl;
    cout << "/end - конец работы" << endl << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int end = 1;
    cout << "Welcom" << endl;
    printHelp();
    string key;
    Management Mon;

    while (end) {
                
        cout << "Введите действие:" << endl;
        cin >> key;
        if (key == "/help") {
            printHelp();
        }
        else if (key == "/edit") {

            string tmp;
            cout << "Введите модель автомобиля(без пробелов):" << endl;
            cin >> tmp;
            Mon.edit(tmp);
        }
        else if (key == "/add") {

            string tmp;
            int tmpi1, tmpi2, tmpi3;
            float tmpf;
            cout << "Введите модель автомобиля(без пробелов):" << endl;
            cin >> tmp;
            cout << "Введите год выпуска автомобиля:" << endl;
            cin >> tmpi1;
            cout << "Введите объем двигателя автомобиля:" << endl;
            cin >> tmpf;
            cout << "Введите стоимость автомобиля" << endl;
            cin >> tmpi2;
            cout << "Введите колличество таких автомобилей:" << endl;
            cin >> tmpi3;
            Car car(tmp, tmpi1, tmpf, tmpi2, tmpi3);
            Mon.addCar(car);

        }
        else if (key == "/del") {
            string tmp;
            cout << "Введите модель которую хотите удалить:" << endl;
            cin >> tmp;
            Mon.delCar(tmp);
        }
        else if (key == "/save") {
            Mon.save();
        }
        else if (key == "/sort1") {
            Mon.sort(1);
        }
        else if (key == "/sort2") {
            Mon.sort(2);
        }
        else if (key == "/sort3") {
            Mon.sort(3);
        }
        else if (key == "/sort4") {
            Mon.sort(4);
        }
        else if (key == "/sort5") {
            Mon.sort(5);
        }
        else if (key == "/clean") {
            system("cls");
        }
        else if (key == "/end") {
            end = 0;
        }
        else {
            cout << "Команда не распознана, повторите попытку" << endl;
        }


    }

}
