import random as rand
import math as math

def main():
    w13, w23, w14, w24, w35, w45 = 0.5, 0.4, 0.9, 1.0, -1.2, 1.1
    tet3, tet4, tet5 = 0.8, -0.1, 0.3
    bias = -1.0
    y3, y4, y5 = 0, 0, 0
    g3, g4, g4 = 0, 0, 0
    alfa = 0.1
    generations = 0
    exibe(w13, w23, w14, w24, w35, w45, tet3, tet4, tet5)
    
    for generations in range(1000):
        with open("inputANDA.txt", 'r') as inputText:
            for line in inputText:
                pattern = line.split()
                q=pattern[2]
                pattern.pop(2)
                
                y3, y4, y5 = somatoria(pattern[:], w13, w23, w14, w24, w35, w45, tet3, tet4, tet5, bias)
                g5 = funcaoAtivadora(y5, q)
                deltaw35, deltaw45, deltaeta5 = algoritmoAprendizagem(g5, alfa, y3, y4, bias)
                g3 = errCamadaOculta(y3, g5, w35)
                g4 = errCamadaOculta(y4, g5, w45)
                deltaw13, deltaw23, deltaeta3 = algoritmoAprendizagem(g3, alfa, pattern[0], pattern[1], bias)
                deltaw14, deltaw24, deltaeta4 = algoritmoAprendizagem(g4, alfa, pattern[0], pattern[1], bias)
                
                w35, w45, tet5 = ajusta(w35, w45, tet5, deltaw35, deltaw45, deltaeta5)
                w13, w23, tet3 = ajusta(w13, w23, tet3, deltaw13, deltaw23, deltaeta3)
                w14, w24, tet4 = ajusta(w14, w24, tet4, deltaw14, deltaw24, deltaeta4)
                
            if(generations == 999):
                print('RESULTADO ESPERADO: ' + str(q))
                print('RESULTADO OBTIDO: ' + str(y5))
                print('PADRAO: ' + str(pattern))
                exibe(round(w13, 4), round(w23, 4), round(w14, 4), round(w24, 4), round(w35, 4), round(w45, 4), round(tet3, 4), round(tet4, 4), round(tet5, 4))
                      
def somatoria(pattern, w13, w23, w14, w24, w35, w45, tet3, tet4, tet5, bias):
    y3 = float(pattern[0])*float(w13)+float(pattern[1])*float(w23)+float(bias)*float(tet3)
    y3 = 1.0/(1.0 + float((math.exp(-y3))))
    y4 = float(pattern[0])*float(w14)+float(pattern[1])*float(w24)+float(bias)*float(tet4)
    y4 = 1.0/(1.0 + float((math.exp(-y4))))
    y5 = float(y3)*float(w35)+float(y4)*float(w45)+float(bias)*float(tet5)
    y5 = 1.0/(1.0 + float((math.exp(-y5))))
    
    return round(y3, 5), round(y4, 5), round(y5, 5)

def funcaoAtivadora(y, q):
    e = float(q) - float(y)
    g = float(y) * (1.0 - float(y)) * float(e)
    
    return round(g, 5)

def algoritmoAprendizagem(g, alfa, y1, y2, bias):
    deltaw1 = float(alfa) * float(y1) * float(g)
    deltaw2 = float(alfa) * float(y2) * float(g)
    deltaeta = float(alfa) * float(bias) * float(g)
   
    return round(deltaw1, 5), round(deltaw2, 5), round(deltaeta, 5)
    
def errCamadaOculta(y, g5, w):
    g = float(y) * (1.0 - float(y)) * float(g5) * float(w)

    return round(g, 5)
    
def ajusta(w, w1, tet, deltaw, deltaw1, deltatet):
    w = w + deltaw
    w1 = w1 + deltaw1
    tet = tet + deltatet
    
    return w, w1, tet

def exibe(w13, w23, w14, w24, w35, w45, tet3, tet4, tet5):
    print('-----------------------')
    print('W35 - ' + str(w35))
    print('W45 - ' + str(w45))
    print('O5 - ' + str(tet5))
    print('W13 - ' + str(w13))
    print('W23 - ' + str(w23))
    print('O3 - ' + str(tet3))
    print('W14 - ' + str(w14))
    print('W24 - ' + str(w24))
    print('O4 - ' + str(tet4))
    print('-----------------------')
    
if __name__ == '__main__':
    main()