# Software Engineering Lab In-Class B

This repository is upgraded into a practical C CLI project: a **Gradebook Analyzer**.
It computes the average score for a list of student marks and maps that average to a letter grade.

## Features

- CLI input for multiple scores
- Mean score calculation
- Letter-grade conversion (`A/B/C/D/F`)
- Dedicated test binary for core functions
- `Makefile` workflow for build and test

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

## Build

```bash
make build
```

## Run

```bash
./gradebook 95 88 74 100
```

## Test

```bash
make test
```

## License

MIT License. See `LICENSE`.
