# Path to Delivery

Projeto desenvolvido para a disciplina de **Desenvolvimento de Jogos**, utilizando **C++** e **SDL2**.

O jogo coloca o jogador no papel de um entregador em uma cidade urbana/cyberpunk. O objetivo é conduzir o veículo pelo mapa, coletar pedidos, realizar entregas, evitar colisões e cumprir os objetivos dentro do tempo disponível.

---

## Autores

- **Bruno Seiji Kishibe - 200072854**
- **Marina Márcia Costa de Souza - 200041606**

---

## Etapas do Projeto

O desenvolvimento foi organizado em entregas progressivas, separando a evolução do jogo por datas.

### Entrega 30% — 29/05/2026

Primeira versão jogável do projeto, contendo a base inicial do jogo.

Funcionalidades presentes:

- renderização do mapa urbano inicial;
- renderização do jogador;
- movimentação básica;
- câmera acompanhando o jogador;
- seleção de veículo;
- início dos ajustes de movimentação com inércia e angulação.

---

### Entrega 70% — 26/06/2026

Versão intermediária com melhorias importantes na movimentação, nos sprites, no mapa e no sistema de colisão.

Funcionalidades e ajustes presentes:

- movimentação com inércia;
- angulação do veículo;
- troca de veículos funcionando;
- sprites ajustados;
- novo sprite integrado;
- colisão inicial no mapa;
- respeito aos limites do mapa;
- limites da câmera;
- mapa atualizado para comportar novas ruas;
- integração inicial de sons;
- colisão ainda em processo de finalização.

---

### Entrega 100% — 10/07/2026

Versão completa apresentada na avaliação de 100%.

Funcionalidades presentes:

- fluxo de entregas;
- coleta e entrega de pedidos;
- widget de GPS;
- uso do algoritmo de Dijkstra para auxílio de rota;
- velocímetro;
- marcador de vida;
- telas iniciais;
- objetivos da fase;
- contagem de entregas;
- ajustes gerais no mapa;
- integração da experiência principal de gameplay.

---

### Ajustes Finais — após 10/07/2026

Após a apresentação da versão de 100%, foram realizados ajustes finais separados da entrega oficial.

Esses ajustes incluem:

- tela de dificuldade;
- ajustes adicionais de telas;
- melhorias visuais;
- correções de comportamento;
- refinamentos gerais do projeto.

---

## Controles

### Tela de seleção

- `1` — Harley
- `2` — Vespa
- `3` — Buggy
- `ESC` — sair

### Durante o jogo

- `W`, `A`, `S`, `D` ou setas — movimentar o veículo
- `Espaço` — coletar ou entregar pedido
- `ESC` — sair

---

## Veículos disponíveis

- **Harley** — veículo mais rápido.
- **Vespa** — veículo de velocidade média.
- **Buggy** — veículo mais lento, pensado para ser mais resistente.

---

## Principais sistemas implementados

- Sistema de estados do jogo;
- renderização de sprites;
- movimentação de veículos;
- câmera seguindo o jogador;
- seleção de veículos;
- colisão com o mapa;
- limites de câmera e cenário;
- sistema de coleta e entrega;
- objetivos de fase;
- GPS;
- Dijkstra;
- velocímetro;
- marcador de vida;
- telas de interface;
- sons e músicas.

---

## Estrutura do Projeto

```text
include/
src/
recursos/
├── img/
├── map/
├── sound/
└── font/
Makefile
README.md
```

---

## Tecnologias utilizadas

- C++
- SDL2
- SDL2_image
- SDL2_mixer
- SDL2_ttf
- Makefile
- MSYS2 UCRT64

---

## Como executar

No terminal do **MSYS2 UCRT64**, dentro da pasta do projeto:

```bash
make run
```

Para compilar manualmente:

```bash
make
```

Para limpar os arquivos gerados:

```bash
make clean
```

---

## Observação sobre as versões

As datas das entregas foram organizadas conforme a evolução do projeto:

```text
29/05/2026 — Entrega 30%
26/06/2026 — Entrega 70%
10/07/2026 — Entrega 100%
Após 10/07/2026 — Ajustes finais
```

Os ajustes realizados depois da apresentação de 100% não fazem parte da entrega oficial de 10/07/2026, ficando registrados como melhorias posteriores.
