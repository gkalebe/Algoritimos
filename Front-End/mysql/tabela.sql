
id int auto_imcrement primary key;
titulo text;
autor text;

isbm varchar(50);
edicao varchar(50);
editora varchar(50);

anopublicacao year;
qtdepaginas int;

genero ENUM("poesia, romance, fabula, novela, comedia, conto, biografia, fantasia");
idioma varchar(50);
quantidade int;
disponiveis int;

insert INTO livros(titulos, autor, isbm, edicao, editora, anoPublicacao, qtdePaginas, genero, idioma, quantidade, disponivel); 
Values ("Orulho e preconceito", Jame austem, '978-85440018200', luxo, martin cleared: 2018.429, '')