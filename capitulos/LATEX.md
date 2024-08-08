[![LiaScript](https://raw.githubusercontent.com/LiaScript/LiaScript/master/badges/course.svg)](https://liascript.github.io/course/?https://raw.githubusercontent.com/CTISM-Prof-Henry/research/main/capitulos/LATEX.md)

# LaTeX

Esta página descreve brevemente o histórico da linguagem LaTeX, a estrutura básica de um projeto, um tutorial básico 
da linguagem, e recursos adicionais.

## O que é?

LaTeX (pronunciado "latéc") é uma linguagem de marcação (não confundir com linguagem de programação!) usada para 
escrever textos técnicos e acadêmicos com alta qualidade gráfica. Ao contrário do Microsoft Word e Libreoffice Write, 
LaTeX **não é** um editor de texto, e sim uma linguagem. Podemos usar diversos editores em conjunto com o LaTeX, como o 
[MikTeX](https://miktex.org/) (um programa que deve ser baixado e instalado no computador), mas o mais popular 
atualmente é o [Overleaf](https://overleaf.com), um editor online. 

A principal diferença do LaTeX em relação ao Microsoft Word está na filosofia: enquanto o Word é do tipo "what you see 
is what you get", LaTeX é do tipo "what you see is what you mean". Em outras palavras: enquanto no Word configuramos a 
aparência do texto, no LaTeX **programamos** a aparência do texto com comandos do tipo `\textit{texto em itálico}`. 

## Histórico

<img alt="Donald Knuth" src="imagens/latex/donald_knuth.jpg" width="400px">

Donald Knuth

<img alt="Donald Knuth" src="imagens/latex/iron_cast_printer.jpg" width="400px">

Letras de ferro

<img alt="Donald Knuth" src="imagens/latex/leslie_lamport.jpg" width="400px">

Leslie Lamport

## Estrutura de um projeto

Você pode organizar seu projeto da maneira que quiser. Mas uma boa organização otimiza o fluxo de trabalho, e dá menos
dores de cabeça no futuro. A estrutura que eu particularmente uso, no geral, é esta:

```
* 📂 capítulos
  * 📄 introdução.tex
  * 📄 trabalhos_relacionados.tex
  * 📄 metodologia.tex
  * 📄 resultados.tex
  * 📄 conclusão.tex 
* 📂 imagens
  * 🖼️ laboratório.jpg
  * 🖼️ diagrama.pdf
* 📄 main.tex   
* 📒 referencias.bib
```

> [!NOTE]
> Existem outros dois tipos de arquivo, `.sty` e `.bst`, que configuram respectivamente o estilo de um documento e o 
> formato de citações.

### Tipos de arquivo 

* `.tex` Arquivo com a linguagem de marcação LaTeX. É onde escrevemos o texto propriamente, inserimos figuras, tabelas, 
  citações, etc
* `.bib` é um arquivo onde colocamos todas as citações bibliográficas do documento, para depois serem citadas nos 
  arquivos `.tex` 

## Aprendendo a escrever em LaTeX

A equipe do Overleaf fez um tutorial "Como aprender LaTeX em 30 minutos", disponível 
[neste link](https://www.overleaf.com/learn/latex/Learn_LaTeX_in_30_minutes).

## Dicas

**🖥️ Copie o BibTeX do Google Scholar:** O Google Scholar possui, para a maioria dos artigos e livros, a citação BibTeX 
pronta (e correta). Jogue o nome do documento no buscador e clique no botão <img src="imagens/latex/citar.png"> 
Depois, selecione a opção **BibTeX**, e copie-e-cole o código no arquivo `.bib` do seu projeto. 

## Exercícios

> [!NOTE]
> Você precisará usar os comandos `\usepackage` e/ou `\RequirePackage` para fazer alguns destes exercícios, pois nem 
> todos os recursos listados abaixo estão presentes por padrão no LaTeX.
> Consulte na Internet quais destes recursos precisam de importação de pacotes, e qual o nome dos pacotes a serem 
> importados.

Crie um novo documento no Overleaf. Para cada uma das linhas da tabela abaixo, faça o que se pede na coluna da esquerda.
Veja como é a saída esperada na coluna da direita.

| Enunciado                              | Exemplo de saída                                                           |
|:---------------------------------------|:---------------------------------------------------------------------------|
| Texto em itálico, negrito e sublinhado |                                                                            |
| Figura com legenda embaixo             | ![](imagens/latex/charmander_legenda_embaixo.png)                          |
| Figura com legenda em cima             | ![](imagens/latex/charmander_legenda_emcima.png)                           | 
| Subfiguras                             | ![](imagens/latex/subfiguras.png)                                          |
| Tabela com legenda em cima             | ![](imagens/latex/tabela_legenda_emcima.png)                               |
| Tabela com legenda embaixo             | ![](imagens/latex/tabela_legenda_embaixo.png)                              |
| Tabela com réguas                      | ![](imagens/latex/tabela_rulers.png)                                       |
| Tabela com réguas e cores              | ![](imagens/latex/tabela_rulers_colors.png)                                |
| Tabela com réguas, cores e multilinhas | ![](imagens/latex/tabela_rulers_colors_multirow.png)                       |
| Lista numerada                         | ![](imagens/latex/lista_numerada.png)                                      |
| Lista não-numerada                     | ![](imagens/latex/lista_nao_numerada.png)                                  |
| Três níveis de seções                  | ![](imagens/latex/secoes.png)                                              |
| Equações                               | ![](imagens/latex/equacao.png)                                             |
| Notas de rodapé                        | ![](imagens/latex/rodape_1.png)![rodape_2.png](imagens/latex/rodape_2.png) |
| URLs                                   | ![](imagens/latex/url.png)                                                 |
| Referências                            | ![](imagens/latex/citacao.png)                                             |


## Recursos Adicionais

* [Overleaf](https://www.overleaf.com)
  * [Documentação LaTeX](https://www.overleaf.com/learn)
* [Editor online de equações](https://editor.codecogs.com/)
* [História do LaTeX](https://www.youtube.com/watch?v=9eLjt5Lrocw)
* [Tame the BeaST: The B to X of BibTeX](https://linorg.usp.br/CTAN/info/bibtex/tamethebeast/ttb_en.pdf)