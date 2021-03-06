PS3='Please enter your choice: '
echo "You should run the C version, it has the fastest Wallis function..."
options=("C" "Python" "JavaScript" "Rust" "Go")
select opt in "${options[@]}"
do
    case $opt in
        "C")
            gcc c/main.c c/test.c c/pi.c -o main -lm && ./main
			exit
			;;
        "Python")
            python3 py/main.py
			exit
            ;;
        "JavaScript")
            node --experimental-modules js/main.mjs
			exit
            ;;
        "Rust")
            rustc rust/main.rs
			./main
			exit
            ;;
        "Go")
            go run go/main.go go/pi.go go/test.go
			exit
            ;;
        *) echo "invalid option $REPLY";;
    esac
done