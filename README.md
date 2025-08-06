# Conversor de Temperatura em C++

Este projeto foi desenvolvido com o objetivo de servir como base para um sistema mais completo de conversão de unidades físicas, iniciando pela conversão de temperatura. Escrito em C++, ele é parte de uma série de aplicações voltadas para reforçar boas práticas em engenharia de software, como modularização, organização de código e versionamento incremental.

## 🔍 Descrição

A aplicação recebe uma temperatura em Celsius e realiza a conversão para Fahrenheit e Kelvin, exibindo os valores com formatação adequada. A proposta é evoluir este código simples para um sistema mais robusto, com múltiplas escalas, histórico de conversões e arquitetura modular.

## 🎯 Objetivos

- Demonstrar domínio de fundamentos da linguagem C++
- Evoluir progressivamente para aplicar princípios de engenharia de software
- Criar uma base de projetos técnicos organizados por linguagem

## 📁 Estrutura do Projeto
```
ConversorTemperatura/
├── src/ # Código-fonte principal
├── include/ # Arquivos de cabeçalho (futuros)
├── build/ # Binários gerados (não versionados)
├── README.md # Documentação do projeto
├── .gitignore # Arquivos e pastas ignorados pelo Git
└── LICENSE # Licença MIT
```


## ⚙️ Como compilar e executar

### Requisitos

- Compilador C++ (g++ ou equivalente)
- Terminal Bash ou ambiente compatível (Linux/macOS/WSL)

### Passos

```bash
cd ProjetosCPP/ConversorTemperatura
g++ src/main.cpp -o build/conversor
./build/conversor
```

## 🛣️ Roadmap de Evolução

As próximas versões do projeto seguirão um plano incremental, com foco em refatoração, modularização e aplicação de conceitos avançados:

### 🔽 Versão 1.0
- Conversão de Celsius para Fahrenheit e Kelvin
- Interface simples via terminal
- Formatação numérica com `iomanip`

### 🔽 Versão 1.1 (Atual)
- Separação das conversões em condicionais dedicadas
- Introdução de um menu interativo para múltiplas opções
- Tratamento inicial para caso de valor inválido

### 🔼 Versão 1.2
- Suporte a mais escalas de temperatura (Rankine, Réaumur)
- Tratamento de entradas inválidas com `cin.fail`
- Estrutura de código separada em `.h` e `.cpp`

### 🔼 Versão 1.3
- Registro de histórico de conversões em arquivo `.txt`
- Leitura e exibição do histórico sob demanda

### 🔼 Versão 1.4+
- Interface gráfica (GUI) simples com Qt ou ImGui
- Estrutura orientada a objetos
- Inclusão de testes unitários (com Catch2 ou Google Test)

---

📄 **Licença**  
Distribuído sob a licença MIT. Veja o arquivo [`LICENSE`](LICENSE) para mais informações.

---

**Desenvolvido por Frederico S 🚀**

