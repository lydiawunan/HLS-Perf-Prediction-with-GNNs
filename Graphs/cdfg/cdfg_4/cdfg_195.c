#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 444484821
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, unsigned long p_4, unsigned int p_7,
              unsigned long long p_9, long long p_17)
{
  long long v_21;
  double v_19;
  long v_15;
  short v_13;
  signed char v_11;
  long v;
  long long result;
  v_21 = -53127LL;
  v_15 = 942899671L;
  v_13 = (short)-5442;
  v = (long)p;
  result = 48472LL;
  v_19 = (double)(~ 18446744073709520199ULL);
  if ((long long)(166U + p_7) / (~ p_17 + 580LL) + result != (long long)(! v_13)) {
    v = (long)(((unsigned long long)((unsigned long)p_7 - 36375UL) + 161288191ULL) ^ p_9);
    result = (long long)v;
    result = (long long)((float)((long long)p / (result + 720LL)) * (
                         (float)p_4 + -97.4374008179f) - 1012363584.f);
  }
  else {
    result = (long long)(100L * v) * ((p_17 | (long long)v_19) << (v_21 & 63LL));
    v_11 = (signed char)((18446744073709551615ULL | ~ p_9) * (unsigned long long)(
                         (long long)(4005878415U + (unsigned int)-7876683163.34) % (
                         result + 505LL)));
    result = ((result - (long long)v) - (long long)((int)v_11 - (int)v_13)) / (long long)(
             ! (v_15 / -863613958L) + 392L);
  }
  return result;
}


