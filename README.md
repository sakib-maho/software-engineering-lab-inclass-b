# Software Engineering Lab In-Class B

<!-- BrandCloud:readme-standard -->
[![Maintained](https://img.shields.io/badge/Maintained-yes-brightgreen.svg)](#)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Showcase](https://img.shields.io/badge/Portfolio-Showcase-blue.svg)](#)

_Part of the `sakib-maho` project showcase series with consistent documentation and quality standards._

This repository is upgraded into a practical C CLI project: a **Gradebook Analyzer**.
It computes the average score for a list of student marks and maps that average to a letter grade.

## Features

- CLI input for multiple scores
- Mean score calculation
- Letter-grade conversion (`A/B/C/D/F`)
- Dedicated test binary for core functions
- `Makefile` workflow for build and test

## Quick Start

```bash
make build
```

## Tests

```bash
make test
```

## License

MIT License. See `LICENSE`.

## Project Structure

```text
software-engineering-lab-inclass-b/
├── include/gradebook.h
├── src/
│   ├── gradebook.c
│   └── main.c
├── tests/test_gradebook.c
└── Makefile
```

## Run

```bash
./gradebook 95 88 74 100
```
