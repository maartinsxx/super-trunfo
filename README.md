Desafio Nível Novato - Cartas do Super Trunfo em C
Este projeto é um desafio de programação em linguagem C, proposto pela faculdade, com o objetivo de simular o cadastro de cartas do jogo **Super Trunfo**, utilizando dados de cidades fictícias ou reais.

// 💡 Sobre o Projeto

O programa permite que o usuário **cadastre duas cartas** de cidades com as seguintes informações:

- Estado: Letra de A a H
- Código da Carta: Exemplo A01, B02, etc.
- Nome da Cidade
- População
- Área (em km²)
- PIB (Produto Interno Bruto)
- Número de Pontos Turísticos

Após o cadastro, os dados são exibidos na tela de forma organizada, simulando a estrutura de cartas do Super Trunfo.

---

// 🛠️ Tecnologias utilizadas

- Linguagem C
- Compilador GCC
- Terminal (entrada e saída padrão)

## Exemplo de saida:
![image](https://github.com/user-attachments/assets/9d85706d-9c35-4d74-9385-21738f105f04)
---

Desafio Nível Aventureiro - Densidade Populacional e PIB per Capita
Na segunda etapa do projeto, foram adicionadas novas funcionalidades ao programa. Agora, além de cadastrar e exibir os dados básicos das cidades, o sistema também realiza cálculos matemáticos para fornecer 

// 💡 Sobre: 

informações adicionais e relevantes para o jogo:

- Densidade Populacional: calculada dividindo a população pela área total da cidade.
- PIB per Capita: calculado dividindo o PIB total da cidade pelo número de habitantes.
- Esses dois novos atributos são calculados automaticamente após o cadastro e exibidos na tela com duas casas decimais, permitindo uma comparação mais aprofundada entre as cidades.
- Essa fase reforça o uso de variáveis do tipo float, operadores matemáticos, boas práticas de organização do código e clareza na saída dos dados.

// 🛠️ Tecnologias Utilizadas

- Linguagem C
- Compilador GCC
- Terminal (entrada e saída padrão)

// ✅ Funcionalidades Implementadas

- Leitura de dados com scanf
- Exibição formatada com printf
- Uso de variáveis char, int e float
- Operações matemáticas simples
- Cálculo de densidade populacional e PIB per capita
- Formatação dos dados exibidos com clareza

// 📚 Aprendizados
Este projeto permitiu o aprofundamento em conceitos fundamentais da linguagem C, como:

- Declaração e uso de variáveis
- Entrada e saída de dados
- Operadores aritméticos
- Organização e legibilidade do código

Além disso, também reforçou a importância de pensar em usabilidade e apresentação de dados de forma clara e acessível para o usuário final.

## Exemplo de saida:
![image](https://github.com/user-attachments/assets/de81f550-1ca0-415a-ab1b-ec6167a854ac)
---

Desafio Nível Mestre - Batalha de Cartas no Super Trunfo
Chegamos ao nível avançado do projeto! Agora, o programa não só cadastra e calcula atributos das cartas, mas também implementa a lógica completa de batalha entre duas cartas do Super Trunfo.

// 💡 Sobre:

- A população é armazenada como `unsigned long int` para suportar números maiores.  
- Cálculo de Densidade Populacional e PIB per Capita mantidos.  
- Super Poder: cálculo que soma todos os atributos numéricos da carta, incluindo população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional — quanto menor a densidade, maior o poder.  
- Comparação detalhada atributo por atributo entre as duas cartas:  
  - Para densidade populacional, vence a carta com menor valor.  
  - Para todos os outros atributos, vence a carta com maior valor.  
- Exibição clara dos resultados da batalha, indicando qual carta venceu em cada atributo com valores 1 (Carta 1) ou 0 (Carta 2).

// 🛠️ Tecnologias Utilizadas

- Linguagem C  
- Compilador GCC  
- Terminal (entrada e saída padrão)  

 // ✅ Funcionalidades Implementadas

- Cadastro completo de duas cartas com dados detalhados.  
- Cálculo preciso da densidade populacional, PIB per capita e Super Poder com conversão correta de tipos.  
- Comparação atributo por atributo com regras específicas para densidade populacional.  
- Saída formatada e organizada mostrando vencedores por atributo.

## Exemplo de saida:
![image](https://github.com/user-attachments/assets/d7101da7-6d88-4b99-9bd0-bf01f3c23116)
---
