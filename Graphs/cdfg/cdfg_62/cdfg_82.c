#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 157537916
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, unsigned long long p_4, signed char p_6,
         unsigned short p_13, signed char p_17)
{
  short v_21;
  long long v_19;
  unsigned long long v_15;
  long long v_11;
  long long v_9;
  unsigned long long v;
  long result;
  v_19 = 387125297LL;
  v_15 = p_4;
  v_11 = (long long)p;
  v_9 = (long long)p_6;
  v = p_4;
  result = (long)p_6;
  while ((long long)p > ! (v_11 % (long long)((int)p + 1018) + (long long)(
                           (int)p_6 % -471013077))) {
    v_21 = v_19 * 51LL;
    v_19 = (long long)(- (- ((int)v_21 * (int)p_6)));
    v_15 = v;
    v_11 = (long long)(((v % (unsigned long long)(v_11 + 172LL)) * (unsigned long long)p_13) / 949548760ULL);
  }
  while_0_break: ;
  if (~ ((unsigned long long)p_13 * v_15) * ((unsigned long long)((int)p_17 % -128) ^ 
                                             p_4 * (unsigned long long)p_13) > v) 
    result = (long)(! ((long long)(64 % ((int)p + 454)) % -120790010LL));
  else {
    v = - ((unsigned long long)v_11 + (p_4 - 18446744073709551536ULL));
    result = (long)(! ((v / (p_4 + 903ULL)) * (unsigned long long)((long long)result * v_9)));
    result = (long)((~ p_4 * (unsigned long long)(- result)) / (unsigned long long)(
                    6652165769LL % (((long long)p_6 - -58650LL) + 66LL) + 335LL));
  }
  return result;
}


