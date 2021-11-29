# E. Красота превыше всего
https://contest.yandex.ru/contest/27794/problems/E/

Ограничение времени

2 секунды

Ограничение памяти

64Mb

#### Ввод

стандартный ввод или input.txt

#### Вывод

стандартный вывод или output.txt

В парке города Питсбурга есть чудесная аллея, состоящая из N посаженных в один ряд деревьев, каждое одного из K сортов. В связи с тем, что Питсбург принимает открытый чемпионат Байтландии по программированию, было решено построить огромную арену для проведения соревнований. Так, согласно этому плану вся аллея подлежала вырубке. Однако министерство деревьев и кустов воспротивилось этому решению, и потребовало оставить некоторые из деревьев в покое. Согласно новому плану строительства все деревья, которые не будут вырублены, должны образовывать один непрерывный отрезок, являющийся подотрезком исходного. Каждого из K видов деревьев требуется сохранить хотя бы по одному экземпляру. На вас возложена задача найти отрезок наименьшей длины, удовлетворяющий указанным ограничениям.

## Формат ввода

В первой строке входного файла находятся два числа N и K (1 ≤ N, K ≤ 250000). Во второй строке входного файла следуют N чисел (разделенных пробелами), i-ое число второй строки задает цвет i-ого слева дерева в аллее. Гарантируется, что присутствует хотя бы одно дерево каждого цвета

## Формат вывода

В выходной файл выведите два числа, координаты левого и правого концов отрезка минимальной длины, удовлетворяющего условию. Если оптимальных ответов несколько, выведите любой.

### Пример 1

#### Ввод
5 3\
1 2 1 3 2
#### Вывод
2 4

### Пример 2

#### Ввод
6 4\
2 4 2 3 3 1
#### Вывод
2 6