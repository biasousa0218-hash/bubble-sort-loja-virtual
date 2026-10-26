Ordenação de Preços em Loja Virtual (Bubble Sort em C)

Algoritmos e Pensamento Computacional 
Prof: Karla 
Beatriz Sousa Carvalho 


Descrição do Problema:
Sistema desenvolvido para organizar o preço de 10 produtos de uma loja virtual, facilitando a visualização dos itens do mais barato para o mais caro.

Funcionamento do Bubble Sort:
O Bubble Sort compara elementos adjacentes do array repetidamente, efetuando trocas quando necessário até que todos os dados estejam ordenados em ordem crescente.

Como Executar:
Copie o código do arquivo `main.c` e execute em um compilador de C online (como o OnlineGDB).
Sistema de Ordenação de Preços em Loja Virtual (Bubble Sort em 

Descrição do Problema Cotidiano:
Em uma loja virtual, os clientes buscam facilidade e agilidade para encontrar produtos que se ajustem ao seu orçamento. Muitas vezes, os dados cadastrados no sistema de inventário ou catálogo entram desorganizados. A ausência de uma ordenação adequada prejudica a experiência do usuário (UX) e dificulta a tomada de decisões rápidas de compra, tornando essencial o uso de algoritmos de ordenação eficientes no backend do sistema.


Objetivo da Aplicação:
Desenvolver uma aplicação funcional em linguagem C que utilize o algoritmo (Bubble Sort) para organizar automaticamente um vetor contendo 10 preços de produtos, classificando-os em ordem crescente (do menor para o maior). O programa permite ao usuário visualizar o estado exato dos dados tanto antes quanto após o processo de ordenação.


Explicação do Funcionamento do Bubble Sort:
O Bubble Sort (ou ordenação por bolha) é um algoritmo baseado em comparações sucessivas. Ele percorre o array diversas vezes, analisando pares de elementos adjacentes (vizinhos). Caso os elementos estejam na ordem incorreta, o algoritmo realiza a troca (swap) de posições utilizando uma variável auxiliar temporária. Esse ciclo se repete até que nenhuma troca seja necessária, garantindo que os elementos "mais pesados" flutuem para o final do array a cada passada.


Tecnologias e Ferramentas Utilizadas:
Linguagem (Padronização C99/C11)
Ambiente de Execução / Compilador: OnlineGDB / GCC
Controle de Versão: Git e GitHub (Versionamento via interface web)


Instruções para Compilar e Executar:
1. Acesse um compilador online compatível com a linguagem C (como o [OnlineGDB](https://www.onlinegdb.com/)).
2. Certifique-se de que a linguagem selecionada no canto superior direito esteja configurada como (C).
3. Copie todo o código-fonte presente no arquivo `main.c` deste repositório e cole no editor.
4. Clique no botão verde (Run) para compilar e executar a aplicação.
5. Acompanhe os resultados diretamente na aba do terminal interativo.



Exemplo de Entrada e Saída:
Entrada (Dados originais definidos no array):
  `150.50, 45.90, 899.99, 12.00, 320.00, 75.50, 1250.00, 230.40, 5.99, 450.00`
Saída esperada no terminal (Após o Bubble Sort em ordem crescente):
  Produto 1: R$ 5,99
  Produto 2: R$ 12,00
  Produto 3: R$ 45,90
  Produto 4: R$ 75,50
  Produto 5: R$ 150,50
  Produto 6: R$ 230,40
  Produto 7: R$ 320,00
  Produto 8: R$ 450,00
  Produto 9: R$ 899,99
  Produto 10: R$ 1.250,00

Considerações Finais:
O desenvolvimento deste projeto permitiu consolidar conceitos fundamentais da ciência da computação, como a manipulação estruturada de arrays, o uso correto de laços de repetição aninhados, estruturas condicionais e a aplicação prática de algoritmos clássicos de ordenação. Além disso, a prática com o Git e o GitHub reforçou a importância do versionamento de código no desenvolvimento de software.
