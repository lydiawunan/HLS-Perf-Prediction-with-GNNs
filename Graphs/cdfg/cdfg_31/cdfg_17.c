#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 536586032
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, unsigned long long p_4)
{
  short v_7;
  long v;
  char result;
  v = -953342078L;
  v_7 = (short)17063;
  if (- ((long long)(v ^ (long)v_7) * 1024LL) > 4294908780LL) result = (char)-1.3946896185e+38;
  else result = (char)(~ ((unsigned long long)((unsigned int)p / 4155826170U) / (
                          (p_4 - 47539ULL) + 576ULL)));
  return result;
}


