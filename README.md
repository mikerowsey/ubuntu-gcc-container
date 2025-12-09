# CS223 GCC Development Environment

This repository provides a lightweight Linux development environment aligned with the requirements of CS223. It uses GCC, GDB, make, bash, and standard Unix tools, matching the workflow expected on the department's Linux server. The container excludes Clang, LLVM, and Valgrind to keep the setup simple and consistent with coursework.

---

## Features

- Ubuntu 24.04 base
- GCC (C99), GDB, make (build-essential)
- vim, git, tree, curl, wget
- Bash as the default shell
- Dotfiles loaded automatically through bootstrap script
- Clean, minimal environment similar to the CS department server

This setup is intended for practicing programming, editing, compiling, and debugging in a consistent Linux environment.

---

## Directory Structure

```text
project/
├── .devcontainer/
│   ├── Dockerfile
│   └── devcontainer.json
├── include/
│   └── util.h
├── src/
│   ├── main.c
│   └── util.c
└── Makefile
