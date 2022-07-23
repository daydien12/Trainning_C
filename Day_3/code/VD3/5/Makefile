foo = ok

rule1: # so sánh
ifeq ($(foo), ok)
	@echo "foo equals ok"
else
	@echo "nope"
endif

nullstring =
foo = $(nullstring) # end of line; there is a space here

rule2: #kiểm tra biến rỗng
ifeq ($(strip "$(nullstring )"),)
	@echo "foo is empty after being stripped"
endif
ifeq ($(nullstring),)
	@echo "nullstring doesn't even have spaces"
endif
	@echo $(a)

bar = 
foo = $(bar)

rule3: #kiểm tra biến đã được xác định chưa
ifdef foo
	@echo "foo is defined"
endif
ifdef bar
	@echo "but bar is not"
endif

rule4:
# đúng thì i != "" lên đúng
ifneq (,$(findstring i, $(MAKEFLAGS)))
	@echo "i was passed to MAKEFLAGS"
	@echo $(findstring i, $(MAKEFLAGS))
endif