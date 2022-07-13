rule1: blah

blah::
	@echo "hello"

blah::
	@echo "hello again"

foo := start
foo += more

rule2: 
	echo $(foo)


rule3:  one = cool
rule3: 
	@echo one is defined: $(one)
other:
	@echo one is nothing: $(one)