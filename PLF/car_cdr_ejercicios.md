# Realice los comandos necesarios para obtener los resultados establecidos. Emplea "car" y "cdr"

Comandos CLisp PLF 

 

(car (cdddr (cddr '(1 2 3 4 5 6 7 8 9 10)))) -> 6 

(car (cdddr (cddddr '(1 2 3 4 5 6 7 8 9 10)))) -> 8 

(car (cddddr (cddddr (cdr '(1 2 3 4 5 6 7 8 9 10))))) -> 10 

 B)  

1. (cdddar (cdddr '(1 2 (3 4) (a b c d)))) -> d 

2. (car (cddar (cdddr  '(1 2 (3 4) (a b c d))))) -> c 

3. (car (cdar (cddr  '(1 2 (3 4) (a b c d))))) -> 4    

4. (car  (cdr  '(1 2 (3 4) (a b c d)))) -> 2 

5. (caar (cdddr  '(1 2 (3 4) (a b c d)))) -> A 

 C)  