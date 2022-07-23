

var1  := one two three
var2 := file1.c file2.c file3.c
var3 := main.o file1.o file2.o file3.o

rule1: $(var1)
$(var1): 
	@echo $@

rule2: archive($(var2))
archive($(var2)):
	@echo $%

rule3: $(var2)
	@echo $<

rule4: $(var2)
	@echo $^

rule5: $(var2)
	@echo $?


rule6: 
	@echo *.c
	@echo *.h

rule7: 
	@echo $(wildcard *.c)
	@echo $(wildcard *.h)

rule8: $(var3)
%.o: %.c
	@echo $< 
	gcc -c $< -I.

clean:
	rm -f $(var3)
