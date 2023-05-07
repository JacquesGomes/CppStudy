Jacques Gomes Pinheiro Junior | Matrícula: 20220050099

Resposta 'b':

A recursão em cauda é um tipo especial de recursão em que a última instrução da função recursiva é uma chamada recursiva, ou seja, a chamada é a última operação executada na função. Isso significa que, em vez de haver uma pilha de chamadas recursivas pendentes, cada chamada recursiva usa a mesma entrada da pilha da chamada anterior.

Resposta 'c':

No caso da função tribonacci(), a chamada recursiva não é a última instrução da função. Depois de fazer as três chamadas recursivas, os valores são somados e retornados. Isso significa que, antes que o valor final seja retornado, a função precisa manter uma pilha de chamadas recursivas pendentes para que possa calcular a soma.Portanto, a função tribonacci() não é uma função de recursão em cauda.

Resposta 'd':

O stack overflow é um erro que ocorre quando a pilha de chamadas de função, também conhecida como "stack", atinge o seu limite máximo de armazenamento. Isso acontece quando a recursão é feita de maneira excessiva e sem controle, levando ao preenchimento da pilha com um grande número de chamadas de função pendentes que ainda não foram concluídas.

Quando a pilha atinge o seu limite máximo, o sistema operacional não pode mais alocar novos frames e ocorre o erro de stack overflow.