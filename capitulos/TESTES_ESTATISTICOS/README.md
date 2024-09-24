# Testes estatísticos

## O que são e para que servem?

São uma maneira de verificar se os resultados de um experimento possuem diferença significativa entre eles ou não.

## Testes paramétricos e não-paramétricos

Existem diversos testes estatísticos, que verificam diversas coisas (não ajudou muito né?!)

Mas eles podem ser caracterizados em dois grandes grupos: **paramétricos** e **não-paramétricos**.

### Testes paramétricos

Os testes paramétricos assumem **normalidade** na distribuição dos dados a serem analisados. Em outras palavras, um 
teste paramétrico assume que os dados estão distribuídos de acordo com uma função normal:

<img alt="uma distribuição normal" src="../imagens/testes_estatisticos/normal_distribution.svg" width="300px">

### Testes não-paramétricos

Os testes não-paramétricos, por sua vez, não assumem nenhuma distribuição sobre os dados a serem analisados. Os testes 
não-paramétricos são menos fortes que os testes paramétricos, mas são mais genéricos.

## Comparações de grupo e comparações par-a-par

Independente de qual tipo de teste será realizado, existem duas categorias de testes realizados: **em grupo** e 
**par-a-par**.

Caso existam mais de dois itens a serem comparados (algoritmos, animais, pessoas, etc), aplica-se primeiro um teste em 
grupo para ver se existe uma diferença estatística significativa entre os membros do grupo. Caso a hipótese nula seja 
rejeitada (ou, em outras palavras, caso **exista** diferença estatística significativa entre os membros do grupo),
aplica-se um teste subsequente, chamando post-hoc, para comparar a diferença estatística par-a-par entre os membros do 
grupo.

## _p-value_

O _p-value_ é a probabilidade que o conjunto de resultados que você coletou ocorreram de forma aleatória, **confirmando**
a hipótese nula do teste aplicado, para o intervalo de confiança selecionado. O intervalo de confiança aceito por 
padrão na literatura científica geralmente é 0.05. Em outras palavras, em 95% do tempo você **não encontrará** resultados
que ocorreram de forma aleatória (o que é uma boa estatística!). Quanto melhor for o intervalo de confiança (valores 
menores, e.g. 0.01, 0.001), mais segurança é dada às conclusões tiradas sobre o resultado dos testes estatísticos. 

## Resumo das categorias de testes

|                      |   Paramétrico   |                 Não-paramétrico                  |
|:---------------------|:---------------:|:------------------------------------------------:|
| grupo                |      ANOVA      | Friedman, Friedman com rankings alinhados, Quade |
| par-a-par (post-hoc) | Bonferroni-Dunn |     Nemenyi, Holm, Finner, Hochberg, Shaffer     |

## Exercícios

Acesse a URL https://ctism-prof-henry.github.io/research/statistical_tests e simule a corrida dos três animais, para
todos os percursos disponíveis. Anote os tempos de corrida de cada animal, para cada percurso. Depois, utilizando o 
site [STAC Web Platform](https://tec.citius.usc.es/stac/), responda as seguintes perguntas:

1. Existe diferença estatística significativa entre os tempos de prova dos animais?
2. Qual animal é o mais rápido, em média?
3. Quais animais são estaticamente semelhantes em seus tempos de prova?
4. Qual a probabilidade de que os resultados do grupo foram gerados de maneira aleatória?

## Bibliografia

* [STAC Web Platform](https://tec.citius.usc.es/stac/)
* [Statistical Comparisons of Classifiers over Multiple Data Sets](https://www.jmlr.org/papers/volume7/demsar06a/demsar06a.pdf)
* [Understanding p-values](https://www.scribbr.com/statistics/p-value/)