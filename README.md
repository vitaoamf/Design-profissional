
Calculadora de Média Aritmética em C

Descrição do Projeto
Este é um projeto simples desenvolvido na linguagem C que calcula a média aritmética de três números inteiros fornecidos pelo usuário. Foi criado para demonstrar o domínio de variáveis, entrada/saída de dados e operações matemáticas básicas em C.

Tecnologias Utilizadas
* **Linguagem:** C
* **Compilador:** GCC (Gnu Compiler Collection)

Funcionalidades
* Permite a entrada de três números inteiros.
* Calcula a média aritmética.
* Exibe o resultado formatado com duas casas decimais.

Como Executar

Para rodar este projeto, você precisa ter um compilador C (como o GCC) instalado.

1. Clone o Repositório:
   
git clone [https://github.com/SeuUsuario/CalculadoraMedia_C.git](https://github.com/SeuUsuario/CalculadoraMedia_C.git)

cd CalculadoraMedia_C


2.  Compile o Código:
    
gcc media_aritmetica.c -o media_calc

3.  Execute o Programa:

./media_calc
   
Autor
Victor Alves



0------------------------------------------------------------0


# 📚 Gerenciamento de Livros (Biblioteca Pessoal)

## 📝 Descrição
Este projeto é um modelo de banco de dados relacional simples para gerenciar livros e seus respectivos autores. O objetivo é demonstrar a criação de tabelas, o uso de chaves primárias e estrangeiras, e a inserção básica de dados.

## 🛠️ Tecnologias Utilizadas
* **Linguagem:** SQL (Compatível com SQLite, MySQL, PostgreSQL)
* **Conceitos:** Modelo Relacional, Chave Primária, Chave Estrangeira (FOREIGN KEY).

## 🚀 Estrutura do Banco de Dados

### 1. Entidades
* **AUTOR:** Dados dos escritores.
* **LIVRO:** Dados das obras, incluindo o link para o autor.

### 2. Relacionamento
O relacionamento entre AUTOR e LIVRO é **Um-para-Muitos (1:N)**. Um autor pode ter vários livros.

## 🔍 Como Utilizar

1.  **Crie o Banco de Dados:** Use um cliente SQL (como DB Browser for SQLite, MySQL Workbench ou linha de comando) para criar um novo banco de dados.
2.  **Execute o Schema:** Execute o script `schema.sql` para criar as tabelas `AUTOR` e `LIVRO`.
3.  **Popule os Dados:** Execute o script `dados_exemplo.sql` para inserir os dados de exemplo.

## 💡 Consultas Sugeridas (Opcional)

Para testar o relacionamento, você pode executar consultas JOIN:

* **Listar todos os livros e seus autores:**
    ```sql
    SELECT L.titulo, A.nome_autor 
    FROM LIVRO L
    JOIN AUTOR A ON L.autor_id = A.autor_id;
    ```

---

Este projeto é fácil de manter e demonstra que você entende os fundamentos de modelagem e SQL. Gostaria de ajuda para criar o **README de Perfil** que linkaria para este projeto?
