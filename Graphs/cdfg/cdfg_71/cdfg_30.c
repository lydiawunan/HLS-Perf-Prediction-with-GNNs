#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 82623519
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, unsigned int p_7)
{
  signed char v_17;
  unsigned char v_15;
  char v_13;
  unsigned long long v_11;
  long v_9;
  long long v_5;
  signed char v;
  signed char result;
  v_17 = (signed char)95;
  v_15 = (unsigned char)17;
  v_13 = (char)-20;
  v_11 = 32143ULL;
  v_9 = -291076233L;
  v_5 = (long long)p_7;
  v = (signed char)p_7;
  while (1402LL - ~ ((long long)p - v_5) != (long long)((unsigned long)(
                                                        3353201279U % (unsigned int)(
                                                        (int)p + 201)) * (
                                                        (3811701060UL * (unsigned long)p_7) % (unsigned long)(
                                                        v_9 + 218L)))) {
    v_15 = (unsigned long long)v_15 / (((unsigned long long)v_13 - (v_11 | 18446744073709551493ULL)) + 323ULL);
    v_11 = (unsigned long long)((23744 + (int)p) - ((int)v_17 ^ ((int)p + (int)((unsigned char)412.020446777f))));
    v_13 = (char)(p_7 - (unsigned int)((24 + (int)v) ^ 60));
    v_9 = (long)p;
  }
  while_0_break: ;
  result = (signed char)((int)(! (! v)) % ((int)(! (~ p)) + 757));
  return result;
}


