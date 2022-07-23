
# thay đổi thứ tự buil -> sum.o main.o ,main.o sum.o -> xem cach nó gọi file buil
# thay đôi vị trí buil -> cho target Sum xu cuối -> khi gõ make thì rule đầu tiên sẽ chay
# thêm 1 rule mới là rule all -> ALL: SUM
ALL: SUM
SUM:  main.o sum.o
	gcc -o SUM sum.o main.o

main.o: main.c sum.h
	gcc -c main.c

sum.o: sum.c sum.h
	gcc -c sum.c

clean: 
	rm -f *.o all
	rm -f test
	rm -f SUM