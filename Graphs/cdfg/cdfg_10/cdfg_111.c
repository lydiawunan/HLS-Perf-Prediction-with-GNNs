#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 983131591
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p)
{
  signed char v_9;
  unsigned char v_7;
  unsigned long long v_5;
  unsigned int v;
  unsigned short result;
  v_9 = (signed char)p;
  v_5 = (unsigned long long)p;
  result = (unsigned short)14515;
  v = (unsigned int)v_9;
  while ((unsigned long)(! v % 3657724551U) >= ((unsigned long)v & ((unsigned long)result % 733975972UL) % (unsigned long)(
                                                                   (int)p + 606))) {
    v_7 = (double)v_5 + -3.17366603062e+38;
    v = (unsigned int)v_7;
    v_5 = 18446744073709551540ULL;
    result = p;
  }
  while_0_break: ;
  return result;
}


