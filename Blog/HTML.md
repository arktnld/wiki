# Estudo Básico de HTML

## A Importância do HTML

Um web designer deve aprender no minimo 3 linguagem, e elas são HTML, CSS e JavaScript. Elas são o esqueleto de qualquer site e são uma habilidade importante para qualquer desenvolvedor web. Se qualquer me pergunta qual dessas 3 é a mais importante, diria sem dúvidas que é o HTML, porque ele fornece a estrutura essencial para qualquer site e sem o HTML um site não existe.

> \<p> = paragraph

> \<n> = navigation

HTML é uma linguagem de marcação, chamado em inglês de tag, por esse motivo ela é classificada como uma *HyperText Markup Language*. No exemplo acima a tag **\<p>** é usada para parágrafos e a tag **\<n>** é usada para navegação.

### Sintaxe Básica

> syntax.html
```html
<p>HTML usa tags para identificar seu conteudo. <em>Este text, por exemplo, é um <strong>paragrafo</strong></em></p>
```

Este arquivo simple de HTML usa a tag **\<p>** para criar parágrafos, a tag **\<em>** pra criar ênfase e por ultimo a tag **\<strong>** pra criar negrito. Algumas tags como **em** e **strong** podem ser colocadas dentro de outras, mas nem todas as tags permitem isso.

### Estado Atual do HTML

Existe dois tipos de HTML sendo desenvolvidos por dois times de programadores que ocasionalmente colaboram um com o outro. O primeiro time é o W3C que é o time original e criador do HTML que atualmente está na versão 5. E as suas especificações de desenvolvimento são as seguintes:

#### Html5

- Pontos claros
- Especificação estável

O outo time é o WHATWG, e suas especificações de desenvolvimento são:

#### Html

- Permanecer padrão
- Sem número de versão
- Passar por constantes atualizações e versões


### O que tem de Diferente no HTML 5?

- Focado em construir aplicações, arrastar e soltar, detecção de local, suporte a serviço de desenho
- É mais uma plataforma de desenvolvimento de aplicações do que uma *markup language*

