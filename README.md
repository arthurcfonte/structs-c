# Structs em C

Exercícios sobre `struct` em linguagem C.

| Arquivo | Descrição |
|---|---|
| `ex1_tipos.c` | Tipos `Horario`, `Data` e `Compromisso` |
| `ex2_pessoa.c` | Leitura de nome, idade e endereço em uma struct |
| `ex3_vetor.c` | Soma de dois vetores no R3 |
| `ex4_polar.c` | Conversão de coordenadas polares para cartesianas |

## Como compilar e executar

```bash
gcc ex1_tipos.c -o ex1 && ./ex1
gcc ex2_pessoa.c -o ex2 && ./ex2
gcc ex3_vetor.c -o ex3 && ./ex3
gcc ex4_polar.c -o ex4 -lm && ./ex4
```

No Windows, use `ex1.exe` no lugar de `./ex1`. O `-lm` no exercício 4 liga a biblioteca matemática (`cos` e `sin`).

## Enviar para o GitHub

```bash
git init
git add .
git commit -m "Exercícios de structs em C"
git branch -M main
git remote add origin https://github.com/SEU_USUARIO/SEU_REPOSITORIO.git
git push -u origin main
```
