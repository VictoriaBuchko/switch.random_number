#include <iostream>
using namespace std;

int main() {
    cout << "Task 1\n";
    //Написать программу которая предлагает пользователю ввести номер дня недели
    //и ответ показывает название этого дня например 6-этой субботы решить с помощью if и switch

    int dayNumber;

    cout << "Enter the day number (1 to 7): ";
    cin >> dayNumber;

    // код с использованием лесенки if
    if (dayNumber == 1) {
        cout << "Monday\n";
    }
    else if (dayNumber == 2) {
        cout << "Tuesday\n";
    }
    else if (dayNumber == 3) {
        cout << "Wednesday\n";
    }
    else if (dayNumber == 4) {
        cout << "Thursday\n";
    }
    else if (dayNumber == 5) {
        cout << "Friday\n";
    }
    else if (dayNumber == 6) {
        cout << "Saturday\n";
    }
    else if (dayNumber == 7) {
        cout << "Sunday\n";
    }
    else {
        cout << "Invalid week number. Try again!\n";
    }

    //код с использованием switc
    switch (dayNumber) {
    case 1:
        cout << "Monday\n";
        break;
    case 2:
        cout << "Tuesday\n";
        break;
    case 3:
        cout << "Wednesday\n";
        break;
    case 4:
        cout << "Thursday\n";
        break;
    case 5:
        cout << "Friday\n";
        break;
    case 6:
        cout << "Saturday\n";
        break;
    case 7:
        cout << "Sunday\n";
        break;
    default:
        cout << "Invalid week number. Try again!\n";
        break;
    }


    cout << "---------------------------------------------------\n";
    cout << "Task 2\n";



    system("chcp 1251 > null");//используемой для отображения символов кириллицы 
    int score = 0;

    cout << "Ласкаво просимо до гри 'Про щасливчика'!\n Відповіді вводити англійською\n\n";

    // Вопрос 1
    cout << "Питання 1: Яка столиця Франції?\n";
    cout << "a) Мадрид\n";
    cout << "b) Лондон\n";
    cout << "c) Париж\n";
    cout << "d) Рим\n";

    char answer1;
    cin >> answer1;

    switch (answer1) {
    case 'c':
    case 'C':
        cout << "Правильно! Париж - столиця Франції\n\n";
        score++;
        break;
    default:
        cout << "Неправильно! Гра завершена\n";
        cout << "Ви відповіли правильно на " << score << " з 5 питань. Гра завершена.\n";
        return 0;
    }


    // Вопрос 2
    cout << "Питання 2: Яка столиця Італії?\n";
    cout << "a) Мадрид\n";
    cout << "b) Лондон\n";
    cout << "c) Рим\n";
    cout << "d) Париж\n";

    char answer2;
    cin >> answer2;

    switch (answer2) {
    case 'c':
    case 'C':
        cout << "Правильно! Рим - столиця Італії\n\n";
        score++;
        break;
    default:
        cout << "Неправильно! Гра завершена\n";
        cout << "Ви відповіли правильно на " << score << " з 5 питань. Гра завершена.\n";
        return 0;
    }


    // Вопрос 3
    cout << "Питання 3: Яка столиця Англії?\n";
    cout << "a) Лондон\n";
    cout << "b) Париж\n";
    cout << "c) Мадрид\n";
    cout << "d) Рим\n";

    char answer3;
    cin >> answer3;

    switch (answer3) {
    case 'a':
    case 'A':
        cout << "Правильно! Лондон - столиця Англії\n\n";
        score++;
        break;
    default:
        cout << "Неправильно! Гра завершена\n";
        cout << "Ви відповіли правильно на " << score << " з 5 питань. Гра завершена.\n";
        return 0;
    }

    // Вопрос 4
    cout << "Питання 4: Яка столиця України?\n";
    cout << "a) Київ\n";
    cout << "b) Варшава\n";
    cout << "c) Рим\n";
    cout << "d) Будапешт\n";

    char answer4;
    cin >> answer4;

    switch (answer4) {
    case 'a':
    case 'A':
        cout << "Правильно! Київ - столиця України\n\n";
        score++;
        break;
    default:
        cout << "Неправильно! Гра завершена\n";
        cout << "Ви відповіли правильно на " << score << " з 5 питань. Гра завершена.\n";
        return 0;
    }


    // Вопрос 5
    cout << "Питання 5: Яка столиця США?\n";
    cout << "a) Нью-Йорк\n";
    cout << "b) Вашингтон\n";
    cout << "c) Лос-Анджелес\n";
    cout << "d) Чикаго\n";

    char answer5;
    cin >> answer5;

    switch (answer5) {
    case 'b':
    case 'B':
        cout << "Правильно! Вашингтон - столиця США\n\n";
        score++;
        break;
    default:
        cout << "Неправильно! Гра завершена\n";
        cout << "Ви відповіли правильно на " << score << " з 5 питань. Гра завершена.\n";
        return 0;
    }

    // Виведення результатів
    if (score == 5) {
        cout << "Вітаю! Ви відповіли правильно на всі питання. Ви - щасливчик!\n";
    }
    
    return 0;
}





