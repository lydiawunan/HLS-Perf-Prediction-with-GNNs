#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 730496883
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, float p_4, unsigned long p_6[5][2],
                long long p_8[5], short p_10)
{
  unsigned char v_13;
  short v;
  signed char result;
  v = (short)p_6[3][1];
  v_13 = (unsigned char)(! p_10);
  result = (signed char)((long long)(-18253L - ((long)((int)p - (int)((short)2.68594007635e+38f)) | 7870851L)) - ~ (
                         ((long long)v & p_8[3]) * (long long)((int)p_10 + (int)v_13)));
  result = (signed char)(- (35099LL - (long long)(p_6[2][0] ^ (unsigned long)result)) + (long long)(- (
                         (double)p_8[0] - 409.160047559 * (double)p_10)));
  result = (signed char)(! (((unsigned long)p - 4086585641UL) / (unsigned long)(
                            ((int)result / ((int)((signed char)-4.76652776098e+37) + 395) & (int)p_4) + 91)));
  return result;
}


