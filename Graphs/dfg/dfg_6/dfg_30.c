//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 924963457
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, unsigned int p_5, unsigned char p_7,
                       int p_9, unsigned int p_15[2])
{
  signed char v_13;
  unsigned short v_11;
  unsigned char v;
  unsigned long long result;
  v_13 = (signed char)-51;
  v_11 = (unsigned short)((long long)(! (4294967173U - (unsigned int)v_13 * p_15[0])) * (
                          (long long)((p_15[1] & (unsigned int)v_13) ^ 
                                      (unsigned int)p_7 / 61727U) % (
                          p + 434LL)));
  v = (unsigned char)(~ (signed char)-47);
  result = (unsigned long long)p_9;
  result = ((unsigned long long)((p >> ((int)v & 63)) / (long long)(! p_5 + 344U)) + 
            ((unsigned long long)p_7 % (result + 706ULL)) % (unsigned long long)(
            ! p_9 + 265)) % (unsigned long long)(1 / ((int)v_11 + 546) + 273);
  return result;
}


