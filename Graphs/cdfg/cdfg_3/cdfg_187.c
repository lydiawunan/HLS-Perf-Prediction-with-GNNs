#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 345240677
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, double p_4[3], unsigned long long p_7,
                char p_11[5][4][2], unsigned long long p_19)
{
  signed char v_23;
  long long v_21;
  float v_17;
  short v_15;
  double v_13;
  signed char v_9;
  unsigned long long v;
  signed char result;
  v_21 = (long long)p_11[2][1][0];
  v_17 = (float)p_19;
  v_15 = (short)p_4[2];
  v_13 = (double)p_7;
  v_9 = (signed char)p_19;
  v = 18446744073709533352ULL;
  result = (signed char)-109;
  while ((long long)v_15 == 0) {
    v_23 = v_21 / -771183702LL;
    v_13 = (double)(~ ((p_19 - v) - (unsigned long long)(11517 + (int)v_9)));
    result = (signed char)(! ((long)v_23 / 22537L + (long)(v_13 + (double)p_7)));
    v_15 = (short)((190ULL - (p_19 - (unsigned long long)v_23)) / ((unsigned long long)v_17 + 83ULL));
  }
  while_0_break: ;
  if ((unsigned long long)(- v_17) - ((unsigned long long)result % (p_19 + 921ULL)) * (
                                     p_7 % (unsigned long long)(p + 276L)) >= (unsigned long long)p_11[3][0][1]) 
    result = (signed char)(4294914080UL / (unsigned long)((! p + (long)p_4[0]) + 888L));
  else {
    result = (signed char)((float)((int)v_15 * (int)(~ p_11[3][3][0])) * -694.70300293f);
    v = (unsigned long long)((unsigned long)((int)(~ p_11[2][0][0]) + (int)((char)(
                                             v_13 / ((double)result + 217.)))) + (
                             38453UL / (unsigned long)((int)v_15 + 698) >> (
                             (long)result * -714464028L & 31L)));
    result = (signed char)(~ v % ((p_7 - (unsigned long long)v_9) / (
                                  (v ^ (unsigned long long)v_9) + 9ULL) + 459ULL));
  }
  return result;
}


