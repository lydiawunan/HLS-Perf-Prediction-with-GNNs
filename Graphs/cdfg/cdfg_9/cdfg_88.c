#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 653610551
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, char p_5, unsigned int p_9, long long p_11,
         unsigned short p_13)
{
  unsigned short v_21;
  float v_19;
  long long v_17;
  float v_15;
  unsigned long long v_7;
  long long v;
  long result;
  v_21 = (unsigned short)p_11;
  v_19 = (float)p_13;
  v_17 = (long long)p_9;
  v_15 = 1.33735201354e+38f;
  v_7 = (unsigned long long)p;
  v = -41861LL;
  result = -702573062L;
  while ((double)result != - (- (8743791200.33 + (double)v_15))) {
    v_15 = (long long)v_19 / 63430LL;
    result = (long)(- (~ (p_9 % (unsigned int)((int)v_21 + 388))));
    v_17 = 12536LL;
    result = (long)(0LL - (long long)((int)v_21 % 10711) % ((v_17 + (long long)p_5) + 539LL));
  }
  while_0_break: ;
  if ((unsigned long long)(- (1.69578944925e+38f * - v_15)) == (unsigned long long)v_17 / (
                                                               18446744072775477333ULL % (unsigned long long)(
                                                               345448440LL * p_11 + 340LL) + 18ULL)) {
    v = (long long)v_7;
    result = (long)(! ((int)(- p) << ((int)p_5 % ((int)p + 109) & 15)));
    result = (long)(! (v + (long long)result) * ((long long)p - -23189LL));
  }
  else result = (long)((unsigned int)(- (-349.685668945f / ((float)p + 550.f))) * p_9);
  return result;
}


