#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 598170042
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, short p_9, long p_11,
                  unsigned char p_13[1][1], unsigned long long p_19)
{
  long long v_25;
  unsigned long v_23;
  long long v_21;
  signed char v_17;
  unsigned short v_15;
  unsigned long long v_6;
  unsigned int v_4;
  short v;
  unsigned char result;
  v_25 = -1050701528LL;
  v_23 = (unsigned long)p_9;
  v_21 = (long long)p_9;
  v_17 = (signed char)-100;
  v_15 = (unsigned short)p_9;
  v_6 = 18446744073709487317ULL;
  v_4 = 42144U;
  while (((unsigned long long)((43801UL + (unsigned long)v_4) / (unsigned long)(
                               ((long)v_17 + 63374L) + 733L)) & p_19) >= 108ULL) {
    v_4 = v_23 >> (v_21 % 33LL & 31LL);
    result = p_13[0][0];
    v_15 = (unsigned short)(- v_25);
    v_17 = (signed char)(v_6 + (unsigned long long)((unsigned long)result * p | (unsigned long)result));
  }
  while_0_break: ;
  if (((unsigned long long)(p | (unsigned long)p_9) / ((25817ULL - (unsigned long long)p_11) + 366ULL)) % (unsigned long long)(
      (int)p_13[0][0] + 590) <= (unsigned long long)v_15) {
    v_4 = (unsigned int)v_6;
    v = (short)v_4;
    result = (unsigned char)v;
  }
  else result = (unsigned char)(! (23974ULL + (unsigned long long)(- p)));
  return result;
}


