2.1)git cherry-pick é um comando usado para selecionar um commit específico de uma branch e aplicar suas mudanças em outra branch. Assim, não é feita uma mesclagem de uma branch inteira com outra, somente a parte selecionada com o comando cherry-pick.

2.3) git reset é um comando que reverte o estado de um respositório git para um commmit anterior. Por exemplo, suponha que você tenha feita alguns commit em um repositório porém queira retornar para o estado do repositório para antes dos dois últimos commits, para isso, você usaria "git reset HEAD~2", onde HEAD é um ponteiro que aponta para o commit atualmente selecionado e ' ~' especifica o número de commmits anteriores que se deseja selecionar. Porém, o git reset pode ser utilizado especificando diretamente a hash do commit que deve ser utilizado como ponto de reset.

2.4) HEAD é um ponteiro que indica o commit atual de uma branch, poderia ser utilizado junto ao comando git reset junto a um outro operador para indicar outros commits a partir da HEAD, como por exemplo 'git reset HEAD~4', que contaria quatro commits anteriores ao atual e restauraria seu estado.

2.9) Um conflito ocorre quando ... 

Uma das maneiras de resolver um conflito no git é editar os arquivos que contém conflitos e decidir quais alterações manter e quais descartar. Após as mudanças que é possível commitar as alterações. Porém, o ideal é adotar um workflow que evite a ocorrência de conflitos.

2.10) 
