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

1. (car(cdar (cddar (cdr'((a b c)(r(t x)(z w))))))) -> w 

2. (caar (cddar (cdr'((a b c)(r(t x)(z w)))))) -> Z 

3. (caar (cdar (cdr'((a b c)(r(t x)(z w)))))) -> T 

4. (caar (cdr'((a b c)(r(t x)(z w))))) -> R 

5. (car(cdar (cdar (cdr'((a b c)(r(t x)(z w))))))) -> X 

6. (caar '((a b c)(r(t x)(z w)))) -> A 

 

D)  

1.  (caaaar '((((a b) (c d) (f y))))) -> a  

2. (cadr (caaar '((((a b) (c d) (f y)))))) -> b 

3. (car (cadaar '((((a b) (c d) (f y)))))) -> c 

4. (cadr (cadaar '((((a b) (c d) (f y)))))) -> d 

5. (car (caddar (car '((((a b) (c d) (f y))))))) -> f 

6. (cadr (caddar (car '((((a b) (c d) (f y))))))) ->y 

 

 

 