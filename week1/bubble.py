## Optimised and tested, works

def bubble(array):
    print(array)
    for i in range(1, len(array)):
        for j in range(i):
            if array[i] > array[j]:
                array[i], array[j] = array[j], array[i]

    print(array)

array = [5, 16, 14, 10, 8, 7, 8, 3, 2, 4, 1]
bubble(array)