#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 365247472
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, short p_13)
{
  unsigned char v_11;
  double v_9;
  long long v_7;
  long long v_5;
  unsigned long long v;
  unsigned long long result;
  v_7 = (long long)p_13;
  v = (unsigned long long)p_13;
  v_9 = (double)(~ p);
  v_5 = (long long)((unsigned long long)(- ((double)(v - (unsigned long long)p_13) * 8047299978.26)) - (
                    (unsigned long long)(59702UL + (unsigned long)-1.84412191094e+38f) + v));
  v_11 = (unsigned char)(p - ~ (v + 964918033ULL / (p + 253ULL)));
  result = (! v * ! v) % (! (p * (unsigned long long)v_5) + 667ULL) - (unsigned long long)(
           ((v_7 * (long long)v_9) / (long long)((int)v_11 + 322)) % (long long)(
           (int)p_13 + 29));
  return result;
}


