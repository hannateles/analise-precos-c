📊 Programa em C: Variação de Preço de Produtos

Este é um programa em linguagem C que calcula a variação percentual de preço de três produtos com base nos preços anteriores e atuais, e classifica a situação como AUMENTO, QUEDA ou ESTÁVEL.

🛠️ Funcionalidades

Entrada do nome, preço anterior e preço atual de 3 produtos

Cálculo da variação percentual entre os preços

Classificação da situação:

🔺 AUMENTO: preço atual maior que o anterior

🔻 QUEDA: preço atual menor que o anterior

⚖️ ESTÁVEL: preços iguais

Saída formatada com percentuais e símbolos monetários (R$)

💻 Exemplo de Execução
Programa para calcular a variação de preço de produtos

<img width="816" height="825" alt="image" src="https://github.com/user-attachments/assets/a8917b9f-a3de-401c-8758-b4e15f2a03fa" />

🧠 Conceitos Aplicados

Tipos de dados: char, float

Entrada e saída de dados com scanf e printf

Cálculo de porcentagem:

variacao = ((precoAtual - precoAnterior) / precoAnterior) * 100


Estruturas condicionais (if, else) para classificar a situação do preço

Formatação de saída com casas decimais e símbolos

📁 Estrutura do Projeto
📂 variacao-precos
└── main.c

🧪 Como Compilar e Executar
Usando GCC:
gcc main.c -o variacao
./variacao

📄 Licença

Este projeto é livre para uso educacional e pessoal.
