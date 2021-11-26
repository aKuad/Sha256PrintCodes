# Sha256PrintCodes

## Description

Sha-256 hash value calculating and print program.

In default, calculate hash value of 'hello'.

Implemented with C / JavaScript / Perl / Python / Ruby / SH.

## How to run

### `sha.c` (C)

Required OpenSSL development library.

To install in Ubuntu: `sudo apt install libssl-dev`

To compile and execute:

```sh
gcc sha.c -lcrypto -o sha
./sha
```

### `sha.html` (JavaScript)

Only load the html file in browser.

But `sha256.js` require in same directory.

### `sha.pl / sha.py / sha.rb` (Perl / Python / Ruby)

Only required interpreter.

No additional libraries are required.

To execute:

```sh
perl sha.pl
python3 sha.py
ruby sha
```

### `sha.sh` (ShellScript)

Only required unix shell (sh).

If not have permission of execute, add execute permission.
To add execute permission: `chmod +x sha.sh`

To execute:

```sh
./sha.sh
```

## License

These source code (without `sha256.js`) are published with CC0 license.

## Using library

jsSHA

<https://github.com/Caligatio/jsSHA>

It is published with BSD 3-Clause "New" or "Revised" License