#### Referencias de Documentação
- [Web Platform](https://webplatform.github.io)
- [Developer Mozilla](https://developer.mozilla.org/en-US/)

## Estrutura Básica de um Documento

### Declarando DOCTYPE

> Muitas pessoas não sabem para o que serve uma declaração Doctype no inicio de um arquivo HTML, elas só sabem que precisam de um.

O Doctype é supostamente usado para indicar ao sistema qual versão HTML você quer usar, você precisa especificar isso para que a versão do arquivo HTML que você escrever reflita a versão HTML que ira ser usada pelo sistema.

### HTML Lista de declarações Doctype

Cada versão de HTML tem uma declaração Doctype diferente, a mais usada e mais simples é a declaração Doctype do HTML 5.

#### Html5
```html
<!DOCTYPE HTML>
```

#### Html 4.01
##### Strict
```html
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN"
   "http://www.w3.org/TR/html4/strict.dtd">
```
##### Transitional
```html
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN"
   "http://www.w3.org/TR/html4/loose.dtd">
```
##### Frameset
```html
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Frameset//EN"
   "http://www.w3.org/TR/html4/frameset.dtd">
```

#### Xhtml 1.0

##### Strict (quick reference)
```html
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
   "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
```
##### Transitional
```html
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
   "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
```
##### Frameset
```html
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Frameset//EN"
   "http://www.w3.org/TR/xhtml1/DTD/xhtml1-frameset.dtd">
```

### Head Tag

Depois de abrir a tag HTML do documento você vai encontrar a tag `head`, onde é colocado informações sobre o documento, referencias sobre coisas como scripts, estilos de documento e como o documento deve ser carregado.

> head.html
```html
<!doctype html>
<html lang="pt-br">
  <head>
  <meta charset="utf-8">
  <meta name="descrição" content="Uma para para explorar um documento básico de HTML">
  <title>Documento básico de HTML</title>
  </head>
</html>
```
No documento acima, na tag `HTML` indicamos que a pagina vai ser em português brasileiro. Algumas tags não precisam ser fechadas, um exemplo é a tag `meta`, que na primeira colocamos o codificador de caracteres para utf-8 e o segundo tem uma pequena descrição do documento. Por último na tag `title` colocamos o nome do documento, se não for colocado um nome, na busca vai aparecer como "documento sem título".

### Body Tag

> body.html

Enquanto toda a informação dentro da tag `head` é invisível, na tag `body` todo o conteúdo é visível no documento.

```html
<!doctype HTML>
<html lang="en">
  <head>
  <meta charset="utf-8">
  <meta name="description" content="A page for exploring basic HTML documents">
  <title>Basic HTML document</title>
  </head>
  <body>
    <h1>Page content</h1>
    <p>The main page content appears inside the <b>body</b> tag. HTML contains several elements that allow you to properly structure and format your content, which we'll cover later.</p>
  </body>
</html>
```

A tag `h1` indica um título, `b` deixa o texto em negrito e a tag `p` indica um parágrafo.


### Categorias de Conteúdo

Definem o tipo de conteúdo esperado dentro de um elemento e controlam a regra da sintase, assim como a possibilidade de elementos dentro de outros.

> models.html
```html
<!doctype html>
<html lang="en">
  <head>
  <meta charset="utf-8">
  <meta name="description" content="A page for exploring HTML content models">
  <title>Content models</title>
  </head>
    <body>
        <h1>Content models</h1>
        <p>In HTML 4 there were only two main content models, block and inline level elements. <b>Block level</b> elements would stack on top of each other in normal document flow while <b>inline level</b> elements typically appear within the flow of text content.</p>
        <p>In this example the <b>heading 1</b> and the <b>paragraphs</b> are block level items, while the bold tags and the link below are examples of inline level elements.</p>
        <p>In HTML5 new content models have been created to expand the structure and semantic capabilities of HTML. There are seven main models: <b>Flow, Metadata, Embedded, Interactive, Heading, Phrasing, and Sectioning</b>. To learn more about them, visit the <a href="http://www.w3.org/TR/html5/dom.html#kinds-of-content">interactive graphic</a> contained in the W3C HTML5 specfication.</p>
    </body>
</html>
```

Neste exemplo podemos observar 2 tipo de tag. A primeira é a tag de `nível bloco` que tem a sua própria linha no documento como a tag `p`, já as tags de `nível inline` basicamente aparecem no fluxo de outras tags. A tag `a` é usada para mostrar links, e é um exemplo de uma tag de `nível inline` que é usada dentro de outra tag.

### Categorias de Conteúdo e Suas Tags

As Categorias de Conteúdo podem ser de uso apenas dentro de outras tags ou não permitir nenhuma tag dentro delas. Segue abaixa as categorias de conteúdo e suas tags:


`Heading` - Define o título de uma seção, não permite nenhuma tag dentro de suas tags.

> h1, h2, h3, h4, h5, h6

`Metadata` - São declarados no cabeçalho, configura o comportamento ou apresentação de algun elemento.

> base, link, meta, noscript, script, style, title

`Embedded` - Importa outros conteúdos para o documento.

> audio, canvas, embed, iframe, img, math, object, svg, video

`Interactive` - São elementos que fornecem algum tipo de interação.

> a, audio*, button, embed, iframe, img*, input*, keygen, label, object*, select, textarea, video*
>
> \* Em algumas circunstâncias.

`Phrasing` - É o que tem mais tags e é usado para marcar texto e criar estruturas.

> a*, abbr, area*, audio, b, bdi, bdo, br, button, canvas, cite, code, command, datalist, del*, dfn, em, embed, i, iframe, img, input, ins*, kbd, keygen, label, map*, mark, math, meter, noscript, object, output, progress, q, ruby, s, samp, script, select, small, span, strong, sub, sup, svg, textarea, time, u, var, video, wbr, Text*
>
> \* Em algumas circunstâncias.

`Sectioning` - Define o escopo de seções do documento HTML e também não permite nenhuma tag dentro de suas tags.

> article, aside, nav, section

`Fluxo` - tudo vai na tag HTML.

> a, abbr, address, area, article, aside, audio, b, bdi, bdo, blockquote, br, button, canvas, cite, code, command, datalist, del, details, dfn, div, dl, em, embed, fieldset, figure, footer, form, h1, h2, h3, h4, h5, h6, header, hgroup, hr, i, iframe, img, input, ins, kbd, keygen, label, map, mark, math, menu, meter, nav, noscript, object, ol, output, p, pre, progress, q, ruby, s, samp, script, section, select, small, span, strong, style, sub, sup, svg, table, textarea, time, u, ul, var, video, wbr, Text


## Formatando o Conteúdo da Página

### Usando Títulos

Os títulos ajudam a definir a estrutura da página e a controlar a hierarquia do conteúdo. Você pode usar valores de título que variam de um título de nível de `h1` até um `h6`. Embora existam várias teorias sobre a estratégia exata a ser usada na escolha de títulos, o que realmente importa é que você esteja usando de maneira inteligente, para refletir com precisão a importância do seu conteúdo. Também é importante ser consistente na forma como você usa os títulos em todo o site, portanto, decidir quando e como usar os títulos é uma parte importante do planejamento do site.

### Usando Parágrafos

A tag de parágrafo `<p>` é uma das tags de formatação mais básicas e você usará com frequência. Indica um parágrafo de texto e deve ser usada para cada parágrafo individual.

### Quebras de Linha

Ocasionalmente, você precisará executar um "retorno suave", ou seja, criar uma nova linha sem usar um novo parágrafo. Para fazer isso usando HTML, você pode usar a tag de quebra de linha `<br>`. As tags de quebra de linha são embutidas, o que significa que você pode usá-las em cabeçalhos e parágrafos e não requer uma tag de fechamento.

### Enfatizando o Texto

Muitas vezes, você desejará enfatizar uma frase ou palavra específica em seu texto. O HTML oferece várias tags diferentes para fazer isso. Neste exercício, exploraremos as quatro tags de formatação mais comuns que você usará para enfatizar o conteúdo.

- #### A Tag Negrito

A tag em negrito `<b>` destina-se a representar um intervalo de texto que você deseja separar estilisticamente do restante do texto sem inferir qualquer tipo de relevância ou significado especial. Foi removido no XHTML como sendo apenas de apresentação, mas adicionado de volta ao HTML5. Como seria de esperar, os navegadores normalmente vão deixar em **negrito** este texto.</dd>

- #### A Tag Strong

Ao usar a tag `<strong>` você está representando uma string de texto como tendo grande importância. Significa que o texto deve ser considerado mais importante do que o texto que o rodeia. Normalmente é exibido como **negrito**.

- #### A Tag Itálico

Como a tag em negrito, a tag em itálico `<i>` representa uma sequência de texto que é diferente do texto ao seu redor. Nenhum significado particular é anexado ao texto, mas sim um itálico. Útil para frases, termos ou qualquer texto normalmente exibido em *itálico*.

- #### A Tag Ênfase

A tag de ênfase `<em>`, mostra o texto que é mais enfatizado do que o texto ao seu redor. Embora essa tag geralmente seja renderizada em *itálico*, ela não deve ser usada no lugar da tag em itálico, mas deve ser usada para texto que precisam ser enfatizados por algum motivo.

##### Espera... o quê?

Você provavelmente está se perguntando por que existem várias tags para texto em negrito e itálico. Se estiver, não se preocupe, `<strong>`<strong>você não está sozinho!</strong>`<strong>` Este é um dos aspectos mais confusos do aprendizado de HTML. A maneira mais fácil de explicar isso é: Um conjunto de tags é `<em>`<em>apresentacional</em>`</em>`, enquanto o outro é `<em>`<em>lógico</em>`<em>`. O que isso significa é que o texto de apresentação não transmite um significado explícito, serve apenas para alterar o estilo do texto. Os elementos lógicos, no entanto, transmitem um significado específico. Texto em negrito ou itálico são apenas isso, negrito ou itálico. O texto representado com uma tag *strong* ou *em* pode representar vários estados. Usando estilos, por exemplo, você pode alterá-lo para que o texto seja sublinhado ou destacado. Por outro lado, não faria muito sentido alterar o estilo de um elemento em negrito ou itálico, pois eles são representados exatamente como o esperado.

Existem outros elementos que você precisará pesquisar ao aprender a enfatizar o texto também. A tag <b>cite</b> `<cite>`, por exemplo, é usada para citar uma obra, como o título de um livro ou um autor, e geralmente é exibida como texto em itálico.

### Exibindo Caracteres Especiais

Alguns caracteres são reservados para uso específico no HTML, o que significa que você não tem permissão para usá-los em conteúdo normal. Usando um *menor que* como este "&lang;" em seu código pode causar problemas de renderização em determinadas situações. Outros caracteres são caracteres especiais ou símbolos que podem não estar disponíveis no teclado ou são usados por outros idiomas. Para representar esses caracteres em texto normal, você pode usar o que é conhecido como entidades de caracteres nomeados.

Estes são códigos especiais que o navegador ou user agent substituirá pelo caractere solicitado. A sintaxe para eles é relativamente simples. Você começa com um e comercial (&amp;) seguido pela entidade nomeada que é seguida por um ponto e vírgula. Para exibir um e comercial, por exemplo, digite &amp;amp;. Isso pode ser extremamente útil ao exibir o &copy; e &trade; símbolos ou escrever fórmulas matemáticas.

Você pode encontrar uma lista muito completa de entidades de caracteres nomeados na [Wikipedia](http://en.wikipedia.org/wiki/List_of_XML_and_HTML_character_entity_references").

#### Common Named Character Entities

Character | Description | Entity
----------|-------------|-----------
"	| double quotation mark	| &amp;quot;
&	| ampersand	| &amp;amp;
⟨	| left-angle bracket	| &amp;lang;
⟩	| right-angle bracket	| &amp;rang;
<	| less than symbol	| &amp;lt;
>	| greater than symbol	| &amp;gt;
&nbsp;	| non-breaking white space	| &amp;nbsp;
'	| apostrophe	| &amp;apos;
“	| left double quote	| &amp;ldquo;
”	| right double quote	| &amp;rdquo;
«	| left-pointing double angle quotation mark	| &amp;laquo;
®	| registered sign	| &amp;reg;
©	| copyright symbol	| &amp;copy;
™	| trademark symbol	| &amp;trade;
⁄	| fraction slash	| &amp;frasl;
–	| en dash	| &amp;ndash;
—	| em dash	| &amp;mdash;

### Controlando Espaço em Branco

Por padrão, os navegadores vão ignorar qualquer espaço em branco após o primeiro espaço. Para adicionar mais espaço em branco, você deve usar a entidade &amp;nbsp;.

Observe aqui. &nbsp;&nbsp;&nbsp; Adicione o espaço em branco que desejar aqui.

Lembre-se de que o objetivo principal do espaço é informar aos navegadores quando uma quebra de linha não deve ocorrer durante uma sequência de texto. Por exemplo, adicionar um espaço entre Fórmula&nbsp;Um garantiria que nunca ocorresse uma quebra de linha que dividisse as palavras Fórmula e Um. Para esse fim, nunca use o caractere de espaço sem quebra para controlar recuos de parágrafo ou falsificar um caractere. O CSS deve controlar esse tipo de formatação visual.

### Exibindo Imagens


![Lowcountry South Carolina](_images/lowcountry.jpg)

```html
<p><img src="_images/lowcountry.jpg" width="300" height="300" alt="Lowcountry South Carolina">
```

As imagens são colocadas na página através do uso da tag **img**. As imagens são consideradas **conteúdo de substituição**, ou seja, o elemento é substituído pelo recurso ao qual faz referência. O elemento imagem tem vários atributos importantes. O atributo **src** é usado para informar ao navegador onde encontrar a imagem. O atributo **alt** permite que você passe adiante a descrição que representa a imagem. Isso pode ser usado por leitores ou exibido caso a imagem não seja carregada. A **largura** e a **altura** são opcionais e podem ser usadas para passar as dimensões da imagem ao navegador. Se omitido, o navegador ainda exibirá a imagem em sua largura e altura nativas. Esses valores podem ser alterados para forçar o navegador a dimensionar a imagem de forma diferente do tamanho nativo.

![South Carolina flag](_images/sc_flag.png)

```html
<p><img src="_images/sc_flag.png" width="400" height="400" alt="South Carolina flag">
```

A maioria dos navegadores suporta uma ampla variedade de tipos de imagem. Na maioria das vezes, você pode usar os formatos de imagem jpg, png, gif, bmp e svg.</p>

## Estruturando Conteúdo

### Agrupando Elementos

Um dos principais benefícios do HTML é que ele permite estruturar um documento de uma forma que ilustra o significado do conteúdo. Isso também é chamado de semântica.

#### Elemento de Seção

 O agrupamento de elemento permite agrupar elementos em divisões específicas que têm significado semântico.

Alguns dos elementos de seção:

- \<h1> ... \<h6>
- \<article>
- \<aside>
- \<nav>
- \<section>

#### Elemento Semântico

Existe também agrupadores Semânticos que adicionam estrutura e significado ao elemento, eles são:

- \<header>
- \<main>
- \<footer>

Usados juntos esses elementos permitem agrupar seções de conteúdo que claramente definem regiões, estabelece a relação entre essas regiões e deixa sua página mais legível para pessoas e máquinas. Isso vai resultar em sites mais acessíveis, melhores resultados de pesquisa e sites que são mais consistentes e fáceis de modificar.

### Controlando Contorno do Documento

Uma das primeiras coisas que você deve considerar quando estiver estruturando sua página, é qual tipo de contorno sua página vai ter. O HTML usa elementos semânticos como tags de título e seção para descrever o contorno do conteúdo da página, de certa forma você pode ver isso como uma tabela de conteúdo. É importante gerar o contorno correto para o seu site porque vai influenciar bastante no sucesso em geral.

### O Elemento *Nav*

O elemento *nav* representa a seção de uma pagina e pode conter links para outras paginas ou para partes da pagina: Uma seção com links de navegação. Nem todas as listas de links precisam de uma tag *nav*, cabe a você decidir se uma lista que contêm links que levam a seções da sua página. listas com referencias externas não são consideradas de navegação.

#### Examplo

No exemplo seguinte existem dois elementos *nav*, um para a navegação primária pelo site, e um para navegação secundária pelo próprio site.
```html
<body>
 <h1>The Wiki Center Of Exampland</h1>
 <nav>
  <ul>
   <li><a href="/">Home</a></li>
   <li><a href="/events">Current Events</a></li>
   ...more...
  </ul>
 </nav>
 <article>
  <header>
   <h1>Demos in Exampland</h1>
   <p>Written by A. N. Other.</p>
  </header>
  <nav>
   <ul>
    <li><a href="#public">Public demonstrations</a></li>
    <li><a href="#destroy">Demolitions</a></li>
    ...more...
   </ul>
  </nav>
  <div>
   <section id="public">
    <h1>Public demonstrations</h1>
    <p>...more...</p>
   </section>
   <section id="destroy">
    <h1>Demolitions</h1>
    <p>...more...</p>
   </section>
   ...more...
  </div>
  <footer>
   <p><a href="?edit">Edit</a> | <a href="?delete">Delete</a> | <a href="?Rename">Rename</a></p>
  </footer>
 </article>
 <footer>
  <p><small>© copyright 1998 Exampland Emperor</small></p>
 </footer>
</body>
```

### O Elemento *Article*

O elemento *article* contêm uma representação completa da composição de um documento, página, aplicação ou site. Isso pode ser um post de forum, revista e artigo de jornal, uma entrada de blog, um comentário de um usuário ou qualquer outro item independe de conteúdo.

#### Exemplo

Este exemplo mostra uma postagem de um blog usando um elemento *article*, com algumas anotações *schema.org*:

```html
<article itemscope itemtype="http://schema.org/BlogPosting">
 <header>
  <h1 itemprop="headline">The Very First Rule of Life</h1>
  <p><time itemprop="datePublished" datetime="2009-10-09">3 days ago</time></p>
  <link itemprop="url" href="?comments=0">
 </header>
 <p>If there's a microphone anywhere near you, assume it's hot and
 sending whatever you're saying to the world. Seriously.</p>
 <p>...</p>
 <footer>
  <a itemprop="discussionUrl" href="?comments=1">Show comments...</a>
 </footer>
</article>
```

### O Elemento *Section*

O elemento *section* representa uma seção genérica de um documento ou aplicação. A seção, nesse contexto, é um agrupamento de conteúdo temático. O tema de cada seção deve ser identificado, tipicamente por incluir um título(h1-h6) como um filho de um elemento *section*.

É recomendado usar o elemento *article* ao invés do elemento *section* quando fizer sentido para distribuir o conteúdo de um elemento.

O elemento *section* não é um elemento de contêiner genérico. Quando um elemento é necessário apenas para o propósito de estilizar ou para acomodar scripts, é preferível usar o elemento *div*. Numa regra geral, o elemento *section* é apropriado apenas quando o conteúdo do elemento for explicitamente listado no contorno do documento.

#### Exemplo

No seguinte exemplo, nós vemos um artigo(parte de um grade site) sobre maças, contendo duas pequenas seções.

```html
<article>
<hgroup>
 <h1>Apples</h1>
 <h2>Tasty, delicious fruit!</h2>
</hgroup>
<p>The apple is the pomaceous fruit of the apple tree.</p>
<section>
 <h1>Red Delicious</h1>
 <p>These bright red apples are the most common found in many
 supermarkets.</p>
</section>
<section>
 <h1>Granny Smith</h1>
 <p>These juicy, green apples make a great filling for
 apple pies.</p>
</section>
</article>
```

### O Elemento *Aside*

O elemento *aside* representa uma seção de uma página que consiste em conteúdo tangencialmente relacionado ao conteúdo ao redor do elemento *aside* e que pode ser considerado separado desse conteúdo. Essas seções são frequentemente representadas como barras laterais na tipografia impressa.

O elemento pode ser usado para efeitos tipográficos, para grupos de elementos *nav* e para outros conteúdos considerados separados do conteúdo principal da página.

Pode ser considero um tipo de elemento *section*, significa que se você usar no seu documento, vai adicionar uma nova seção. Como ele é tagencialmente relacionado, onde ele aparece é muito importante.

#### Example

O exemplo a seguir mostra como um elemento *aside* é usado para marcar material no background na Suíça em uma notícia muito mais longa sobre a Europa.

```html
<aside>
 <h1>Switzerland</h1>
 <p>Switzerland, a land-locked country in the middle of geographic
 Europe, has not joined the geopolitical European Union, though it is
 a signatory to a number of European treaties.</p>
</aside>
```

### O Elemento *Div*

O elemento *div* não tem nenhum significado especial. Representa seus herdeiros. Ele pode ser usado com os atributos *class*, *lang* e *title* para marcações semânticas comuns a um grupo de elementos consecutivos. Também pode ser usado em um elemento *dl*, envolvendo grupos de elementos *dt* e *dd*. A tag *div* é um elemento poderoso para estruturar o seu documento.

#### Exemplo

Por exemplo, uma postagem de blog seria marcada usando *article*, um capítulo usando *section*, ajudas de navegação de uma página usando *nav* e um grupo de controles de formulário usando *fieldset*.

Por outro lado, os elementos *div* podem ser úteis para um fim estilístico ou para envolver vários parágrafos em uma seção de maneira semelhante. No exemplo a seguir, vemos os elementos *div* usados como uma forma de definir o idioma de dois parágrafos de uma só vez, em vez de definir o idioma nos dois elementos de parágrafo separadamente:

```html
<article lang="en-US">
 <h1>My use of language and my cats</h1>
 <p>My cat's behavior hasn't changed much since her absence, except
 that she plays her new physique to the neighbors regularly, in an
 attempt to get pets.</p>
 <div lang="en-GB">
  <p>My other cat, coloured black and white, is a sweetie. He followed
  us to the pool today, walking down the pavement with us. Yesterday
  he apparently visited our neighbours. I wonder if he recognises that
  their flat is a mirror image of ours.</p>
  <p>Hm, I just noticed that in the last paragraph I used British
  English. But I'm supposed to write in American English. So I
  shouldn't say "pavement" or "flat" or "colour"...</p>
 </div>
 <p>I should say "sidewalk" and "apartment" and "color"!</p>
</article>
```

### Outros Elementos Semânticos

#### O elemento *header*

O elemento de *header* representa um grupo de ajudas introdutórias ou de navegação. Representa o conteúdo introdutório da página.

##### Exemplo
```html
<header>
 <p>Welcome to...</p>
 <h1>Voidwars!</h1>
</header>
```

#### O Elemento *Footer*

O elemento *footer* representa um rodapé ancestral para seu conteúdo de seção mais próximo ou elemento raiz de seção. Um *footer* normalmente contém informações sobre sua seção, como quem o escreveu, links para documentos relacionados, dados de direitos autorais e similares.

Quando o elemento de *footer* contém seções inteiras, eles representam apêndices, índices, contratos de licença detalhados e outros conteúdos semelhantes.

##### Exemplo

Aqui está uma página com dois rodapés, um na parte superior e outro na parte inferior, com o mesmo conteúdo:

```html
<body>
 <footer><a href="../">Back to index...</a></footer>
 <hgroup>
  <h1>Lorem ipsum</h1>
  <h2>The ipsum of all lorems</h2>
 </hgroup>
 <p>A dolor sit amet, consectetur adipisicing elit, sed do eiusmod
 tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim
 veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex
 ea commodo consequat. Duis aute irure dolor in reprehenderit in
 voluptate velit esse cillum dolore eu fugiat nulla
 pariatur. Excepteur sint occaecat cupidatat non proident, sunt in
 culpa qui officia deserunt mollit anim id est laborum.</p>
 <footer><a href="../">Back to index...</a></footer>
</body>
```

#### O Elemento *Main*

O elemento *main* representa o conteúdo dominante do documento.

Um documento não deve ter mais de um elemento *main* que não tenha o atributo *hidden* especificado.

Um elemento *main* hierarquicamente correto é aquele cujos elementos ancestrais são limitados a *html*, *body*, *div*, *form* sem um nome acessível e elementos personalizados autônomos. Cada elemento principal deve ser um elemento *main* hierarquicamente correto.

##### Exemplo

Neste exemplo, o autor usou uma apresentação onde cada componente da página é renderizado em uma caixa. Para envolver o conteúdo principal da página (em oposição ao *header, footer, barra de navegação e barra lateral), o elemento *main* é usado.

```html
<!DOCTYPE html>
<html lang="en">
<title>RPG System 17</title>
<style>
 header, nav, aside, main, footer {
   margin: 0.5em; border: thin solid; padding: 0.5em;
   background: #EFF; color: black; box-shadow: 0 0 0.25em #033;
 }
 h1, h2, p { margin: 0; }
 nav, main { float: left; }
 aside { float: right; }
 footer { clear: both; }
</style>
<header>
 <h1>System Eighteen</h1>
</header>
<nav>
 <a href="../16/">← System 17</a>
 <a href="../18/">RPXIX →</a>
</nav>
<aside>
 <p>This system has no HP mechanic, so there's no healing.
</aside>
<main>
 <h2>Character creation</h2>
 <p>Attributes (magic, strength, agility) are purchased at the cost of one point per level.</p>
 <h2>Rolls</h2>
 <p>Each encounter, roll the dice for all your skills. If you roll more than the opponent, you win.</p>
</main>
<footer>
 <p>Copyright © 2013
</footer>
</html>
```

### Web Accessibility Initiative - Accessible Rich Internet Applications (WAI-ARIA)

A ARIA é uma lista de recomendações para criar sites e aplicativos com acessibilidade para pessoas especiais.
