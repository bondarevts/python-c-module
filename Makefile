all: spammodule.c
	./clinic.py spammodule.c
	python3 setup.py build_ext --inplace

clean:
	rm -rf *.so build clinic
