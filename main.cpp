//Кролик сидит на нулевой ступеньке большой лестницы. Он может прыгать на одну или более ступенек вверх,
// но не далее чем на k. Кролик хочет допрыгать до n-й ступеньки, но может сделать это большим количеством способов.
//
//Напишите рекурсивную функцию, которая принимает число n типа int и число k — максимальную длину прыжка,
// а возвращает количество способов, которым кролик может доскакать до n-й ступеньки.
// Если максимальная длина прыжка не задана — считать её равной трём.
#include <iostream>

int jump(int n,int k = 3)
{
    if (n == 0 || n == 1) return 1;
    if (n < 0) return 0;
    int var = 0;
    for(int i = k;i > 0; --i)
    {
        var += (jump(n - i,k));
    }
    return  var;
}

int main() {
    int n;
    std::cout << " Enter count of steps: " << std::endl;
    std::cin >> n;
    int k = 0;
    std::cout << " Enter the value of the maximum jump length or " << std::endl;
    std::cout << " Enter: -1 ,if you want to keep the default maximum length " << std::endl;
    std::cin >> k;

    if (k >= 0) std::cout << jump(n,k) << std::endl;
    else std::cout << jump(n) << std::endl;

    return 0;
}