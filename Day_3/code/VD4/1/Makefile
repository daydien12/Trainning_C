
#------------------------------------------------------
bar := ${subst not, totally, "I am not superman"}
rule1: #thay đổi từ
	@echo $(bar)

#------------------------------------------------------
comma := ,
empty:=
space := $(empty) $(empty)
foo := a b c
bar := $(subst $(space),$(comma),$(foo))
rule2: # thếm dấu, vào giữa khoảng trắng
	@echo $(bar)

#------------------------------------------------------
foo := a.o b.o l.a c.o
one := $(patsubst %.o,%.c,$(foo))
two := $(foo:%.o=%.c)
three := $(foo:.o=.c)
rule3: #đổi tên đuôi
	@echo $(one)
	@echo $(two)
	@echo $(three)

#------------------------------------------------------
foo := who are you IamFine
bar := $(foreach wrd,$(foo),$(wrd)!)
rule4: #phân tách các từ bằng khoảng trắng" "
	@echo $(bar)

#------------------------------------------------------
foo := $(if this-is-not-empty,then1!,else1!)
empty :=
bar := $(if $(empty),then2!,else2!)
rule5:
	@echo $(foo)
	@echo $(bar)

#------------------------------------------------------
sweet_new_fn = Variable Name: $(0) First: $(1) Second: $(2) Empty Variable: $(3)
rule6: #call function
	@echo $(call sweet_new_fn, go, tigers, abc)

#------------------------------------------------------
rule7: #Multiline
	@echo This line is too long, so \
		it is broken up into multiple lines

#------------------------------------------------------
rule8:
	gcc -c file1.c -I. -o rule8

.PHONY:rule9
rule9:
	gcc -c file1.c -I. -o rule9
	
#------------------------------------------------------
rule10: # lấy toàn bộ các fiel .c
	@echo $(wildcard *.c)

rule11: # kết hợp patsubst + wildcard
	@echo $(patsubst %.c,%.o,$(wildcard *.c))

ojc := $(patsubst %.c,%.o,$(wildcard *.c))

rule12: $(ojc) # kết hợp patsubst + wildcard
	@echo $(ojc)
rule13:
	rm -f $(ojc)

#------------------------------------------------------
rule14:
	@echo $(addprefix src/*,.c*)
	@echo $(addprefix src/*,.c)
	@echo $(addprefix *,.c*)
	@echo $(wildcard $(addprefix *,.c*))

#------------------------------------------------------
rule15:
	@echo $(addsuffix  .c,a b c d e f)
#------------------------------------------------------
rule16:
	@echo $(basename src/foo.c src/sum.c src-1.0/bar hacks)
	@echo $(basename $(addsuffix  .c,a b c d e f))
	@echo $(basename $(addprefix src/*,.c))
	@echo $(basename $(wildcard $(addprefix *,.c*)))
#------------------------------------------------------
rule17:
	@echo $(notdir  src/foo.c src/sum.c src-1.0/bar hacks)
	@echo $(notdir $(addprefix src/*,.c))
	@echo $(notdir $(wildcard $(addprefix *,.c*)))

	
	