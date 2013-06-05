#SOURCES=boot.o kmain.o system.ports.o system.monitor.o
#CFLAGS=-nostdlib -nostdinc -fno-builtin -fno-stack-protector -ffreestanding -Wl,--oformat=elf32-i386 -m32 -I include
##LDFLAGS=-Tlink.ld -melf_i386
#ASFLAGS=-felf32

#SOURCES=boot.o kmain.o system.ports.o system.monitor.o
SOURCES=kmain.o system.ports.o system.monitor.o
CFLAGS= -m64 -ffreestanding	-nostdlib -mcmodel=large -mno-red-zone -mno-mmx	-mno-sse -mno-sse2 -mno-sse3 -mno-3dnow	-I include
LDFLAGS= -nostdlib -nodefaultlibs -Tlink.ld
ASFLAGS=-felf64
	
all: $(SOURCES) link 

clean:
	-rm *.o kernel

link:
	ld $(LDFLAGS) -o kernel $(SOURCES)

.s.o:
	nasm $(ASFLAGS) $<
