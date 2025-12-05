#   exemplo de lista de exercicios em python
#   utilizando os algoritmos de ordenação
#   mostrados nos códigos anteriores
import time
import random
import string
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr

def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    mid = len(arr) // 2
    left = merge_sort(arr[:mid])
    right = merge_sort(arr[mid:])
    return merge(left, right)

def merge(left, right):
    result = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    result.extend(left[i:])
    result.extend(right[j:])
    return result

def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    return quick_sort(left) + middle + quick_sort(right)

def benchmark(algorithm, arr, name):
    start = time.time()
    algorithm(arr.copy())
    end = time.time()
    print(f"{name}: {end - start:.4f}s")

# Teste com diferentes tamanhos
sizes = [1000, 100000, 1000000]
algorithms = [("Bubble Sort", bubble_sort), ("Insertion Sort", insertion_sort), 
              ("Merge Sort", merge_sort), ("Quick Sort", quick_sort)]

for size in sizes:
    print(f"\n--- Array com {size} elementos ---")
    arr = [random.randint(0, 10000) for _ in range(size)]
    
    for name, algo in algorithms:
        if size <= 100000 or name in ["Merge Sort", "Quick Sort"]:
            benchmark(algo, arr, name)

print(f"\n--- Array de Caracteres (10000 elementos) ---")
char_arr = [random.choice(string.ascii_letters) for _ in range(10000)]
for name, algo in algorithms:
    benchmark(algo, char_arr, name)