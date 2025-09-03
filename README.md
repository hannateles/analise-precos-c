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

Nome do produto: Arroz
Preço Anterior: R$25.45
Preço Atual   : R$25.45
Variação      : 0.00%
Situação      : ESTÁVEL
------------------------------------------------------------

Nome do produto: Feijão
Preço Anterior: R$7.99
Preço Atual   : R$7.90
Variação      : -1.13%
Situação      : QUEDA
------------------------------------------------------------

Nome do produto: Óleo
Preço Anterior: R$6.75
Preço Atual   : R$6.99
Variação      : 3.56%
Situação      : AUMENTO
------------------------------------------------------------

FIM DO PROGRAMA

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
