//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 272885367
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, short p_4, short p_7, unsigned long long p_9,
                signed char p_11)
{
  signed char v_13;
  signed char v;
  signed char result;
  v_13 = p_11;
  result = v_13;
  v = (signed char)(! (! ((int)p_11 * (int)result) % ((int)3.42367225038e+22 + 706)));
  result = (signed char)p_9;
  result = (signed char)((float)(((long long)((int)((signed char)-1.34317884558e+38f) - (int)result) / (
                                  ((long long)result + p) + 65LL)) % (long long)(
                                 (int)(! p_4) + 747)) + ((float)(((int)result >> (
                                                                  (int)v & 7)) * (
                                                                 (int)p_7 * (int)p_7)) - - (
                                                         4.99363014941e+37f - (float)p_9)));
  return result;
}


