[![LiaScript](https://raw.githubusercontent.com/LiaScript/LiaScript/master/badges/course.svg)](https://liascript.github.io/course/?https://raw.githubusercontent.com/CTISM-Prof-Henry/research/main/capitulos/PESQUISANDO.md)

# Pesquisando

Teve uma ideia? Pretende fazer pesquisa (artigo, TCC, mestrado, doutorado) com ela? O primeiro passo antes de colocar a
mão na massa é pesquisar na literatura!

## Procurando artigos

**⌚ Procure artigos recentes:** Dê preferência a artigos escritos nos últimos 5 anos! Com isso, garante-se que a 
literatura está atualizada.

**⌚ Veja que tipo de trabalho está sendo lido:** É uma tese? É uma dissertação? É um TCC? Dê preferência a artigos
de revistas e conferências respeitáveis. Nem tudo o que está indexado no Google Scholar é de alta qualidade!

**🧐 Dê preferência a fontes confiáveis:** Repositórios de artigos online como [Scopus](https://www.scopus.com), 
[ScienceDirect](https://www.sciencedirect.com/), [IEEE Xplore](https://ieeexplore.ieee.org), e 
[ACM Digital Library](https://dl.acm.org/) possuem artigos que foram revisados por pares e publicados em revistas ou 
conferências, e portanto os artigos lá são, _a princípio_, de qualidade superior a artigos que estão somente no 
[ArXiv](https://arxiv.org/). Exceções existem, como o artigo
[Attention is All you Need](https://arxiv.org/abs/1706.03762), que foi publicado antes no ArXiv e depois em uma 
conferência; mas não se baseie somente nisso!

**🧭 Adote uma metodologia de pesquisa:** Os repositórios de artigos permitem a configuração de strings de busca, de 
maneira a controlar quais artigos serão retornados quando submetida uma busca. Caso você vá usar mais de um repositório
online (e provavelmente você irá), tente deixar estas strings de busca o mais semelhante possível dentre os repositórios
disponíveis. Configura o exemplo abaixo, que usei na minha 
[tese de doutorado:](https://tede2.pucrs.br/tede2/bitstream/tede/10197/2/HENRY_EMANUEL_LEAL_CAGNINI_TES.pdf#page=58)

<details>
<summary><b>Scopus</b></summary>

```
TITLE-ABS-KEY("ensemble") AND (
    (
        TITLE-ABS-KEY("classification") OR
        TITLE-ABS-KEY("classifier") OR
        TITLE-ABS-KEY("classifiers")
    ) OR (
        TITLE-ABS-KEY("regression") OR
        TITLE-ABS-KEY("regressor") OR
        TITLE-ABS-KEY("regressors")
    )
) AND (
    TITLE-ABS-KEY("evolutionary") OR
    TITLE-ABS-KEY("evolution")
)
```

</details>

<details>
<summary><b>ACM Digital Library</b></summary>

```
"ensemble" AND (
    (
        "classification" OR
        "classifier" OR
        "classifiers"
    ) OR (
        "regression" OR
        "regressor" OR
        "regressors"
    )
) AND (
    "evolutionary" OR
    "evolution"
)
```

</details>

<details>
<summary><b>IEEE Xplore</b></summary>

```
"Abstract":ensemble AND (
    (
        "Abstract":classification OR
        "Abstract":classifier OR
        "Abstract":classifiers
    ) OR (
        "Abstract":regression OR
        "Abstract":regressor OR
        "Abstract":regressors
    )
) AND (
    "Abstract":evolutionary OR
    "Abstract":evolution
)
```

</details>

<details>
<summary><b>ScienceDirect</b></summary>

```
title-abstr-key("ensemble") AND (
    (
        title-abstr-key("classification") OR
        title-abstr-key("classifier") OR
        title-abstr-key("classifiers")
    ) OR (
        title-abstr-key("regression") OR
        title-abstr-key("regressor") OR
        title-abstr-key("regressors")
    )
) AND (
    title-abstr-key("evolutionary") OR
    title-abstr-key("evolution")
)
```

</details>


**🌐 Use a rede institucional:** Você sabia que a UFSM fornece uma 
[VPN](https://www.ufsm.br/orgaos-suplementares/cpd/servicos/vpn-virtual-private-network-ufsm) e um 
[servidor Proxy](https://www.ufsm.br/orgaos-suplementares/cpd/servicos/proxy-externo-ufsm) para conexões de fora do 
Campus sede? Com isso, você ganha acesso a repositórios acadêmicos (como Scopus) que estariam bloqueados em uma rede 
comum.

> [!IMPORTANT]
> Uma VPN (Virtual Private Network) roteia todo o tráfego do seu computador pela rede privada (navegador + qualquer 
> aplicação que use a rede, como Steam, Discord, etc). O proxy, por ser configurado apenas no navegador, roteia apenas
> a conexão do navegador.
> 
> Minha sugestão é baixar outro navegador e deixá-lo configurado com o proxy da universidade permanentemente, como por
> exemplo o [Waterfox](https://www.waterfox.net/).


**🏆 Selecione trabalhos com reputação:** talvez aquele artigo com apenas um autor que saiu na 1ª Conferência Egípcia 
sobre Inteligência Artificial não seja a fonte mais confiável para basear seu estudo! Procure utilizar artigos que 
saíram em boas revistas e conferências, e/ou que possuem grande volume de citações. Você pode ver o volume de citações
tanto nos repositórios online de artigos como no [Google Scholar](https://scholar.google.com).

## Lendo artigos

Uma vez que você tenha coletado todos os artigos que pretende ler, é hora de revisá-los!

**📊 Crie uma planilha:** seja no Excel ou no Google Docs, crie uma planilha para sistematizar quais artigos você já 
leu, o que você descobriu sobre eles, e se são pertinentes a sua pesquisa. Confira o exemplo abaixo:

| Campo          | Valor                                                                        |
|----------------|------------------------------------------------------------------------------|
| Ano            | 2018                                                                         |
| Título         | Increasing Boosting Effectiveness with Estimation of Distribution Algorithms |
| BibTeX         | ```@inproceedings{...```                                                     |
| Palavras-chave | ensemble learning; boosting                                                  |
| Autores        | Henry Cagnini; Rodrigo Coelho Barros; Márcio Basgalupp                       |
| Publicação     | IEEE Congress on Evolutionary Computation                                    |
| Link           | https://ieeexplore.ieee.org/document/8477959                                 |
| Anotações      | Este artigo revisa um algoritmo evolutivo para indução de ensembles...       |


**💾 Use o Mendeley:** O [Mendeley](https://www.mendeley.com/) é um software de gestão de referências. Nele, é possível 
colocar o PDF dos artigos, fazer marcações (com um marca texto), e recuperar rapidamente a maneira de como escrever as 
referências. Apesar de ser opcional, é uma ferramenta que facilita o trabalho de revisão de artigos! 

**📝 Leia apenas o resumo:** Para todos os artigos que retornaram na busca dos repositórios online, leia *apenas o 
resumo* inicialmente. Se o resumo não parece ser do assunto que você está procurando, descarte o artigo! Só depois de 
ter feito isto para todos os artigos, prossiga para revisá-los por inteiro.

**✍️ Escreva as citações desde já:** caso você encontre uma frase em um dos artigos revisados que julgue interessante, 
copie-e-cole a frase, colocando-a entre parênteses, e já faça a citação no texto do artigo que você está escrevendo! 
Com isso, fica fácil no futuro organizar o texto em torno dos artigos lidos.   

## Recursos Adicionais

* [Guia da Elsevier para publicar artigos](https://www.elsevier.com/researcher/author/submit-your-paper) 
