// Acerca de Manipulação de Arquivos.

// a) Explique os diferentes modos de abertura de arquivos.

// R: r (read) – Leitura: Abre o arquivo para leitura.Se o arquivo não existir, um erro será gerado (FileNotFoundError). O arquivo é aberto em modo somente leitura.
// w (write) – Escrita: Abre o arquivo para escrita.Se o arquivo não existir, ele será criado. Se o arquivo já existir, ele será sobrescrito (toda a informação anterior será apagada).
// a (append) – Acrescentar: Abre o arquivo para acrescentar dados ao final do arquivo.Se o arquivo não existir, ele será criado. Se o arquivo já existir, os dados novos serão adicionados ao final do arquivo, sem sobrescrever o conteúdo existente.
// x (exclusive creation) – Criação Exclusiva: Abre o arquivo para criação exclusiva.O arquivo será criado. Se o arquivo já existir, um erro (FileExistsError) será gerado.
// b (binary) – Binário: Indica que o arquivo será aberto em modo binário.Utilizado quando você está lidando com arquivos que não são de texto, como imagens, vídeos ou arquivos executáveis. Pode ser combinado com outros modos, como rb ou wb.
// t (text) – Texto: Indica que o arquivo será aberto em modo texto.Esse é o modo padrão, utilizado para arquivos de texto. Ele pode ser omitido, pois o modo de texto é o padrão se você não especificar outro tipo.
// r+ (read and write) – Leitura e Escrita:  Abre o arquivo para leitura e escrita.O arquivo deve já existir. Se não existir, um erro será gerado. Permite modificar o conteúdo do arquivo ou ler dados do arquivo enquanto escreve no mesmo.
// w+ (write and read) – Escrita e Leitura: Abre o arquivo para leitura e escrita.Se o arquivo não existir, ele será criado. Se o arquivo já existir, ele será sobrescrito. Permite tanto ler quanto escrever no arquivo.
// a+ (append and read) – Acrescentar e Ler: Abre o arquivo para acrescentar dados e ler.Se o arquivo não existir, ele será criado. Se o arquivo já existir, os novos dados serão adicionados ao final do arquivo, e é possível ler o conteúdo também.

// b) Explique o funcionamento das funções fgets, fprintf, fread, fwrite.

// R: fgets: é usada para ler uma linha de texto de um arquivo ou de entrada padrão (como o teclado). Ela lê até o número máximo de caracteres especificado ou até encontrar um caractere de nova linha (\n), ou o fim de arquivo (EOF).
// fprintf: é usada para escrever dados em um arquivo, de forma semelhante à função printf, mas direcionando a saída para um arquivo, em vez de para a tela.
// fread:  é usada para ler dados binários de um arquivo. Ela lê um número específico de blocos de dados (geralmente usados para ler estruturas ou arrays de dados binários) e os armazena em um buffer.
// fwrite: é usada para escrever dados binários em um arquivo. Ela escreve um número específico de blocos de dados em formato binário.