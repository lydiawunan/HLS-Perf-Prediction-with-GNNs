#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 49023056
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p[5][4], long p_4, unsigned long long p_9,
          float p_11, double p_13)
{
  unsigned long v_21;
  unsigned char v_19;
  unsigned int v_17;
  unsigned short v_15;
  int v_7;
  unsigned long long v;
  short result;
  v_21 = (unsigned long)p_11;
  v_19 = (unsigned char)180;
  v_17 = 39566U;
  result = (short)p_9;
  if (403300128ULL * (unsigned long long)(! (6065LL | (long long)v_19)) != (unsigned long long)(! v_21)) {
    v_7 = (int)(! ((p_9 + 8ULL) ^ p_9));
    v_15 = (unsigned short)61127;
    v = (unsigned long long)((unsigned int)(! (- v_15)) + 4294942963U);
  }
  else {
    v_7 = (int)(! ((4294967171U + v_17) % ((unsigned int)(p_13 / ((double)p_4 + 531.)) + 329U)));
    v = p_9;
    result = (short)v_7;
  }
  while (1ULL == v) {
    v_7 = (int)((double)((v - (unsigned long long)v_7) << ((int)result * (int)p[0][3] & 63)) + 
                (double)(- p_11) * (p_13 * (double)p[3][1]));
    v_7 = (int)(((unsigned long long)v_7 % (v + 1ULL)) / 827ULL);
    v = p_9;
  }
  while_0_break: ;
  return result;
}


