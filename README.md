# 🃏 Super Trunfo de Cidades - Desafio de Programação em C

Este repositório contém um programa em C que simula uma rodada do jogo Super Trunfo, utilizando dados de cidades. O projeto foi desenvolvido para aplicar conceitos fundamentais da linguagem C, como a manipulação de variáveis, entrada e saída de dados e lógica condicional.

## 📜 Sobre o Projeto

O objetivo deste projeto é permitir que o usuário cadastre duas "cartas", cada uma representando uma cidade com seus respectivos atributos. Após o cadastro, o programa calcula métricas adicionais, como densidade demográfica e PIB per capita, e realiza uma comparação direta entre todos os atributos das duas cidades, declarando um vencedor para cada item.

## ✨ Funcionalidades

O programa implementa as seguintes funcionalidades:

* **Cadastro de Cartas:** Permite que o usuário insira os dados de duas cidades, incluindo nome, população, área, PIB e número de pontos turísticos.
* **Cálculos Derivados:** O programa calcula automaticamente os seguintes atributos com base nos dados fornecidos:
    * **Densidade Demográfica:** População / Área.
    * **PIB per Capita:** (PIB * 1.000.000.000) / População.
    * **Super Poder:** Uma pontuação calculada que combina todos os outros atributos da carta.
* **Comparação Detalhada:** Compara as duas cartas em todos os sete atributos (População, Área, PIB, Pontos Turísticos, Densidade, PIB per Capita e Super Poder).
* **Exibição de Resultados:** Mostra de forma clara qual carta venceu em cada uma das comparações.

## 🛠️ Como Compilar e Executar

Para compilar e executar o projeto, você precisará de um compilador C, como o **GCC**. Siga os passos abaixo no seu terminal:

1.  **Clone o repositório (caso ainda não tenha):**
    ```bash
    git clone [URL_DO_SEU_REPOSITORIO]
    ```

2.  **Navegue até a pasta do projeto:**
    ```bash
    cd [NOME_DA_PASTA_DO_REPOSITORIO]
    ```

3.  **Compile o código-fonte:**
    ```bash
    gcc super_trunfo.c -o super_trunfo
    ```

4.  **Execute o programa:**
    ```bash
    ./super_trunfo
    ```
    O programa então solicitará que você insira os dados das duas cidades.

## 💻 Tecnologias Utilizadas

* **Linguagem:** C
* **Compilador:** GCC
* **Versionamento:** Git e GitHub

## 👤 Autor

* **Nome:** Maria Eloisa Ferreira de Souza
* **GitHub:** https://github.com/Mari-Elo
