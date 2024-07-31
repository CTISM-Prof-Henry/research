[![LiaScript](https://raw.githubusercontent.com/LiaScript/LiaScript/master/badges/course.svg)](https://liascript.github.io/course/?https://raw.githubusercontent.com/CTISM-Prof-Henry/research/main/capitulos/PUBLICANDO.md)

# Publicando sua pesquisa
 

## Estrutura de um artigo

A estrutura básica de um artigo pode ser descrita da seguinte forma: 

<img alt="uma folha de uma artigo descrevendo sua estrutura básica" src="imagens/artigo.svg" width="25%">

### Título

O título deve comunicar, de maneira mais breve possível, a ideia geral do artigo. Geralmente é limitado a no máximo
3 linhas.

### Resumo

O resumo é uma versão expandida do título. Contém geralmente entre 150 e 250 palavras, e comunica toda a ideia do 
artigo: o problema resolvido, a solução proposta, os resultados obtidos, e uma brevíssima discussão. 

Não devemos incluir citações - por exemplo, (CAGNINI, 2018) - nem siglas (CTISM) no resumo.  

### Palavras-chave

Geralmente limitadas de 3 a 5, são as chaves que serão inseridas em motores de busca (Scopus, IEEE Xplore, Science 
Direct, etc) para indexar o artigo. 

### Introdução

A introdução é uma versão expandida do resumo. Não existe limite de palavras para esta seção. É possível introduzir 
siglas e fazer citações. Porém, deve-se evitar referenciar figuras, tabelas, fórmulas, etc nesta seção.

O último parágrafo da introdução é reservado para um índice do resto do artigo:

> O resto deste artigo é organizado da seguinte forma. A Seção 2 traz os trabalhos relacionados. A Seção 3 introduz a
> metodologia adotada para resolver o problema. [...]

### Trabalhos relacionados

Nesta seção, descreve-se o levantamento da literatura feito anteriormente ao início do trabalho. Caso o artigo esteja
propondo um novo método que será comparado ao que existia anteriormente, é possível introduzir brevemente os 
competidores, deixando para fazer uma descrição detalhada na seção de [Metodologia](#metodologia). 

O objetivo desta seção é mostrar que os autores fizeram um trabalho de busca antes de escrever num novo artigo, 
identificando os pontos fortes e fracos do que já está disponível na literatura. 

### Metodologia
### Resultados e discussão
### Conclusão
### Agradecimentos

> [!NOTE]
> Esta seção é opcional.

Geralmente são agradecidos os órgãos de fomento que financiaram esta pesquisa (CAPES, CNPq, etc), e pessoas que 
colaboraram na elaboração do artigo, mas não tiveram um envolvimento grande o suficiente para serem creditadas como 
autores (por exemplo, alguém que revisou a ortografia voluntariamente).

### Referências


### Anexos

> [!NOTE]
> Esta seção é opcional.

Nos anexos colocamos todos os itens que não couberam no artigo, seja por limitação de páginas, ou limitação finalidade:
por exemplo, tabelas com resultados intermediários de experimentos.

Hoje em dia é mais incomum anexar estes metadados, sendo mais prático colocar um link no artigo como uma nota de rodapé
indicando onde na internet aquele anexo está disponível:

> Disponibilizamos o código-fonte[^1] do nosso algoritmo, bem como o dataset[^2] usado.
> 
> [^1]: Disponível em https://github.com/CTISM-Prof-Henry/research. 
> [^2]: Disponível em https://zenodo.org/records/7139621.

## Dicas gerais

**📏 Seja conciso:** comunique suas ideias da maneira mais breve possível, sempre. Um leitor atento consegue sempre ver se
o autor domina o assunto ou não! Além do mais, se a introdução de um artigo for fraca, mas o método for forte, um leitor
pode desconsiderar o artigo como um todo simplesmente porque não há consistência entre as seções.

**😇 Seja honesto:** Usou ChatGPT para escrever o texto? Deixe isto claro! Algumas revistas **exigem** que os autores digam
se usaram IAs para auxiliar na escrita do texto. Leitores atentos, novamente, conseguem dizer se um texto foi gerado por
uma IA; não deixar isto claro pode lhe prejudicar durante o processo de avaliação!

**🚾 Introduza as siglas antes de usá-las:** Ao escrever `O Colégio Técnico Industrial de Santa Maria (CTISM)`,
isso nos possibilita referenciá-lo apenas por `CTISM` no futuro.

**📎 Cuidado onde vai disponibilizar anexos:** prefira plataformas que geram _permalinks_ para recursos, e não exigem 
autorização para visualizar arquivos. Por exemplo, o Google Drive é um péssimo lugar para armazenar anexos: dependendo
de como as permissões foram configuradas, é preciso autorizar cada pessoa que quiser ver o arquivo! Prefira o 
[GitHub](https://github.com) (código-fonte), [Zenodo](https://zenodo.org/) (tabelas e bancos de dados), 
[HuggingFace](https://huggingface.co) (modelos de deep learning), dentre outros.

## Recursos Adicionais

* [Guia da Elsevier para publicar artigos](https://www.elsevier.com/researcher/author/submit-your-paper) 