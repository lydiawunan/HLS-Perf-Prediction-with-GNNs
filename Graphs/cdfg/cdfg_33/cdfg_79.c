#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 574895797
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, char p_7, long p_9, unsigned long p_11,
                  long p_19)
{
  unsigned char v_25;
  double v_23;
  long long v_21;
  long long v_17;
  signed char v_15;
  unsigned long long v_13;
  double v_4;
  signed char v;
  unsigned long result;
  v_25 = (unsigned char)p_19;
  v_23 = -9368042395.63;
  v_21 = (long long)p_19;
  v_17 = (long long)p;
  v_15 = (signed char)p_19;
  v_4 = -2.35949131e+38;
  if (~ v_21 * (long long)((510L * p_9) * (long)(v_23 - -21846.)) != 
      (long long)p_7 / (499778990LL * (long long)p_7 + 997LL) + (long long)(
      (int)v_25 - (int)((unsigned char)v_4))) {
    result = (unsigned long)((unsigned long long)((unsigned long)(4294944975U ^ (unsigned int)v_4) / (
                                                  - p_11 + 621UL)) / 18446744073709500747ULL);
    v_4 = (double)(~ (570126401LL * (long long)p) / (long long)((unsigned long)(
                                                                (int)p - (int)p_7) % (
                                                                (unsigned long)p_9 * result + 519UL) + 970UL));
    v = (signed char)((int)(v_4 / 4294913562. + 142704464.) % (- ((int)((signed char)-562.059875488f) * (int)p) + 609));
  }
  else {
    v_13 = (unsigned long long)v_17;
    v_13 = (unsigned long long)((unsigned long)(! v_15) + p_11) + ~ (
           v_13 * 18446744072805334779ULL);
    v = (signed char)v_13;
  }
  result = (unsigned long)v;
  return result;
}


