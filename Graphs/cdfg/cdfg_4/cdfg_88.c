#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 646316886
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(double p, unsigned char p_11, long p_13, char p_15,
         signed char p_17[3][3][4])
{
  unsigned long v_19;
  signed char v_9;
  short v_7;
  unsigned int v_5;
  unsigned long long v;
  char result;
  v_19 = (unsigned long)p_11;
  v_5 = 4294924293U;
  if (! (-10244LL - (long long)(- v_19)) != 59889LL) {
    v_9 = (signed char)(! (- p_13 - (long)-1.39221922358e+36));
    v_7 = (short)(- p_11);
    v = (32876ULL | (unsigned long long)p) * (unsigned long long)(99U / (
                                                                  v_5 + 972U)) ^ (unsigned long long)(
        (int)v_7 / ((int)v_9 + 625));
  }
  else v = (unsigned long long)p_11;
  result = (char)v;
  return result;
}


