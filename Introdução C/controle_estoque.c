#include &lt;stdio.h&gt; // Biblioteca adicionada (Entrada e Saída de Dados)
// Função principal onde o programa começa a execução
int main() {
//Variáveis Locais
char nProduto[50]; //Nome do Produto
float pProduto; //Preço o Produto
int qProduto; //Quantidade do Produto

//Entrada de Dados
printf (&quot;Digite o Nome do Produto: &quot;);
scanf(&quot;%s&quot;, nProduto); //Leitura do Nome do Produto

printf(&quot;Digite o Preço do Produto: &quot;);
scanf(&quot;%f&quot;, &amp;pProduto); //Leitura do Preço do Produto

printf(&quot;Digite a Quantidade de Produto: &quot;);
scanf(&quot;%d&quot;, &amp;qProduto); //Leitura da Quantidade de Produto

//Exibição de Dados
printf(&quot;\nProduto: %s\n&quot;, nProduto);
printf(&quot;Preço: R$ %.2f\n&quot;, pProduto);
printf(&quot;Quantidade: %d\n&quot;, qProduto);
return 0;
}