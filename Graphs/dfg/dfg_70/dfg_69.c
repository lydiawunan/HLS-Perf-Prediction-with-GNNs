#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 133737970
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long long p, unsigned long p_4, unsigned short p_6,
                       long p_15, unsigned int p_17[5][4][2])
{
  char v_13;
  signed char v_11;
  unsigned long v_9;
  unsigned char v;
  unsigned long long result;
  v_13 = (char)6;
  v = (unsigned char)36;
  result = 64038ULL;
  v_9 = (unsigned long)(p_17[0][3][0] + p_17[4][3][1]);
  v_11 = (signed char)(((! p_4 + (unsigned long)(- p_15)) & ((unsigned long)v_13 * v_9) / (unsigned long)(
                                                            p_15 * -43L + 323L)) | 4294967206UL);
  v_9 = (unsigned long)((! (result ^ 11763ULL) + (unsigned long long)(
                         15674UL % (unsigned long)((int)v_13 + 744))) - (unsigned long long)(! p_15));
  result = (unsigned long long)(((p - (long long)p_4) % (long long)((int)(! p_6) + 929)) / -61LL) + 
           (unsigned long long)(((unsigned long)v - v_9) ^ (unsigned long)v_11) * 115671ULL;
  return result;
}


