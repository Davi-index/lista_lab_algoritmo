import time
import random
import string

# Busca Sequencial
def busca_sequencial(lista, alvo):
    for i in range(len(lista)):
        if lista[i] == alvo:
            return i
    return -1

# Busca Binária
def busca_binaria(lista, alvo):
    esquerda, direita = 0, len(lista) - 1
    while esquerda <= direita:
        meio = (esquerda + direita) // 2
        if lista[meio] == alvo:
            return meio
        elif lista[meio] < alvo:
            esquerda = meio + 1
        else:
            direita = meio - 1
    return -1

# Função para comparar tempos
def comparar_buscas(tamanho, alvo):
    lista = sorted([random.randint(1, tamanho * 10) for _ in range(tamanho)])
    
    # Busca Sequencial
    inicio = time.time()
    busca_sequencial(lista, alvo)
    tempo_seq = time.time() - inicio
    
    # Busca Binária
    inicio = time.time()
    busca_binaria(lista, alvo)
    tempo_bin = time.time() - inicio
    
    return tempo_seq, tempo_bin

# Testes com diferentes tamanhos
print("=============================================")
print("COMPARAÇÃO: BUSCA SEQUENCIAL VS BUSCA BINÁRIA")
print("=============================================")

tamanhos = [1000, 100000, 1000000]
for tamanho in tamanhos:
    alvo = random.randint(1, tamanho * 10)
    tempo_seq, tempo_bin = comparar_buscas(tamanho, alvo)
    
    print(f"\nArray com {tamanho} elementos:")
    print(f"  Sequencial: {tempo_seq:.6f}s")
    print(f"  Binária:    {tempo_bin:.6f}s")
    print(f"  Binária é {tempo_seq/tempo_bin:.2f}x mais rápida")

# d) Buscando palavra em texto
print("===================================")
print("=== BUSCANDO PALAVRA EM TEXTO ====")
print("===================================")

texto = " ".join(["".join(random.choices(string.ascii_lowercase, k=5)) 
                  for _ in range(10000)])
palavras = texto.split()
palavra_alvo = palavras[5000]

# Busca Sequencial em texto
inicio = time.time()
busca_sequencial(palavras, palavra_alvo)
tempo_seq_texto = time.time() - inicio

# Busca Binária em texto (precisa de uma lista ordenada)
palavras_ordenadas = sorted(palavras)
palavra_alvo_ordenada = palavras_ordenadas[5000]

inicio = time.time()
busca_binaria(palavras_ordenadas, palavra_alvo_ordenada)
tempo_bin_texto = time.time() - inicio

print(f"\nTexto com {len(palavras)} palavras:")
print(f"  Sequencial: {tempo_seq_texto:.6f}s")
print(f"  Binária:    {tempo_bin_texto:.6f}s")
print(f"  Binária é {tempo_seq_texto/tempo_bin_texto:.2f}x mais rápida")