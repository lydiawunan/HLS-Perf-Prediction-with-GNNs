#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 293641911
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, char p_7)
{
  char v_9;
  unsigned short v_5;
  char v;
  unsigned long result;
  v_9 = (char)0;
  v_5 = (unsigned short)7259;
  v = (char)-109;
  v = (char)((int)v / ((int)(- v_9) + 359));
  result = (unsigned long)((int)p_7 + ! (((int)v_9 << ((int)p_7 & 7)) * (int)(~ v_5)));
  v = v;
  result = ((unsigned long)(~ (-48 / ((int)p + 988))) - (result % (unsigned long)(
                                                         (int)v + 620)) / (unsigned long)(
                                                        (83 + (int)v_5) + 640)) ^ 73UL;
  return result;
}


