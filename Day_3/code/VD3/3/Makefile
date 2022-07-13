obj_files = foo.result bar.o lose.o
src_files = foo.raw bar.c lose.c

.PHONY: all
all: $(obj_files)

$(filter %.o,$(obj_files)): %.o: %.c
	@echo "target1: $@ prereq: $<"
$(filter %.result,$(obj_files)): %.result: %.raw
	@echo "target2: $@ prereq: $<" 

%.c %.raw:
	touch $@
debug:
	@echo $(filter %.o,$(obj_files))
	@echo $(filter %.result,$(obj_files))
clean:
	rm -f $(src_files)
	