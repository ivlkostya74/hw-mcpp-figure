// figure.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 

class Figura
{
private:
    int sides_count;

public:
    Figura() { sides_count = 0; }       // конструктор по умолчанию
    Figura(int n) { get_sides_count(n); }// конструктор с параметрами


    int get_sides_count(int n) {
        sides_count = n;
        return sides_count;
    }
    int getData() { return sides_count; }
};
class Triangle : public Figura
{
public:

    Triangle() : Figura(3) { ; }
};

class Quad : public Figura
{
public:

    Quad() { get_sides_count(4); }
};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    std::system("cls");


    Figura fig;
    Triangle tri;
    Quad quad;

    std::cout << "Количество сторон:" << std::endl
        << "Фигура: " << fig.getData() << std::endl
        << "Треугольник: " << tri.getData() << std::endl
        << "Четырёхугольник: " << quad.getData() << std::endl;


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
