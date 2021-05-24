# Anti Wallis

John Wallis was a mathematician who found/discovered/invented the Wallis function (or Wallis product as its friends call it).

The Wallis function is the most used method to calculate pi.

As you have probably figured from the name of this repo I'm not the biggest fan of his function.

This repo is meant to show how horrible the Wallis function is and to ask every developer in the world to demolish it.

I implemented a better function to calculate pi, the code in the repo is running the function, and comparing it to the Wallis function.

## Usage

###### Instead of going through all this trouble you can just view the [Online Demo](https://replit.com/@donno2048/Anti-wallis) (press the "Run" button if needed)

### Clone the repo

```sh
git clone https://github.com/donno2048/Anti-wallis
cd Anti-Wallis
```
### Choose a language

###### You should run the C version, it has the fastest Wallis function...

###### You can also install every requirement (`sudo apt update && sudo apt install gcc python3 nodejs golang-go -y`) and run the interactive session (`bash main.sh`)

<details>
<summary>C</summary>

#### Install the requirements (just the GCC compiler)

```sh
sudo apt update
sudo apt install gcc -y
```

#### Compile

```sh
gcc c/main.c c/test.c c/pi.c -o main -lm
```

#### Run

```sh
./main
```
</details>
<details>
<summary>Python</summary>

#### Install the requirements (just the Python interpreter)

```sh
sudo apt update
sudo apt install python3 -y
```

#### Run

```sh
python3 py/main.py
```

</details>
<details>
<summary>JavaScript</summary>

#### Install the requirements (just the Node.js interpreter)

```sh
sudo apt update
sudo apt install nodejs -y
```

#### Run

```sh
node js/main.mjs
```

</details>
<details>
<summary>Go</summary>

#### Install the requirements (just the Go compiler)

```sh
sudo apt update
sudo apt install golang-go -y
```

#### Run

```sh
go run go/main.go go/pi.go go/test.go 
```

</details>
