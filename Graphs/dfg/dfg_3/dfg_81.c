//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 308740984
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, short p_7, signed char p_11[1])
{
  unsigned long long v_13;
  char v_9;
  unsigned long long v_4;
  char v;
  unsigned short result;
  v_13 = (unsigned long long)p;
  v = (char)p_7;
  v_4 = ! v_13;
  v_9 = (char)(~ (unsigned char)102);
  v = (char)(((unsigned long long)(-63157LL + p % (long long)((int)p_7 + 180)) % (
              688063476ULL * (unsigned long long)((unsigned int)v_9 - 836781509U) + 160ULL)) / (
             (unsigned long long)((double)((p << ((int)v & 63)) % 35LL) - (
                                  (double)((unsigned long long)p_11[0] * 18446744072865986315ULL) - 302.384832047)) + 920ULL));
  result = (unsigned short)(40969ULL - 193ULL * ((unsigned long long)(
                                                 (int)v + 241) * ~ v_4));
  return result;
}


