#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 821061997
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned long p_4[4], unsigned long p_9,
                  unsigned long long p_11[3], unsigned int p_13)
{
  unsigned char v_17;
  long v_15;
  long v_7;
  unsigned long v;
  unsigned long result;
  v_17 = (unsigned char)p_9;
  v_15 = (long)p_4[2];
  v_7 = -11244L;
  v = p_9;
  result = 3622172933UL;
  while (~ (((unsigned long long)p % (p_11[2] + 666ULL)) / 18446744073709551593ULL) >= (unsigned long long)(
         ((long long)p_13 / 49244LL - (long long)(63UL * v)) % (long long)(
         p + 21))) {
    result = (unsigned long long)v_17 - 867ULL;
    v_15 = (long)p;
    v_17 = (unsigned char)v_15;
    v = (unsigned long)(! ((unsigned long long)((unsigned long)v_7 * 56040UL) + p_11[0]));
  }
  while_0_break: ;
  if ((- v | ((unsigned long)v_15 + p_4[0]) / (unsigned long)(p + 22)) < (unsigned long)p) {
    result = p_4[0];
    result = (unsigned long)((float)(! (- result)) * (854.199829102f + (float)p));
  }
  else {
    v_7 = (long)(! (~ (p_13 + (unsigned int)p)));
    v = (unsigned long)((84646ULL + (unsigned long long)(v_7 / -11301L)) % (
                        (unsigned long long)(! p_9) % (p_11[1] + 848ULL) + 261ULL));
    result = 3318870716UL * (1351522095UL & (result + v));
  }
  return result;
}


