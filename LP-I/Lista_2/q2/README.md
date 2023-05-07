Jacques Gomes Pinheiro Junior | Matrícula: 20220050099

2.1) 'git cherry-pick' é um comando usado para selecionar um commit específico de uma branch e aplicar suas mudanças em outra branch. Assim, não é feita uma mesclagem de uma branch inteira com outra, somente a parte selecionada com o comando cherry-pick. 

Por exemplo, suponha que exista uma branch de produção master e duas branches de desenvolvimento dev1 e dev2. Um bug crítico é encontrado em master e um commit de correção é feito nessa branch. Para corrigir o bug em dev1 e dev2 sem mesclar todas as alterações de master, o commit de correção pode ser "cherry-picked" para as branches de desenvolvimento relevantes usando o seguinte comando: git cherry-pick 'id do commit'. Onde 'id do commit' é o identificador do commit que contém a correção de bug. Esse comando aplica as alterações do commit especificado na branch atual.

2.3) git reset é um comando que reverte o estado de um respositório git para um commmit anterior. 

Por exemplo, suponha que você tenha feita alguns commit em um repositório porém queira retornar para o estado do repositório anterior aos dois últimos commits. Para isso, você usaria "git reset HEAD~2", onde HEAD é um ponteiro que aponta para o commit atualmente selecionado e ' ~' especifica o número de commmits anteriores que se deseja selecionar. Porém, o git reset pode ser utilizado especificando diretamente a hash do commit que deve ser utilizado como ponto de reset.

2.4) HEAD é um ponteiro que indica o commit atual de uma branch. O comando HEAD poderia ser utilizado junto ao comando git reset junto a um outro operador para indicar outros commits a partir da HEAD, como por exemplo 'git reset HEAD~4', que contaria quatro commits anteriores ao atual e restauraria seu estado.

2.9) Um conflito ocorre quando duas ou mais pessoas tentam fazer alterações no mesmo arquivo na mesma parte do código, ou quando duas ou mais branches têm alterações conflitantes em um arquivo. 

Uma das maneiras de resolver um conflito no git é editar os arquivos que contém conflitos e decidir quais alterações manter e quais descartar. Após as mudanças que é possível commitar as alterações. Porém, o ideal é adotar um workflow que evite a ocorrência de conflitos.

Suponha que dois colaboradores estejam trabalhando em um mesmo arquivo no Git e em um mesmo trecho do código. Digamos que o colaborador 1, que está trabalhando no branch "feature-1", adicione uma nova função no trecho em questão e faça o commit, enquanto o colaborador 2, que está trabalhando no branch "feature-2", também altere o mesmo trecho de código, modificando a lógica da função existente e faz o commit.

Nesse cenário, ao tentar fazer o merge dos dois branches, ocorrerá um conflito no arquivo em questão, pois ambas as alterações afetam a mesma parte do código. O Git não será capaz de decidir qual das alterações deve ser mantida e solicitará a intervenção do usuário para resolver o conflito.

Para resolver o conflito, o usuário deve abrir o arquivo em questão no editor de texto e buscar pela marcação de conflito que o Git adiciona ao arquivo, que indica o início e o fim do trecho conflitante. Dentro desse trecho, as alterações de ambos os colaboradores serão exibidas e o usuário deve decidir qual das alterações deve ser mantida e qual deve ser removida.

2.10) 

Um "pull request" é uma solicitação feita por um colaborador de um repositório como o GitHub, para que suas mudanças de código sejam incorporadas à versão principal do projeto. O colaborador cria um "pull request" com uma descrição detalhada das mudanças que fez, incluindo uma explicação do objetivo das mudanças e de quaisquer problemas que possam ter surgido. Os mantenedores do projeto, então, analisam o código, discutem as mudanças propostas e, se aprovado, incorporam as mudanças ao código principal. Um "pull request" é uma das principais ferramentas para a colaboração e gerenciamento de projetos em equipe em plataformas de hospedagem de código.

Um exemplo comum de uso do pull request é em projetos de desenvolvimento de software colaborativo com controle de versão, como o Git. Suponha que um desenvolvedor A está trabalhando em um recurso ou correção de bug em uma branch separada no repositório Git, enquanto outro desenvolvedor B está trabalhando em uma branch separada em uma parte diferente do projeto.

Quando o desenvolvedor A termina sua implementação e está pronto para incorporá-la ao projeto principal, ele cria um pull request para mesclar suas alterações em uma branch de destino, que geralmente é a branch principal. O pull request contém uma descrição clara e concisa do que foi alterado e por que, além de quaisquer outras informações relevantes.

O pull request é então revisado pelo desenvolvedor B ou outros membros da equipe, que podem fornecer feedback, fazer perguntas, aprovar ou rejeitar as mudanças. Se aprovado, as mudanças são incorporadas à branch de destino e o pull request é fechado. Se rejeitado, o desenvolvedor A pode fazer mais alterações e abrir outro pull request para revisão.