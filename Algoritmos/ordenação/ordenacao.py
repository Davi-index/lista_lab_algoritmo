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