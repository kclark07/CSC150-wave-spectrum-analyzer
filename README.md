# Wave Spectrum Analyzer

A C++ application that analyzes sound and light wave data.

## Features

- Classifies visible light wavelengths into colors
- Determines which animals can hear a given sound frequency
- Supports multiple input units:
  - Hertz (Hz)
  - Kilohertz (kHz)
  - Wavelength (mm)
  - Terahertz (THz)
  - Nanometers (nm)
- Performs wave frequency conversions

## Technologies

- C++
- Conditional Logic
- Unit Conversion
- Scientific Data Processing

## Skills Demonstrated

- Input Validation
- Control Structures
- Mathematical Calculations
- Scientific Programming Concepts



# Building and Running

## Prerequisites

* Visual Studio Code
* C/C++ Extension
* GCC/G++ Compiler (MinGW-w64 on Windows)

Verify the compiler is installed:

```bash
g++ --version
```

## Compile

```bash
g++ prog2.cpp -o wave_spectrum_analyzer
```

## Run

```bash
.\wave_spectrum_analyzer
```

## Example

```text
Light and Sound Waves Analysis

Enter a value: 500
Select the units (H)z, (k)Hz, (T)Hz, (m)m, (n)m: n

Color is Blue
```

