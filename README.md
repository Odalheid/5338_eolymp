# 5338_eolymp - Полный граф - 2
Обсуждая личную жизнь всевозможных злодеев, мы обделили своим вниманием графа Дуку. Так вот, граф Дуку на досуге любит складывать оригами. Он давно систематизировал свои познания в этой области следующим образом: всего граф знает n фигурок, причем для некоторых из них он знает, как получать из одной другую. Для обучения начинающих ситхов Дуку разработал специальную таблицу. В ячейке [i, j] таблицы стоит "1", если граф может получить из фигурки i фигурку j одним сгибом. Иначе там стоит "0". Изначально в руках у графа Дуку чистый лист, то есть фигурка номер x по его системе, сложить же он желает журавлика – фигурку номер y.

Найдите, за сколько операций граф достигнет желаемого.

Входные данные
В первой строке находится число n (1 ≤ n ≤ 1000). В следующих n строках задана таблица Дуку. В (n + 1) - ой строке стоят числа x и y.

Выходные данные
Выведите минимальное количество операций, которые придется осуществить. Если же коварным планам Графа не суждено осуществиться, выведите "-1".
