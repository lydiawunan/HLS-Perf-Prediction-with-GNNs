#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1010125073
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, long long p_4, unsigned long long p_7,
              unsigned short p_11, unsigned long long p_17)
{
  short v_19;
  unsigned char v_15;
  long long v_13;
  char v_9;
  long v;
  long long result;
  v_15 = (unsigned char)167;
  v_13 = 652310630LL;
  v_9 = (char)p_4;
  v = (long)p_11;
  result = (long long)p_11;
  v_19 = (short)p_4;
  while ((long long)(((v << 23) * (long)(-29991 >> 6ULL)) % ((long)(-6291556864.f / (
                                                                    (float)(~ p_7) + 582.f)) + 474L)) != 
         (long long)(! (~ v_9)) - ((long long)(v + (long)p_11) + -856065055LL)) {
    v = (int)v_15 * -24405;
    v_15 = (unsigned char)v_19;
    result = (long long)(! (380887184ULL - (unsigned long long)(v_13 * (long long)p_11)));
    v_9 = (char)(((p_17 + (unsigned long long)result) * (unsigned long long)(! v_13)) % (unsigned long long)(
                 ! (v * (long)v_15) + 4L));
  }
  while_0_break: ;
  return result;
}


