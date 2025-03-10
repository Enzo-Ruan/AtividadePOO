// Sobre algumas estruturas de dados, responda:

// a) Qual a diferença entre as estruturas pilha e fila?
// R: Pilha: É usada quando você precisa de acesso ao último item inserido primeiro, como em:Chamadas de funções (pilha de execução).Armazenamento temporário de dados.Algoritmos de retrocesso (backtracking).
// Fila: É usada quando você precisa de acesso ao primeiro item inserido, como em: Processamento de tarefas em ordem (exemplo: impressão de documentos).Filas de mensagens.Sistemas de gerenciamento de processos.

// b) Quais as vantagens da fila? Quais suas desvantagens?
// R: A principal vantagem da fila é que ela garante que os elementos sejam processados na ordem em que foram inseridos, ou seja, o primeiro a entrar é o primeiro a sair. 
// Na fila, você só pode acessar o primeiro elemento (o que está na frente). Não há acesso direto aos outros elementos da fila sem primeiro remover os elementos anteriores. Isso pode ser limitante em algumas situações onde você precisa acessar um elemento em uma posição arbitrária.

// c) Quais as vantagens da pilha? Quais suas desvantagens?
// R: A principal vantagem de uma pilha é o acesso rápido ao último elemento inserido, que é o primeiro a ser removido (Last In, First Out – LIFO). Isso é muito útil em cenários onde você precisa processar dados na ordem inversa em que foram inseridos, como em backtracking (retrocesso), onde você precisa voltar ao estado anterior rapidamente.
// Somente o último elemento inserido pode ser acessado. Não é possível acessar diretamente elementos em posições intermediárias, o que pode ser uma limitação se for necessário acessar ou manipular dados de forma não sequencial.

// d) Quais as suas aplicações?
// R: As pilhas (Stacks) têm diversas aplicações importantes como: Backtracking - A pilha é usada para armazenar estados intermediários e possibilitar a volta atrás quando um caminho errado for seguido. Esse tipo de abordagem é útil em problemas como resolver quebra-cabeças, labirintos ou o problema das n-rainhas.
// As filas têm várias aplicações importantes em diferentes contextos como: Filas de Tarefas (Task Scheduling) -  Em ambientes de computação distribuída ou servidores de aplicações, as filas de tarefas são usadas para distribuir trabalho entre vários trabalhadores (threads ou processos). Cada novo trabalho ou tarefa é colocado no final da fila e processado pelo próximo trabalhador disponível.

// e) Qual a diferença deles para a lista?
// R: A diferença fundamental entre pilhas, filas e listas está no modo de acesso e no controle de inserção e remoção de elementos. Uma lista é uma estrutura de dados mais flexível que permite acesso e manipulação em qualquer ponto da sequência. Você pode acessar qualquer elemento da lista diretamente, seja pela posição (índice) ou através de iteração. As listas permitem inserções e remoções em qualquer lugar da estrutura.