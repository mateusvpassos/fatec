import random as rand

def main():
    weights = [round(rand.random(),1), round(rand.random(),1), round(rand.random(),1)]
    eta = 0.1
    generations, y, j = 0, 0, 0
    uk, deltaw, w = [1,1,1], [1,1,1], [1,1,1]
    q = [1,1,1,1]
    for generations in range(5):
        print('\n\n##GERACAO '+ str(generations+1))
        with open("inputAND.txt", 'r') as inputText:
            for line in inputText:
                pattern = line.split()
                q=pattern[3]
                pattern.pop(3)
                    
                print('PADRAO: ' + str(pattern))
                
                y = somatoria(pattern[:], weights[:], uk[:], y, j)
                fi = funcaoAtivadora(y)
                w = algoritmoAprendizagem(fi, q, eta, pattern[:], weights[:], deltaw[:], w[:])
                
                print('Q: ' + str(q) + '\nFi: '+ str(fi))
                print('Pesos: ' + str(w))
                weights = w
                y=0
                
def somatoria(pattern, weights, uk, y, j):
    for j in range(3): uk[j] = float(pattern[j])*float(weights[j])
    for j in range(3): y = y + uk[j]
    return round(y, 1)

def funcaoAtivadora(y):
    if (y>=0.0): return 1.0
    elif (y<0.0): return 0.0

def algoritmoAprendizagem(fi, q, eta, pattern, weights, deltaw, w):
    e = float(q) - float(fi)
    etae = float(eta) * e
    if(float(etae) == float(q)): return weights
    for j in range(3): deltaw[j] = float(etae) * float(pattern[j])      
    for j in range(3): w[j] = float(weights[j]) + float(deltaw[j])
    for j in range(3): w[j] = round(w[j], 1)
    return w

if __name__ == '__main__':
    main()