[![LiaScript](https://raw.githubusercontent.com/LiaScript/LiaScript/master/badges/course.svg)](https://liascript.github.io/course/?https://raw.githubusercontent.com/CTISM-Prof-Henry/research/main/capitulos/PUBLICANDO.md)

# Publicando sua pesquisa

Pesquisar e publicar geralmente possuem um fluxo de trabalho bem definido:

```mermaid
flowchart TD
    A["conceber uma ideia"] 
    B["escrever o artigo"]
    C["pesquisar\nonde publicar"]
    D1["submissão inicial"]
    D2["receber revisão"]
    D3{Aprovado?}
    E["submissão final"]

    subgraph " "
        direction LR
        D1 --> D2
        D2 --> D3
        D3 -- "não" --> C
    end

    A --> B
    B --> C
    C --> D1    
    D3 -- "sim" --> E
```

## Concepção

```mermaid
flowchart TD
    A["ter uma ideia"] 
    B["pesquisar na literatura"]
    C["propor uma hipótese"]
    D["testar a hipótese"]
    E["discutir resultados"]
    F["identificar direções futuras"]

    A --> B
    B --> C
    C --> D
    D --> E
    E --> F
```

## Submissão

1. Identificar revistas ou conferências para a submissão
2. Ver o guia para autores

## Escrita

Siga para o capítulo [Artigos](ARTIGOS.md).

## Submissão 

### Inicial

### Resultado

#### Aprovado

#### Reprovado

### Final

## Recursos Adicionais

* [Guia da Elsevier para publicar artigos](https://www.elsevier.com/researcher/author/submit-your-paper) 