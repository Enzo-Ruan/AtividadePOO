// Acerca de alocação dinâmica de memória

// a) Qual o comportamento da função free?
// R: A função free em C é usada para liberar a memória previamente alocada dinamicamente com funções como malloc, calloc ou realloc. Quando você aloca memória dinamicamente, o sistema operacional reserva um bloco de memória para o seu programa, mas essa memória precisa ser explicitamente liberada quando não for mais necessária, para evitar vazamentos de memória (memory leaks).

// b) Após chamar free, o ponteiro pode ser utilizado?
// R: Após chamar a função free, o ponteiro que apontava para a memória liberada não deve ser mais utilizado, pois ele se torna um ponteiro inválido (também chamado de "ponteiro pendente" ou dangling pointer).

// c) O que causa vazamentos de memória?
// R: Vazamentos de memória (ou memory leaks) ocorrem quando um programa aloca memória dinamicamente (geralmente usando funções como malloc, calloc, ou realloc), mas não libera essa memória após usá-la, resultando em um bloco de memória que nunca é liberado de volta para o sistema.

// d) O que a instrução malloc retorna quando não consegue realizar a alocação?
// R: Quando a alocação de memória falha, malloc retorna o ponteiro NULL, indicando que a memória não foi alocada.

// e) Explique a instrução calloc.
// R: A função calloc em C é usada para alocar memória dinamicamente, mas com uma diferença importante em relação à função malloc. Além de alocar o número de bytes necessários, a calloc também inicializa a memória alocada com zero.

// f) Qual a diferença entre as instruções malloc e calloc?
// R: malloc: Aloca memória sem inicializar (valores aleatórios). calloc: Aloca e inicializa a memória com zero.