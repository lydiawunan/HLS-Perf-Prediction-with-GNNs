#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 487368148
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, int p_7, unsigned short p_15,
                  unsigned char p_17, long long p_19)
{
  int v_13;
  long v_11;
  long v_9;
  long long v_5;
  unsigned char v;
  unsigned char result;
  v_13 = 27043;
  v_9 = (long)p_7;
  v = (unsigned char)p_19;
  result = (unsigned char)p_15;
  v_11 = (long)p_19;
  if (p_19 + (long long)p > (long long)(((long)p_7 + 905671201L) / (long)(
                                        (int)result * p_7 + 185) + ((long)v * 64425L - (long)(- p)))) {
    v = (unsigned char)((! p_7 + v_13 * p_7) * (((int)p_15 - 98) * p_7));
    v_5 = (long long)(16L / (((long)p_7 - v_9) + 734L) + (-9105L + v_11));
    result = (unsigned char)((long long)(~ ((int)p % ((int)p + 376))) % (
                             (long long)v / (! v_5 + 655LL) + 403LL));
  }
  else result = (unsigned char)(-1764L % (long)((int)p_17 + 754));
  return result;
}


