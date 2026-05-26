# OpenVoice - Open Source AAC Voice Synthesizer

## Overview

OpenVoice is an open-source AAC (Augmentative and Alternative Communication)
voice synthesizer written in C.

The project is designed to help users with speech impairments communicate
through generated voice output using selectable phrases and text-to-speech
technology.

---

## Features

- Text-to-speech voice output
- AAC communication support
- Phrase selection system
- Lightweight terminal-based interface
- Modular C project structure
- Open-source implementation

---

## Technologies Used

- C Programming Language
- GCC Compiler
- eSpeak NG (Text-to-Speech Engine)
- Git & GitHub

---

## Project Structure

```bash
OpenVoice/
│
├── src/
│   ├── main.c
│   ├── speech.c
│   ├── phrase.c
│   └── ui.c
│
├── include/
│   ├── speech.h
│   ├── phrase.h
│   └── ui.h
│
├── data/
│   └── phrases.txt
│
├── docs/
│
├── README.md
└── Makefile
```

---

## How It Works

1. User selects or enters a phrase
2. The program processes the text
3. eSpeak generates speech audio
4. Audio is played to the user

---

## Installation

### Linux

Install GCC and eSpeak:

```bash
sudo apt install gcc espeak-ng
```

Clone the repository:

```bash
git clone https://github.com/theabdulbosit/OpenVoice.git
```

Move into the project directory:

```bash
cd OpenVoice
```

Compile:

```bash
gcc src/main.c -o openvoice
```

Run:

```bash
./openvoice
```

---

## Example Usage

```text
=== OpenVoice AAC ===

1. Hello
2. I need help
3. Thank you

Choose:
```

---

## Future Improvements

- Graphical User Interface (GUI)
- Multilingual support
- Voice customization
- Phrase prediction
- Accessibility improvements

---

## License

This project is developed for educational purposes as a university final project.
