//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 616627099
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, long p_5, unsigned long long p_7, int p_9, long long p_15)
{
  unsigned short v_19;
  long v_17;
  unsigned long long v_13;
  unsigned char v_11;
  float v;
  long result;
  v_19 = (unsigned short)p_15;
  v_17 = 37846L;
  v_13 = (unsigned long long)p_9;
  v_11 = (unsigned char)48;
  v = 804.95489502f;
  v_17 = (long)(- (! p_7) % (unsigned long long)(~ (! v_17) + 976L) ^ 18446744073709549316ULL);
  v_11 = (unsigned char)(((40699ULL | v_13 * 248753961ULL) + (unsigned long long)v) + 
                         ((p_7 - (unsigned long long)p_15) & (unsigned long long)v_11) % (
                         ((p_7 ^ (unsigned long long)v_17) ^ (unsigned long long)(
                          (unsigned long)v_19 - 40552UL)) + 151ULL));
  v = (float)(- (! ((unsigned long long)p_5 / (p_7 + 933ULL)) / (unsigned long long)(
                 (p_9 / 27 - (int)v_11) + 42)));
  result = (long)(- ((unsigned long)p - 4294916971UL) * (unsigned long)(- (
                  -2342389L / ((long)v + 903L))));
  return result;
}


