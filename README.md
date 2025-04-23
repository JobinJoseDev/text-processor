# Text Processor
A command-line tool in C to parse, filter, and sort text/CSV files (e.g., playlists).

## Features
- Reads CSV files.
- Filters by field (e.g., artist).
- Sorts by column.

## Usage
```bash
gcc -std=c11 -o textproc textproc.c
./textproc playlist.csv --filter "artist=Prince"

//I really don't know what's written above, I'm actually new to GitHub, the thing useful is shown below:   

## Project Structure
- `src/textproc.c`: Main program for CSV parsing.
- `src/utils.c`: Utility functions (e.g., trim_whitespace).
