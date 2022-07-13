
Name = "Makefile"
var3 = "aaa"

var = "bbb"

var1 = $(var)
var2 := $(var)
var3 ?= $(var)

var = "ccc"

rule1:
	@echo $(Name)
	@echo ${Name}
	@echo $Name

rule2:
	@echo "$(var1) --- $(var2) --- $(var3)"

