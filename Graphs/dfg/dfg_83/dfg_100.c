#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 191622228
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, unsigned int p_9, int p_11)
{
  char v_6;
  unsigned char v_4;
  long v;
  unsigned int result;
  v_6 = (char)37;
  v_4 = (unsigned char)v_6;
  v_6 = (char)(! ((unsigned long)p_11 + 1));
  v = 954550130L;
  result = (unsigned int)((long long)((unsigned long)v % (unsigned long)(
                                      ((unsigned int)((int)v_4 ^ (int)v_6) + ! p) + 953U)) * (
                          (long long)((p_9 * (unsigned int)-6167786496.f) % (unsigned int)(
                                      p_11 % 45201 + 23)) + (516976271LL << 20)));
  return result;
}


