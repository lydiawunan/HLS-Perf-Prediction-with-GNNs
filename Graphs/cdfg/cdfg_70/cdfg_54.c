#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 538148940
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, long long p_7, long p_11[4], signed char p_13,
              unsigned short p_19)
{
  unsigned int v_25;
  unsigned long long v_23;
  signed char v_21;
  long long v_17;
  int v_15;
  unsigned char v_9;
  signed char v_5;
  long v;
  long long result;
  v_25 = (unsigned int)p_13;
  v_23 = 18446744073709499403ULL;
  v_21 = (signed char)p;
  v_17 = 23816202LL;
  v_15 = (int)p_19;
  v_5 = (signed char)p_7;
  v = -46839L;
  result = (long long)p;
  while (18446744073489550970ULL >= v_23) {
    v_25 -= 3573468078U;
    v_15 = (int)(result * (long long)p_19);
    v_17 = (long long)((double)p_11[0] * 298.000428565);
    v_23 = (unsigned long long)((long)(- ((int)p_13 - 26258)) + ((29L ^ v) - (long)(- v_15)));
  }
  while_0_break: ;
  if (((unsigned long long)v_15 * 18446744072777264256ULL) * (unsigned long long)(
      ~ v_17 - (long long)p_19) >= (unsigned long long)(! (0 - (long)(- v_21)))) {
    v_9 = (unsigned char)(! (unsigned short)25501);
    v = (long)((long long)((unsigned long)(! p) / 502720890UL) & ((long long)v_5 - p_7) % (long long)(
                                                                 (long)v_9 / (
                                                                 p_11[3] + 250L) + 886L));
    result = (long long)v;
  }
  else result = (long long)(-100 - (int)p_13);
  return result;
}


