#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 668622826
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, unsigned int p_7, char p_9[1],
                       float p_13)
{
  long long v_11;
  int v_4;
  unsigned char v;
  unsigned long long result;
  v = (unsigned char)98;
  v_4 = (int)(~ (~ 4294960712UL));
  v_11 = (long long)(! (- ((int)((unsigned char)(- p_13)) * 156)));
  result = (unsigned long long)((long long)((unsigned long)(~ ((int)v / (
                                                               v_4 + 980))) % (
                                            ~ p % (unsigned long)(p_7 + 254U) + 202UL)) - 
                                (long long)p_9[0] % ((3898155736LL & (
                                                      v_11 - (long long)p_7)) + 143LL));
  result = result;
  return result;
}


