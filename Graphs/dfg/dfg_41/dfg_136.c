#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 328125317
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, signed char p_4, long p_7, unsigned char p_9,
              double p_11)
{
  long v_17;
  short v_15;
  unsigned int v_13;
  unsigned short v;
  long long result;
  v_15 = (short)-26292;
  v_13 = 4294936350U;
  v_17 = (long)(1.84467440735e+19 * - (- (- p_11)));
  v = (unsigned short)((long)p_11 % ((-72L * (518811794L >> (v_13 & 31U))) % (
                                     ((long)(26750 + (int)((unsigned short)p)) - 
                                      (long)v_15 * v_17) + 807L) + 56L));
  result = (long long)((36802L / ((long)((int)p_4 / ((int)v + 881)) * (
                                  p_7 - 7680L) + 63L)) * (long)(~ p_9));
  result = (long long)((41 % ((int)((unsigned char)(p - -749.442077637)) + 486)) % 30389) / (
           ! (result % ((11251LL - result) + 111LL)) + 408LL);
  return result;
}


