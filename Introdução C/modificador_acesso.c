#include &lt;stdio.h&gt; // Biblioteca adicionada (Entrada e Saida de Dados)
int pGlobal; //Preço Global (pode ser acessada pelo todo o sistema)

// Função principal onde o programa começa a execução
int main() {
//Variaveis Locais
char nProduto[50]; //Nome do Produto
int qProduto; //Quantidade do Produto
pGlobal = 25; //Definindo o PreçoGlobal

//Entrada de Dados
printf (&quot;Digite o Nome do Produto: &quot;);
scanf(&quot;%s&quot;, nProduto); //Leitura do Nome do Produto

printf(&quot;Digite a Quantidade de Produto: &quot;);
scanf(&quot;%d&quot;, &amp;qProduto); //Leitura da Quantidade de Produto

//Exibição de Dados
printf(&quot;\nProduto: %s\n&quot;, nProduto);
printf(&quot;Preço: R$ %d\n&quot;, pGlobal); //Exibindo o Preço Global
printf(&quot;Quantidade: %d\n&quot;, qProduto);
return 0;
}