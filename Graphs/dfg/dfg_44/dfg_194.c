#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 551653529
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, int p_7, unsigned short p_9[2][5][3],
                  long long p_13)
{
  long v_11;
  long v_5;
  char v;
  unsigned long result;
  v_11 = (long)p_13;
  v_5 = (long)((unsigned long long)p_7 % ((unsigned long long)((long)(- p_9[0][0][2]) - 
                                                               v_11 * -103L) / (
                                          - (30860ULL - (unsigned long long)p_7) + 692ULL) + 761ULL));
  v = (char)(- v_5 + -1740L);
  result = (unsigned long)(~ (((unsigned int)v * (p - 558581693U)) * 640831507U));
  return result;
}


