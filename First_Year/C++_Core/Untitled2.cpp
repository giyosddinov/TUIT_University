#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> arr;
    int a, tanlov;

    // Foydalanuvchidan elementlar olish
    do {
        cout << "Element qo'shish: 1\tChiQish: 2\n>>> ";
        cin >> tanlov;
        if (tanlov == 1) {
            cout << arr.size() + 1 << "-elementni kiriting >> ";
            cin >> a;
            arr.push(a);
        }
        else if (tanlov == 2) break;
        else cout << "Bunday buyruq mavjud emas!" << endl;
    } while (true);

    int siz = arr.size();
    int arr1[siz];

    // Queue'ni arrayga o'tkazish
    for (int i = 0; i < siz; i++) {
        arr1[i] = arr.front();
        arr.pop();
    }

    // Eng kichik elementni topish
    int min = arr1[0];
    for (int i = 1; i < siz; i++) { // i = 1 dan boshlash kerak!
        if (min > arr1[i]) min = arr1[i];
    }

    // 0 ni eng kichik elementdan keyin qo‘shish
    bool replaced = false;
    for (int i = 0; i < siz; i++) {
        arr.push(arr1[i]);
        if (!replaced && arr1[i] == min) {
            arr.push(0);  // 0 ni faqat bir marta qo‘shish
            replaced = true;
        }
    }

    // Natijani chiqarish
    cout << "To'g'irlangan list >>>> ";
    while (!arr.empty()) {
        cout << arr.front() << " ";
        arr.pop();
    }
    cout << endl;

    return 0;
}

