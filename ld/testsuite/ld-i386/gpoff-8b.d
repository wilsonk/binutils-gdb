#source: gpoff-8.s
#as: --32 -mrelax-relocations=yes
#ld: -melf_i386 -pie
#objdump: -dw --sym

.*: +file format .*

SYMBOL TABLE:
#...
[a-f0-9]+ l       .data	0+ __gp
#...

Disassembly of section .text:

0+[a-f0-9]+ <_start>:
 +[a-f0-9]+:[ \t]+64 a1 fe ff ff ff[ \t]+mov[ \t]+%fs:0xfffffffe,%eax
 +[a-f0-9]+:[ \t]+8d 83 [a-f0-9 \t]+lea[ \t]+0x[a-f0-9]+\(%ebx\),%eax
#pass