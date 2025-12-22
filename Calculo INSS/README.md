# 📊 Calculadora de INSS 2025

Este é um programa desenvolvido em **C** para realizar o cálculo do desconto do INSS (Previdência Social) com base nas tabelas e regras vigentes para o ano de **2025**.

O software é uma ferramenta de linha de comando (CLI) que atende tanto trabalhadores CLT (Plano Progressivo) quanto contribuintes individuais, autônomos e MEI.

---

## 🚀 Funcionalidades

* **Plano Progressivo (CLT):** Cálculo automático por faixas salariais para empregados domésticos e trabalhadores avulsos.
* **Planos para Autônomos:** Suporte para Plano Normal (20%), Simplificado (11%) e Baixa Renda/MEI (5%).
* **Cálculo de Salário Líquido:** Exibe o valor bruto, o desconto aplicado e o valor final a receber.
* **Interface Limpa:** Uso de comandos de limpeza de tela (`cls`) para melhor navegabilidade.
* **Sistema de Loop:** Permite realizar múltiplos cálculos sem precisar reiniciar o programa.

---

## 📋 Regras de Cálculo Aplicadas (2025)

O programa segue a lógica de alíquotas progressivas conforme a tabela abaixo:

| Faixa Salarial (R$) | Alíquota |
| :--- | :--- |
| Até 1.518,00 | 7,5% |
| De 1.518,01 até 2.793,88 | 9% |
| De 2.793,89 até 4.190,83 | 12% |
| De 4.190,84 até 8.157,41 | 14% |
| Acima do Teto (8.157,41) | Valor Fixo (R$ 951,77) |

---

## 🛠️ Tecnologias e Conceitos Utilizados

* **Linguagem C**
* **Manipulação de Strings:** Uso de `fgets` e `strlen` para tratar nomes com espaços.
* **Estruturas de Controle:** `do-while`, `if-else` e `switch-case`.
* **Funções:** Modularização para exibição de resultados e controle de saída.
* **Ponteiros:** Passagem de parâmetro por referência na função `sairWhile`.

---

## 💻 Como Executar

1.  Tenha um compilador de C instalado (GCC, Clang ou MinGW).
2.  Salve o código em um arquivo chamado `calculadora.c`.
3.  Abra o terminal e compile o arquivo:
    ```bash
    gcc calculadora.c -o calculadora
    ```
4.  Execute o programa:
    ```bash
    ./calculadora
    ```

---

## 📝 Exemplo de Uso

Ao iniciar o programa, basta seguir as instruções no terminal:
1. Digite seu nome.
2. Escolha o seu plano de contribuição.
3. Insira o valor do seu salário bruto.
4. O sistema retornará o valor exato do desconto e o salário líquido.