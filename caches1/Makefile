gem5 = ../../gem5/
toolchain = riscv64-linux-gnu-
gcc = $(toolchain)g++ --static
pipeview = ../../gem5/util/o3-pipeview.py
program = loop1.cpp

all: compile run

m5:
	cd $(gem5)util/m5 && scons riscv.CROSS_COMPILE=$(toolchain) build/riscv/out/m5 && cd -

run:
	$(gem5)build/RISCV/gem5.opt simple-riscv.py

compile:
	$(gcc) -o a.out $(program) -I$(gem5)include/ -L$(gem5)util/m5/build/riscv/out/ -lm5 

pipeline:
	$(gem5)build/RISCV/gem5.opt --debug-flags=O3PipeView --debug-file=trace.out simple-riscv.py
	$(pipeview) -c 500 -o pipeview.out --color m5out/trace.out

clean:
	rm a.out
	rm pipeview.out
