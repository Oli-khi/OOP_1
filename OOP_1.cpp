﻿#include <iostream>
#include <cmath>
#include <cstdint>
#include <cassert>

class Power
{
    /*Создать класс Power, который содержит два вещественных числа.Этот класс должен иметь две переменные - члена для хранения этих вещественных чисел.
    Еще создать два метода : один с именем set, который позволит присваивать значения переменным, второй — calculate, который будет выводить результат возведения
    первого числа в степень второго числа.Задать значения этих двух чисел по умолчанию.*/
private:
    int a;
    int b;
public:
    void set(int set_a, int set_b) {
        a = set_a;
        b = set_b;
    }
    void calculate() {
        std::cout << pow(a, b) << std::endl;
    }
};

class RGBA
{
/* Написать класс с именем RGBA, который содержит 4 переменные - члена типа std::uint8_t : m_red, m_green, m_blue и m_alpha(#include cstdint для доступа к этому типу).
        Задать 0 в качестве значения по умолчанию для m_red, m_green, m_blue и 255 для m_alpha.Создать конструктор со списком инициализации членов, который позволит
        пользователю передавать значения для m_red, m_blue, m_green и m_alpha.Написать функцию print(), которая будет выводить значения переменных - членов.
*/
private:
    std::uint8_t m_red = 0, m_green = 0, m_blue = 0, m_alpha = 255;
public:
    RGBA(std::uint8_t red, std::uint8_t green, std::uint8_t blue, std::uint8_t alpha)
        : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) 
    {
    }
    void print(std::uint8_t m_red, std::uint8_t m_green, std::uint8_t m_blue, std::uint8_t m_alpha) {
        std::cout << m_red << " " << m_green << " " << m_blue << " " << m_alpha << std::endl;
    }
};

class Stack
{
   /* Написать класс, который реализует функциональность стека.Класс Stack должен иметь :
    private - массив целых чисел длиной 10;
    private целочисленное значение для отслеживания длины стека;
    public - метод с именем reset(), который будет сбрасывать длину и все значения элементов на 0;
    public - метод с именем push(), который будет добавлять значение в стек.push() должен возвращать значение false, если массив уже заполнен, и true в противном случае;
    public - метод с именем pop() для вытягивания и возврата значения из стека.Если в стеке нет значений, то должно выводиться предупреждение;
    public - метод с именем print(), который будет выводить все значения стека. */
private:
    int m_array[10];
    int m_next;
public:
    void reset()
    {
        m_next = 0;
        for (int i = 0; i < 10; i++)
            m_array[i] = 0;
    }

    bool push(int value)
    {
        if (m_next == 10)
            return false;
        m_array[m_next++] = value;
        return true;
    }

    int pop()
    {
        assert(m_next > 0);
        return m_array[--m_next];
    }
    void print()
    {
        std::cout << "( ";
        for (int i = 0; i < m_next; i++)
            std::cout << m_array[i] << " ";
        std::cout << ")\n";
    }

};



int main()
{
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}







