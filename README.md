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
