#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 524352214
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, short p_7, long long p_11, signed char p_13,
                  long long p_17)
{
  float v_21;
  short v_19;
  unsigned long long v_15;
  unsigned short v_9;
  unsigned short v_4;
  unsigned long long v;
  unsigned long result;
  v_21 = (float)p_7;
  v_19 = p_7;
  v = (unsigned long long)p_17;
  v_4 = (unsigned short)((long long)(-843195008 - (int)v_19 % (((int)p_7 + (int)((short)v_21)) + 15)) ^ 
                         (long long)(~ (- v_19)) % (- p_11 + 638LL));
  v_15 = (unsigned long long)(- p_17);
  v_9 = (unsigned short)((unsigned long long)(~ (-265767466LL - (long long)(
                                                 754832859 % ((int)v_4 + 242)))) / (
                         ((unsigned long long)((p_11 + p_11) / (long long)(
                                               (int)(~ p_13) + 403)) & v_15) + 448ULL));
  result = (unsigned long)(843194208ULL % (v + 66ULL) - (unsigned long long)(
                           (int)(- v_4) * (p + (int)p_7) + (int)v_9));
  return result;
}


