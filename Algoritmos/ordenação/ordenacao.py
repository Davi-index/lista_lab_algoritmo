# código baseado e com intuíto de aplicar e explicar os algoritmos de ordenação
# "Quick Sort":
def quicksort(lista, inicio=0, fim=None):
    if fim is None:
        fim = len(lista)-1
    if inicio < fim:
        p = partition(lista, inicio, fim)
        # recursivamente na sublista à esquerda (menores)
        quicksort(lista, inicio, p-1)
        # recursivamente na sublista à direita (maiores)
        quicksort(lista, p+1, fim)

def partition(lista, inicio, fim):
    pivot = lista[fim]
    i = inicio
    for j in range(inicio, fim):
        # j sempre avança, pois representa o elementa em análise
        # e delimita os elementos maiores que o pivô
        if lista[j] <= pivot:
            lista[j], lista[i] = lista[i], lista[j]
            # incrementa-se o limite dos elementos menores que o pivô
            i = i + 1
    lista[i], lista[fim] = lista[fim], lista[i]
    return i
# Finalização do "Quick Sort"

# "Merge Sort":
def mergesort(lista, inicio=0, fim=None):
    # se fim não for informado, usa o tamanho da lista inteira
    if fim is None:
        fim = len(lista)
    # se a sublista tem mais de um elemento, divide e conquista
    if (fim - inicio > 1):
        meio = (fim + inicio) // 2
        # ordena a metade esquerda
        mergesort(lista, inicio, meio)
        # ordena a metade direita
        mergesort(lista, meio, fim)
        # intercala as duas metades já ordenadas
        merge(lista, inicio, meio, fim)

def merge(lista, inicio, meio, fim):
    # copia os elementos da metade esquerda
    left = lista[inicio:meio]
    # copia os elementos da metade direita
    right = lista[meio:fim]
    # índices para percorrer left e right
    top_left, top_right = 0, 0
    # percorre a posição de destino na lista original
    for k in range(inicio, fim):
        # se left já terminou, pega do right
        if top_left >= len(left):
            lista[k] = right[top_right]
            top_right = top_right + 1
        # se right já terminou, pega do left
        elif top_right >= len(right):
            lista[k] = left[top_left]
            top_left = top_left + 1
        # se o próximo de left for menor, coloca ele
        elif left[top_left] < right[top_right]:
            lista[k] = left[top_left]
            top_left = top_left + 1
        # caso contrário, coloca o próximo de right
        else:
            lista[k] = right[top_right]
            top_right = top_right + 1

# "Insertion Sort":
def insertion_sort(lista):
    # Insertion Sort: constrói a parte ordenada à esquerda elemento a elemento.
    n = len(lista)                      # obtém o tamanho da lista
    for i in range(1, n):               # percorre a lista a partir do segundo elemento
        chave = lista[i]                # elemento que vamos inserir na parte ordenada
        j = i - 1                       # índice do último elemento da parte ordenada
        # enquanto houver elementos na parte ordenada e o elemento for maior que a chave
        while j >= 0 and lista[j] > chave:
            lista[j+1] = lista[j]      # desloca o elemento maior uma posição à direita
            j = j - 1                  # avança para o próximo elemento à esquerda
        lista[j+1] = chave             # insere a chave na posição correta

# "Selection Sort":
def selection_sort(lista):
    # pega o tamanho da lista
    n = len(lista)
    # percorre cada posição onde colocaremos o próximo menor elemento
    for j in range(n - 1):
        # assume que o menor elemento, por enquanto, está na posição j
        min_index = j
        # busca o menor elemento no subvetor [j, n-1]
        for i in range(j, n):
            # se encontrar um elemento menor, atualiza o índice do mínimo
            if lista[i] < lista[min_index]:
                min_index = i
        # se o menor encontrado não estiver já na posição j, faz a troca
        if lista[j] > lista[min_index]:
            aux = lista[j]
            lista[j] = lista[min_index]
            lista[min_index] = aux