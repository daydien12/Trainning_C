#------------------------------------------------------
rule17:
	@echo $(notdir  src/foo.c src/sum.c src-1.0/bar hacks)
	@echo $(notdir $(addprefix src/*,.c))
	@echo $(notdir $(wildcard $(addprefix *,.c*)))

	