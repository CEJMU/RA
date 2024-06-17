gem5 = ../../gem5/build/RISCV/gem5.opt
gcc = riscv64-linux-gnu-g++ --static
pipeview = ../../gem5/util/o3-pipeview.py

all: compile run

run:
	$(gem5) simple-riscv.py

compile:
	$(gcc) test.cpp

pipeline:
	$(gem5) --debug-flags=O3PipeView --debug-file=trace.out simple-riscv.py
	$(pipeview) -c 500 -o pipeview.out --color m5out/trace.out

clean:
	rm a.out
	rm pipeview.out
