#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 212039358
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, unsigned long long p_7, int p_15,
                unsigned char p_17, unsigned long p_19)
{
  unsigned int v_13;
  int v_11;
  long v_9;
  float v_5;
  long long v;
  signed char result;
  v_11 = 24373;
  v_9 = -765911966L;
  v_5 = 1.57958300602e+38f;
  result = (signed char)-88;
  v = (long long)(1.90473994852e+38f / ((float)(! (v_9 & 77L) % (long)(
                                                ((int)p + 9831) + 307)) + 600.f));
  v_13 = (unsigned int)((long long)(~ ((int)p_17 / 47609 + 834737191)) + 
                        (long long)(((int)p ^ -2420) / ((int)p_17 + 886)) * ! (
                        (long long)p_19 + v));
  v_5 = ((float)(- v_11) * v_5 + (float)((51887U - v_13) % (unsigned int)(
                                         ((int)result + 109) + 536))) / (
        (float)(4262827467ULL - (~ p_7 + (unsigned long long)(1072123673LL * (long long)p_15))) + 112.f);
  result = (signed char)((! (! v) - (long long)((int)(! p) % ((int)((signed char)(
                                                              v_5 + (float)p_7)) + 285))) % (long long)(
                         v_9 + 298L));
  return result;
}


