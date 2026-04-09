## O que causou o conflito?

O conflito ocorreu no arquivo `conflito.txt`, quando as branches **`fix/conflitos`** e **`feat/exercicios`** realizaram alterações no mesmo trecho do arquivo.

Cada branch modificou esse trecho de forma diferente: uma versão continha o texto *"texto teste"*, enquanto a outra apresentava *"texto alterado"*.

Ao tentar realizar o merge diretamente pelo GitHub, a plataforma identificou que não era possível integrar automaticamente as mudanças, gerando um conflito.

---

## Como o conflito foi resolvido

Ao acessar o arquivo no GitHub, foram exibidas as marcações de conflito inseridas automaticamente:

```
<<<<<<< fix/conflitos
texto teste
=======
texto alterado
>>>>>>> feat/exercicios
```

Foi feita a análise das duas versões e decidiu-se **manter apenas uma delas**. Após essa decisão, o conteúdo escolhido foi mantido e todas as marcações de conflito foram removidas manualmente pelo editor do GitHub.

---

## Comandos utilizados

Como o merge foi realizado diretamente pelo GitHub, não foi necessário utilizar comandos no terminal para resolver o conflito.

Após a edição manual do arquivo na interface web, a resolução foi concluída ao confirmar as alterações (commit) pela própria plataforma.
