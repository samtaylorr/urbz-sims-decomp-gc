# The Urbz: Sims in the City — GameCube Decompilation

[![Code](https://bytematch.dev/samtaylorr/urbz-sims-decomp-gc.svg?mode=shield&label=Code&measure=matched_code_percent)](https://bytematch.dev/samtaylorr/urbz-sims-decomp-gc)
[![Functions](https://bytematch.dev/samtaylorr/urbz-sims-decomp-gc.svg?mode=shield&label=Functions&measure=matched_functions)](https://bytematch.dev/samtaylorr/urbz-sims-decomp-gc)

A matching decompilation of **The Urbz: Sims in the City** for the Nintendo GameCube.

This project aims to reconstruct the game's original executable as readable, maintainable C/C++ source code. By matching the original executable at the byte level, we can verify that the reconstructed code behaves identically at the machine-code level.

The target is the North American GameCube release, **GUBE69**.

## Progress

Decompilation progress is tracked automatically through [ByteMatch](https://bytematch.dev/samtaylorr/urbz-sims-decomp-gc).

| Metric | Matched | Total | Progress |
|:---|---:|---:|---:|
| Code | 641,512 bytes | 3,921,584 bytes | 16.36% |
| Functions | 10,712 | 18,170 | 58.95% |

<sub>Figures from the GUBE69 report. Progress is ongoing and changes as more functions are matched.</sub>

For detailed statistics, breakdowns and the latest progress, see the [ByteMatch report](https://bytematch.dev/samtaylorr/urbz-sims-decomp-gc.json).

## Getting Started

### Requirements

- Python 3
- Ninja
- A legally obtained copy of the original GameCube release (GUBE69)

The project uses **CodeWarrior GC 1.3.2** as its compiler.

### Setup

1. Clone the repository:

   ```bash
   git clone https://github.com/samtaylorr/urbz-sims-decomp-gc.git
   cd urbz-sims-decomp-gc
   ```

2. Place your own copy of the game in the following directory:

   ```text
   orig/GUBE69/
   ```

   Original game files are not included in this repository.

3. Run the configuration script:

   ```bash
   python configure.py
   ```

   This will download and configure the tools required by the project.

4. Build the project:

   ```bash
   ninja
   ```

The build process recompiles the reconstructed source and checks the resulting `main.dol` against the original executable.

## Project Structure

| Directory / File | Description |
|:---|:---|
| `src/` | Decompiled game source code |
| `include/` | Header files and declarations |
| `config/GUBE69/` | Target-specific build configuration |
| `docs/` | Project documentation |
| `assets/` | Project assets |
| `tools/` | Supporting tools and utilities |
| `configure.py` | Project configuration and tool setup |
| `objdiff.json` | Function matching and comparison configuration |

## Decompilation

This project follows a matching decompilation approach.

Rather than simply recreating the game's functionality, the goal is to reproduce the original machine code as accurately as possible.

A function is considered matched when compiling its reconstructed source produces the same machine code as the corresponding function in the original executable.

This provides a measurable way to track progress and helps ensure that the reconstructed source remains faithful to the original game.

[**objdiff**](https://github.com/encounter/objdiff) can be used to inspect function comparisons and identify remaining differences.

## Contributing

Contributions are welcome!

Whether you're experienced with reverse engineering or just interested in helping preserve a piece of gaming history, there's plenty of work to do.

Some ways to help include:

- Decompiling additional functions.
- Improving existing decompiled code.
- Identifying and documenting game structures and data.
- Investigating unknown functions and behaviours.
- Improving project tooling and documentation.

Please keep changes consistent with the project's matching requirements. Decompiled functions should reproduce the original machine code rather than merely implement equivalent behaviour.

## Disclaimer

This is an independent, non-commercial reverse-engineering and game preservation project.

**This repository does not distribute the original game or its copyrighted game data.** You must supply your own legally obtained copy of the game when building or verifying the decompilation.

The project is not affiliated with, endorsed by, or associated with Electronic Arts, Maxis, or Nintendo.

All trademarks and copyrights belong to their respective owners.

## License

This project is licensed under [CC0 1.0 Universal](LICENSE).
